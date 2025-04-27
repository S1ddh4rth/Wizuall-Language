/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *output;
void yyerror(const char *s);
int yylex(void);
int indent = 0;
void print_indent() { for (int i = 0; i < indent; i++) fprintf(output, "    "); }


#line 84 "yacc.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "yacc.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM = 3,                        /* NUM  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_STR = 5,                        /* STR  */
  YYSYMBOL_OPEN = 6,                       /* OPEN  */
  YYSYMBOL_LINE = 7,                       /* LINE  */
  YYSYMBOL_BAR = 8,                        /* BAR  */
  YYSYMBOL_SCATTER = 9,                    /* SCATTER  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_FOR = 11,                       /* FOR  */
  YYSYMBOL_WHILE = 12,                     /* WHILE  */
  YYSYMBOL_PRINT = 13,                     /* PRINT  */
  YYSYMBOL_SORT = 14,                      /* SORT  */
  YYSYMBOL_FUN = 15,                       /* FUN  */
  YYSYMBOL_FROM = 16,                      /* FROM  */
  YYSYMBOL_TO = 17,                        /* TO  */
  YYSYMBOL_AVG = 18,                       /* AVG  */
  YYSYMBOL_ASSIGN = 19,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 20,                      /* PLUS  */
  YYSYMBOL_MINUS = 21,                     /* MINUS  */
  YYSYMBOL_MUL = 22,                       /* MUL  */
  YYSYMBOL_DIV = 23,                       /* DIV  */
  YYSYMBOL_SC = 24,                        /* SC  */
  YYSYMBOL_COMMA = 25,                     /* COMMA  */
  YYSYMBOL_LPAR = 26,                      /* LPAR  */
  YYSYMBOL_RPAR = 27,                      /* RPAR  */
  YYSYMBOL_LCURL = 28,                     /* LCURL  */
  YYSYMBOL_RCURL = 29,                     /* RCURL  */
  YYSYMBOL_LBRACK = 30,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 31,                    /* RBRACK  */
  YYSYMBOL_EQ = 32,                        /* EQ  */
  YYSYMBOL_NEQ = 33,                       /* NEQ  */
  YYSYMBOL_GTE = 34,                       /* GTE  */
  YYSYMBOL_LTE = 35,                       /* LTE  */
  YYSYMBOL_GT = 36,                        /* GT  */
  YYSYMBOL_LT = 37,                        /* LT  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_program = 39,                   /* program  */
  YYSYMBOL_statement = 40,                 /* statement  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_42_2 = 42,                      /* $@2  */
  YYSYMBOL_43_3 = 43,                      /* $@3  */
  YYSYMBOL_func_defn = 44,                 /* func_defn  */
  YYSYMBOL_45_4 = 45,                      /* $@4  */
  YYSYMBOL_parameters = 46,                /* parameters  */
  YYSYMBOL_p_items = 47,                   /* p_items  */
  YYSYMBOL_expr_list = 48,                 /* expr_list  */
  YYSYMBOL_list = 49,                      /* list  */
  YYSYMBOL_list_items = 50,                /* list_items  */
  YYSYMBOL_condition = 51,                 /* condition  */
  YYSYMBOL_expr = 52                       /* expr  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   197

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  50
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    29,    29,    30,    31,    34,    35,    39,    48,    58,
      68,    72,    72,    79,    79,    86,    90,    94,    98,   102,
     102,   109,   113,   113,   131,   134,   140,   143,   151,   154,
     159,   165,   173,   176,   184,   185,   186,   187,   188,   189,
     193,   194,   195,   196,   197,   198,   199,   203,   206,   209,
     212
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "NUM", "ID", "STR",
  "OPEN", "LINE", "BAR", "SCATTER", "IF", "FOR", "WHILE", "PRINT", "SORT",
  "FUN", "FROM", "TO", "AVG", "ASSIGN", "PLUS", "MINUS", "MUL", "DIV",
  "SC", "COMMA", "LPAR", "RPAR", "LCURL", "RCURL", "LBRACK", "RBRACK",
  "EQ", "NEQ", "GTE", "LTE", "GT", "LT", "$accept", "program", "statement",
  "$@1", "$@2", "$@3", "func_defn", "$@4", "parameters", "p_items",
  "expr_list", "list", "list_items", "condition", "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-71)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     156,    14,    12,    17,    18,    31,    16,    49,    53,    59,
      62,   170,   -71,   -71,     1,    33,    13,    84,    81,   132,
      33,   123,    33,    33,   114,   -71,   -71,   -71,   -71,     4,
     -71,   134,   116,    33,   119,    75,    87,    27,    80,   120,
     121,   -71,   124,   145,    -9,    33,   157,    41,   142,    33,
     144,   -71,   143,   -23,    80,   -71,    33,    33,    33,    33,
     -71,    33,    33,   149,   -71,   -71,   -71,   158,    33,    33,
      33,    33,    33,    33,    70,   159,   164,   -71,   162,   165,
      40,   160,   166,    33,   -71,    80,    80,    80,    80,    83,
      80,   -71,   -71,    80,    80,    80,    80,    80,    80,    33,
     -71,   -71,   167,   188,   172,   -71,   -71,    80,   -71,   156,
      61,   156,   -71,   -71,   -71,    65,   -71,   112,   156,   -71,
     156,   -71,   122,   146,   -71,   -71
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     3,     4,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,    21,    46,    44,
      45,     0,     0,     0,     0,     0,    44,     0,    28,     0,
       0,     8,     0,     0,     0,     0,     0,     0,    25,    30,
       0,    47,     0,     0,    32,    16,     0,     0,     0,     0,
      15,    30,     0,     0,     6,     7,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,    24,
       0,     0,     0,     0,    31,    40,    41,    42,    43,     0,
      29,    17,    19,    34,    35,    38,    39,    36,    37,     0,
      13,    10,     0,     0,    49,    48,    50,    33,    49,     5,
       0,     5,    22,    27,    18,     0,    11,     0,     5,    20,
       5,    14,     0,     0,    23,    12
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -71,   -70,   -11,   -71,   -71,   -71,    -8,   -71,   -71,   -71,
     -32,   -71,   -71,   175,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,   120,   111,   109,    13,   118,    78,    79,
      37,    34,    53,    43,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      26,    35,    83,    27,    28,    29,    30,    44,    84,    44,
      47,    56,    57,    58,    59,    31,    16,    80,    39,    32,
      54,    17,    18,    68,    69,    70,    71,    72,    73,    89,
      49,    33,    74,    14,    50,    19,    28,    36,    30,   115,
      15,   117,    20,    85,    86,    87,    88,    31,   122,    90,
     123,    32,    62,    21,    63,    93,    94,    95,    96,    97,
      98,    56,    57,    58,    59,    62,    24,   104,    76,     1,
     107,     2,     3,     4,     5,     6,     7,     8,     9,    22,
      10,    56,    57,    58,    59,    23,   110,    99,    40,   116,
      56,    57,    58,    59,   119,    56,    57,    58,    59,    60,
      56,    57,    58,    59,    26,    41,    26,    27,    62,    27,
     108,    26,    26,    61,    27,    27,     1,    50,     2,     3,
       4,     5,     6,     7,     8,     9,     1,    10,     2,     3,
       4,     5,     6,     7,     8,     9,    42,    10,    51,    45,
      48,   121,    52,    55,    64,    65,    77,    82,    66,    81,
       1,   124,     2,     3,     4,     5,     6,     7,     8,     9,
       1,    10,     2,     3,     4,     5,     6,     7,     8,     9,
      25,    10,    67,    91,     1,   125,     2,     3,     4,     5,
       6,     7,     8,     9,    75,    10,    92,   100,   101,   102,
     103,   105,   113,   106,     0,   112,   114,    46
};

static const yytype_int8 yycheck[] =
{
      11,    14,    25,    11,     3,     4,     5,    20,    31,    22,
      23,    20,    21,    22,    23,    14,     4,    49,     5,    18,
      33,     4,     4,    32,    33,    34,    35,    36,    37,    61,
      26,    30,    45,    19,    30,     4,     3,     4,     5,   109,
      26,   111,    26,    56,    57,    58,    59,    14,   118,    62,
     120,    18,    25,     4,    27,    68,    69,    70,    71,    72,
      73,    20,    21,    22,    23,    25,     4,    27,    27,     4,
      83,     6,     7,     8,     9,    10,    11,    12,    13,    26,
      15,    20,    21,    22,    23,    26,    99,    17,     4,    28,
      20,    21,    22,    23,    29,    20,    21,    22,    23,    24,
      20,    21,    22,    23,   115,    24,   117,   115,    25,   117,
      27,   122,   123,    26,   122,   123,     4,    30,     6,     7,
       8,     9,    10,    11,    12,    13,     4,    15,     6,     7,
       8,     9,    10,    11,    12,    13,     4,    15,     4,    16,
      26,    29,    26,    24,    24,    24,     4,     4,    24,     5,
       4,    29,     6,     7,     8,     9,    10,    11,    12,    13,
       4,    15,     6,     7,     8,     9,    10,    11,    12,    13,
       0,    15,    27,    24,     4,    29,     6,     7,     8,     9,
      10,    11,    12,    13,    27,    15,    28,    28,    24,    27,
      25,    31,     4,    27,    -1,    28,    24,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     6,     7,     8,     9,    10,    11,    12,    13,
      15,    39,    40,    44,    19,    26,     4,     4,     4,     4,
      26,     4,    26,    26,     4,     0,    40,    44,     3,     4,
       5,    14,    18,    30,    49,    52,     4,    48,    52,     5,
       4,    24,     4,    51,    52,    16,    51,    52,    26,    26,
      30,     4,    26,    50,    52,    24,    20,    21,    22,    23,
      24,    26,    25,    27,    24,    24,    24,    27,    32,    33,
      34,    35,    36,    37,    52,    27,    27,     4,    46,    47,
      48,     5,     4,    25,    31,    52,    52,    52,    52,    48,
      52,    24,    28,    52,    52,    52,    52,    52,    52,    17,
      28,    24,    27,    25,    27,    31,    27,    52,    27,    43,
      52,    42,    28,     4,    24,    39,    28,    39,    45,    29,
      41,    29,    39,    39,    29,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    39,    40,    40,    40,    40,    40,
      40,    41,    40,    42,    40,    40,    40,    40,    40,    43,
      40,    40,    45,    44,    46,    46,    47,    47,    48,    48,
      48,    49,    50,    50,    51,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     1,     0,     4,     4,     3,     4,
       5,     0,    10,     0,     8,     4,     4,     5,     7,     0,
       8,     1,     0,     9,     1,     0,     1,     3,     1,     3,
       0,     3,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     2,     4,     4,
       4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 6: /* statement: OPEN ID STR SC  */
