%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *output;
void yyerror(const char *s);
int yylex(void);
int indent = 0;
void print_indent() { for (int i = 0; i < indent; i++) fprintf(output, "    "); }

%}

%union {
    int num;
    char* str;
}

%token <num> NUM
%token <str> ID STR
%type <str> parameters p_items statement func_defn condition list list_items expr expr_list assignment return_stmt program_with_return

%token OPEN LINE BAR SCATTER IF FOR WHILE PRINT SORT FUN FROM TO AVG ASSIGN PLUS MINUS MUL DIV SC COMMA LPAR RPAR LCURL RCURL LBRACK RBRACK EQ NEQ GTE LTE GT LT RETURN

%start program

%%
program:
    program statement
  | statement
  | func_defn
  ;

statement:
  |  OPEN ID STR SC {
        print_indent();
        fprintf(output, "%s = pd.read_csv(%s)\n", $2, $3);
    }
  | LINE ID ID SC {
        print_indent();
        fprintf(output, "plt.figure(figsize=(8, 4))\n");
        print_indent();
        fprintf(output, "plt.plot(df['%s'], df['%s'])\n", $2, $3);
        print_indent();
        fprintf(output, "plt.xlabel('%s')\n", $2);
        print_indent();
        fprintf(output, "plt.ylabel('%s')\n", $3);
        print_indent();
        fprintf(output, "plt.savefig('line.png')\n");

    }
  | BAR ID SC {
        print_indent();
        fprintf(output, "plt.figure(figsize=(8, 4))\n");
        print_indent();
        fprintf(output, "plt.hist(df['%s'])\n", $2);
        print_indent();
        fprintf(output, "plt.xlabel('%s')\n", $2);
        print_indent();
        fprintf(output, "plt.ylabel('Frequency')\n");
        print_indent();
        fprintf(output, "plt.savefig('bar.png')\n");
        print_indent();

    }
  | SCATTER ID ID SC {
        print_indent();
        fprintf(output, "plt.figure(figsize=(8, 4))\n");
        print_indent();
        fprintf(output, "plt.scatter(df['%s'], df['%s'])\n", $2, $3);
        print_indent();
        fprintf(output, "plt.xlabel('%s')\n", $2);
        print_indent();
        fprintf(output, "plt.ylabel('%s')\n", $3);
        print_indent();
        fprintf(output, "plt.savefig('scatter.png')\n");

    }
  | PRINT LPAR expr RPAR SC {
        print_indent();
        fprintf(output, "print(%s)\n", $3);
    }
  |  FOR ID FROM expr TO expr LCURL {
        print_indent();
        fprintf(output, "for %s in range(%s, %s+1):\n", $2, $4, $6);
        indent++;
    } program RCURL {
        indent--;
    }
  | WHILE LPAR condition RPAR LCURL {
        print_indent();
        fprintf(output, "while %s:\n", $3);
        indent++;
    } program RCURL {
        indent--;
    }
  | ID ASSIGN expr SC {
        print_indent();
        fprintf(output, "%s = %s\n", $1, $3);
    }
  | ID ASSIGN list SC {
        print_indent();
        fprintf(output, "%s = %s\n", $1, $3);
    }
  | ID LPAR expr_list RPAR SC{
        print_indent();
        fprintf(output, "%s(%s)\n", $1, $3);
    }
  | ID ASSIGN ID LPAR expr_list RPAR SC {
        print_indent();
        fprintf(output, "%s = %s(%s)\n", $1, $3, $5);
    }
  | IF LPAR condition RPAR LCURL {
        print_indent();
        fprintf(output, "if %s:\n", $3);
        indent++;
    } program RCURL {
        indent--;
    }
  | func_defn
  ;

func_defn:
    FUN ID LPAR parameters RPAR LCURL {
        print_indent();
        fprintf(output, "def %s(%s):\n", $2, $4);
        indent++;
    }
    program_with_return
    RCURL {
        indent--;
    }
;

program_with_return:
    program return_stmt
    {
        fprintf(output, "    return %s\n", $2);
    }
;

return_stmt:
    RETURN expr SC {
        $$ = $2; // This can be used to reference the return expression
    }
;


assignment:
    ID ASSIGN expr {
        char *buf = malloc(strlen($1) + strlen($3) + 4);
        sprintf(buf, "%s = %s", $1, $3);
        $$ = buf;
    }
  ;

parameters:
    p_items {
        $$ = $1;
    }
  | {
        $$ = strdup("");
    }
  ;

p_items:
    ID {
        $$ = strdup($1);
    }
  | p_items COMMA ID {
        char *buf = malloc(strlen($1) + strlen($3) + 3);
        sprintf(buf, "%s, %s", $1, $3);
        $$ = buf;
    }
  ;

expr_list:
    expr {
        $$ = strdup($1);
    }
  | expr_list COMMA expr {
        char *buf = malloc(strlen($1) + strlen($3) + 3);
        sprintf(buf, "%s, %s", $1, $3);
        $$ = buf;
    }
  | {
        $$ = strdup("");
    }
  ;

list:
    LBRACK list_items RBRACK {
        char *buf = malloc(strlen($2) + 3);
        sprintf(buf, "[%s]", $2);
        $$ = buf;
    }
  ;

list_items:
    expr {
        $$ = strdup($1);
    }
  | list_items COMMA expr {
        char *buf = malloc(strlen($1) + strlen($3) + 3);
        sprintf(buf, "%s, %s", $1, $3);
        $$ = buf;
    }
  ;

condition:
    expr EQ expr     { asprintf(&$$, "%s == %s", $1, $3); }
  | expr NEQ expr    { asprintf(&$$, "%s != %s", $1, $3); }
  | expr GT expr     { asprintf(&$$, "%s > %s", $1, $3); }
  | expr LT expr     { asprintf(&$$, "%s < %s", $1, $3); }
  | expr GTE expr    { asprintf(&$$, "%s >= %s", $1, $3); }
  | expr LTE expr    { asprintf(&$$, "%s <= %s", $1, $3); }
  ;

expr:
    expr PLUS expr   { asprintf(&$$, "%s + %s", $1, $3); }
  | expr MINUS expr  { asprintf(&$$, "%s - %s", $1, $3); }
  | expr MUL expr    { asprintf(&$$, "%s * %s", $1, $3); }
  | expr DIV expr    { asprintf(&$$, "%s / %s", $1, $3); }
  | ID               { $$ = strdup($1); }
  | STR           { $$ = strdup($1); }
  | NUM           {
        char buf[16]; sprintf(buf, "%d", $1);
        $$ = strdup(buf);
    }
  | SORT ID {
        asprintf(&$$, "sorted(%s)", $2);
    }
  | ID LBRACK STR RBRACK {
        asprintf(&$$, "%s[%s]", $1, $3);
    }
  | ID LPAR expr_list RPAR {
        asprintf(&$$, "%s(%s)", $1, $3);
    }
  | AVG LPAR ID RPAR {
        asprintf(&$$ , "sum(%s) / len(%s)" , $3,$3);
  }
  ;

%%

int main() {
    output = fopen("out.py", "w");
    fprintf(output, "import pandas as pd\nimport matplotlib.pyplot as plt\n\n");
    yyparse();
    fclose(output);
    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
