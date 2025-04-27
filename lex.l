%{
#include "yacc.tab.h"
#include <stdio.h>
#include <string.h>
%}

%%

"OPEN"            { return OPEN; }
"LINE"            { return LINE; }
"BAR"            { return BAR; }
"SCATTER"         { return SCATTER; }
"if"              { return IF; }
"for"             { return FOR; }
"while"           { return WHILE; }
"print"           { return PRINT;} 
"sort"            { return SORT;}
"function"        { return FUN;}
"from"            { return FROM;}
"avg"             { return AVG;}
"to"              { return TO;}
"=="              { return EQ; }
"!="              { return NEQ; }
">="              { return GTE; }
"<="              { return LTE; }
">"               { return GT; }
"<"               { return LT; }
"("               { return LPAR; }
")"               { return RPAR; }
"{"               { return LCURL; }
"}"               { return RCURL; }
"["               { return LBRACK; }
"]"               { return RBRACK; }
"="               { return ASSIGN; }
"+"               { return PLUS; }
"-"               { return MINUS; }
"*"               { return MUL; }
"/"               { return DIV; }
";"               { return SC; }
","               { return COMMA; }


\"[^"]*\"         { yylval.str = strdup(yytext); return STR; }
[0-9]+            { yylval.num = atoi(yytext); return NUM; }
[a-zA-Z_][a-zA-Z0-9_]*  { yylval.str = strdup(yytext); return ID; }

[ \t\n]+          {}
"%%".*        {}

.                 { printf("Unknown character: %s\n", yytext); }

%%

int yywrap() {
    return 1;
}