#line 35 "yacc.y"
                    {
        print_indent();
        fprintf(output, "%s = pd.read_csv(%s)\n", (yyvsp[-2].str), (yyvsp[-1].str));
    }
#line 1212 "yacc.tab.c"
    break;

  case 7: /* statement: LINE ID ID SC  */
#line 39 "yacc.y"
                  {
        fprintf(output,
    "plt.figure(figsize=(8, 4))\n"
    "plt.plot(df['%s'], df['%s'])\n"
    "plt.xlabel('%s')\n"
    "plt.ylabel('%s')\n"
    "plt.savefig('line.png')\n",
    (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[-2].str), (yyvsp[-1].str));
    }
#line 1226 "yacc.tab.c"
    break;

  case 8: /* statement: BAR ID SC  */
#line 48 "yacc.y"
              {
        fprintf(output,
    "plt.figure(figsize=(8, 4))\n"
    "plt.hist(df['%s'])\n"
    "plt.xlabel('%s')\n"
    "plt.ylabel('Frequency')\n"
    "plt.savefig('bar.png')\n",
    (yyvsp[-1].str), (yyvsp[-1].str));

    }
#line 1241 "yacc.tab.c"
    break;

  case 9: /* statement: SCATTER ID ID SC  */
#line 58 "yacc.y"
                     {
        fprintf(output,
    "plt.figure(figsize=(8, 4))\n"
    "plt.scatter(df['%s'], df['%s'])\n"
    "plt.xlabel('%s')\n"
    "plt.ylabel('%s')\n"
    "plt.savefig('scatter.png')\n",
    (yyvsp[-2].str), (yyvsp[-1].str), (yyvsp[-2].str), (yyvsp[-1].str));

    }
#line 1256 "yacc.tab.c"
    break;

  case 10: /* statement: PRINT LPAR expr RPAR SC  */
#line 68 "yacc.y"
                            {
        print_indent();
        fprintf(output, "print(%s)\n", (yyvsp[-2].str));
    }
#line 1265 "yacc.tab.c"
    break;

  case 11: /* $@1: %empty  */
#line 72 "yacc.y"
                                    {
        print_indent();
        fprintf(output, "for %s in range(%s, %s+1):\n", (yyvsp[-5].str), (yyvsp[-3].str), (yyvsp[-1].str));
        indent++;
    }
#line 1275 "yacc.tab.c"
    break;

  case 12: /* statement: FOR ID FROM expr TO expr LCURL $@1 program RCURL  */
#line 76 "yacc.y"
                    {
        indent--;
    }
#line 1283 "yacc.tab.c"
    break;

  case 13: /* $@2: %empty  */
#line 79 "yacc.y"
                                    {
        print_indent();
        fprintf(output, "while %s:\n", (yyvsp[-2].str));
        indent++;
    }
#line 1293 "yacc.tab.c"
    break;

  case 14: /* statement: WHILE LPAR condition RPAR LCURL $@2 program RCURL  */
#line 83 "yacc.y"
                    {
        indent--;
    }
#line 1301 "yacc.tab.c"
    break;

  case 15: /* statement: ID ASSIGN expr SC  */
#line 86 "yacc.y"
                      {
        print_indent();
        fprintf(output, "%s = %s\n", (yyvsp[-3].str), (yyvsp[-1].str));
    }
#line 1310 "yacc.tab.c"
    break;

  case 16: /* statement: ID ASSIGN list SC  */
#line 90 "yacc.y"
                      {
        print_indent();
        fprintf(output, "%s = %s\n", (yyvsp[-3].str), (yyvsp[-1].str));
    }
#line 1319 "yacc.tab.c"
    break;

  case 17: /* statement: ID LPAR expr_list RPAR SC  */
#line 94 "yacc.y"
                             {
        print_indent();
        fprintf(output, "%s(%s)\n", (yyvsp[-4].str), (yyvsp[-2].str));
    }
#line 1328 "yacc.tab.c"
    break;

  case 18: /* statement: ID ASSIGN ID LPAR expr_list RPAR SC  */
#line 98 "yacc.y"
                                        {
        print_indent();
        fprintf(output, "%s = %s(%s)\n", (yyvsp[-6].str), (yyvsp[-4].str), (yyvsp[-2].str));
    }
#line 1337 "yacc.tab.c"
    break;

  case 19: /* $@3: %empty  */
#line 102 "yacc.y"
                                 {
        print_indent();
        fprintf(output, "if %s:\n", (yyvsp[-2].str));
        indent++;
    }
#line 1347 "yacc.tab.c"
    break;

  case 20: /* statement: IF LPAR condition RPAR LCURL $@3 program RCURL  */
#line 106 "yacc.y"
                    {
        indent--;
    }
#line 1355 "yacc.tab.c"
    break;

  case 22: /* $@4: %empty  */
#line 113 "yacc.y"
                                      {
        print_indent();
        fprintf(output, "def %s(%s):\n", (yyvsp[-4].str), (yyvsp[-2].str));
        indent++;
    }
#line 1365 "yacc.tab.c"
    break;

  case 23: /* func_defn: FUN ID LPAR parameters RPAR LCURL $@4 program RCURL  */
#line 117 "yacc.y"
                    {
        indent--;
    }
#line 1373 "yacc.tab.c"
    break;

  case 24: /* parameters: p_items  */
#line 131 "yacc.y"
            {
        (yyval.str) = (yyvsp[0].str);
    }
#line 1381 "yacc.tab.c"
    break;

  case 25: /* parameters: %empty  */
#line 134 "yacc.y"
    {
        (yyval.str) = strdup("");
    }
#line 1389 "yacc.tab.c"
    break;

  case 26: /* p_items: ID  */
#line 140 "yacc.y"
       {
        (yyval.str) = strdup((yyvsp[0].str));
    }
#line 1397 "yacc.tab.c"
    break;

  case 27: /* p_items: p_items COMMA ID  */
#line 143 "yacc.y"
                     {
        char *buf = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 3);
        sprintf(buf, "%s, %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = buf;
    }
#line 1407 "yacc.tab.c"
    break;

  case 28: /* expr_list: expr  */
#line 151 "yacc.y"
         {
        (yyval.str) = strdup((yyvsp[0].str));
    }
#line 1415 "yacc.tab.c"
    break;

  case 29: /* expr_list: expr_list COMMA expr  */
#line 154 "yacc.y"
                         {
        char *buf = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 3);
        sprintf(buf, "%s, %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = buf;
    }
#line 1425 "yacc.tab.c"
    break;

  case 30: /* expr_list: %empty  */
#line 159 "yacc.y"
    {
        (yyval.str) = strdup("");
    }
#line 1433 "yacc.tab.c"
    break;

  case 31: /* list: LBRACK list_items RBRACK  */
#line 165 "yacc.y"
                             {
        char *buf = malloc(strlen((yyvsp[-1].str)) + 3);
        sprintf(buf, "[%s]", (yyvsp[-1].str));
        (yyval.str) = buf;
    }
#line 1443 "yacc.tab.c"
    break;

  case 32: /* list_items: expr  */
#line 173 "yacc.y"
         {
        (yyval.str) = strdup((yyvsp[0].str));
    }
#line 1451 "yacc.tab.c"
    break;

  case 33: /* list_items: list_items COMMA expr  */
#line 176 "yacc.y"
                          {
        char *buf = malloc(strlen((yyvsp[-2].str)) + strlen((yyvsp[0].str)) + 3);
        sprintf(buf, "%s, %s", (yyvsp[-2].str), (yyvsp[0].str));
        (yyval.str) = buf;
    }
#line 1461 "yacc.tab.c"
    break;

  case 34: /* condition: expr EQ expr  */
#line 184 "yacc.y"
                     { asprintf(&(yyval.str), "%s == %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1467 "yacc.tab.c"
    break;

  case 35: /* condition: expr NEQ expr  */
#line 185 "yacc.y"
                     { asprintf(&(yyval.str), "%s != %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1473 "yacc.tab.c"
    break;

  case 36: /* condition: expr GT expr  */
#line 186 "yacc.y"
                     { asprintf(&(yyval.str), "%s > %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1479 "yacc.tab.c"
    break;

  case 37: /* condition: expr LT expr  */
#line 187 "yacc.y"
                     { asprintf(&(yyval.str), "%s < %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1485 "yacc.tab.c"
    break;

  case 38: /* condition: expr GTE expr  */
#line 188 "yacc.y"
                     { asprintf(&(yyval.str), "%s >= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1491 "yacc.tab.c"
    break;

  case 39: /* condition: expr LTE expr  */
#line 189 "yacc.y"
                     { asprintf(&(yyval.str), "%s <= %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1497 "yacc.tab.c"
    break;

  case 40: /* expr: expr PLUS expr  */
#line 193 "yacc.y"
                     { asprintf(&(yyval.str), "%s + %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1503 "yacc.tab.c"
    break;

  case 41: /* expr: expr MINUS expr  */
#line 194 "yacc.y"
                     { asprintf(&(yyval.str), "%s - %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1509 "yacc.tab.c"
    break;

  case 42: /* expr: expr MUL expr  */
#line 195 "yacc.y"
                     { asprintf(&(yyval.str), "%s * %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1515 "yacc.tab.c"
    break;

  case 43: /* expr: expr DIV expr  */
#line 196 "yacc.y"
                     { asprintf(&(yyval.str), "%s / %s", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1521 "yacc.tab.c"
    break;

  case 44: /* expr: ID  */
#line 197 "yacc.y"
                     { (yyval.str) = strdup((yyvsp[0].str)); }
#line 1527 "yacc.tab.c"
    break;

  case 45: /* expr: STR  */
#line 198 "yacc.y"
                  { (yyval.str) = strdup((yyvsp[0].str)); }
#line 1533 "yacc.tab.c"
    break;

  case 46: /* expr: NUM  */
#line 199 "yacc.y"
                  {
        char buf[16]; sprintf(buf, "%d", (yyvsp[0].num));
        (yyval.str) = strdup(buf);
    }
#line 1542 "yacc.tab.c"
    break;

  case 47: /* expr: SORT ID  */
#line 203 "yacc.y"
            {
        asprintf(&(yyval.str), "sorted(%s)", (yyvsp[0].str));
    }
#line 1550 "yacc.tab.c"
    break;

  case 48: /* expr: ID LBRACK STR RBRACK  */
#line 206 "yacc.y"
                         {
        asprintf(&(yyval.str), "%s[%s]", (yyvsp[-3].str), (yyvsp[-1].str));
    }
#line 1558 "yacc.tab.c"
    break;

  case 49: /* expr: ID LPAR expr_list RPAR  */
#line 209 "yacc.y"
                           {
        asprintf(&(yyval.str), "%s(%s)", (yyvsp[-3].str), (yyvsp[-1].str));
    }
#line 1566 "yacc.tab.c"
    break;

  case 50: /* expr: AVG LPAR ID RPAR  */
#line 212 "yacc.y"
                     {
        asprintf(&(yyval.str) , "sum(%s) / len(%s)" , (yyvsp[-1].str),(yyvsp[-1].str));
  }
#line 1574 "yacc.tab.c"
    break;


#line 1578 "yacc.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 217 "yacc.y"


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
