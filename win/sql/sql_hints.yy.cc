
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 1

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse         HINT_PARSER_parse
#define yylex           HINT_PARSER_lex
#define yyerror         HINT_PARSER_error
#define yylval          HINT_PARSER_lval
#define yychar          HINT_PARSER_char
#define yydebug         HINT_PARSER_debug
#define yynerrs         HINT_PARSER_nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 28 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"

#include "sql_class.h"
#include "parse_tree_hints.h"
#include "sql_lex_hints.h"
#include "sql_const.h"

#define NEW_PTN new (thd->mem_root)


/* Line 189 of yacc.c  */
#line 91 "E:/mysql/win/sql/sql_hints.yy.cc"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     MAX_EXECUTION_TIME_HINT = 258,
     BKA_HINT = 259,
     BNL_HINT = 260,
     DUPSWEEDOUT_HINT = 261,
     FIRSTMATCH_HINT = 262,
     INTOEXISTS_HINT = 263,
     LOOSESCAN_HINT = 264,
     MATERIALIZATION_HINT = 265,
     NO_BKA_HINT = 266,
     NO_BNL_HINT = 267,
     NO_ICP_HINT = 268,
     NO_MRR_HINT = 269,
     NO_RANGE_OPTIMIZATION_HINT = 270,
     NO_SEMIJOIN_HINT = 271,
     MRR_HINT = 272,
     QB_NAME_HINT = 273,
     SEMIJOIN_HINT = 274,
     SUBQUERY_HINT = 275,
     HINT_ARG_NUMBER = 276,
     HINT_ARG_IDENT = 277,
     HINT_ARG_QB_NAME = 278,
     HINT_CLOSE = 279,
     HINT_ERROR = 280
   };
#endif
/* Tokens.  */
#define MAX_EXECUTION_TIME_HINT 258
#define BKA_HINT 259
#define BNL_HINT 260
#define DUPSWEEDOUT_HINT 261
#define FIRSTMATCH_HINT 262
#define INTOEXISTS_HINT 263
#define LOOSESCAN_HINT 264
#define MATERIALIZATION_HINT 265
#define NO_BKA_HINT 266
#define NO_BNL_HINT 267
#define NO_ICP_HINT 268
#define NO_MRR_HINT 269
#define NO_RANGE_OPTIMIZATION_HINT 270
#define NO_SEMIJOIN_HINT 271
#define MRR_HINT 272
#define QB_NAME_HINT 273
#define SEMIJOIN_HINT 274
#define SUBQUERY_HINT 275
#define HINT_ARG_NUMBER 276
#define HINT_ARG_IDENT 277
#define HINT_ARG_QB_NAME 278
#define HINT_CLOSE 279
#define HINT_ERROR 280




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 182 "E:/mysql/win/sql/sql_hints.yy.cc"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  58
/* YYNRULES -- Number of states.  */
#define YYNSTATES  100

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   280

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    27,     2,     2,    28,     2,     2,     2,     2,     2,
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
      25
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    15,    18,    20,    22,
      24,    26,    28,    33,    34,    36,    38,    42,    43,    45,
      47,    51,    52,    54,    56,    60,    62,    64,    67,    69,
      72,    73,    75,    81,    87,    93,    94,    96,   100,   102,
     104,   106,   108,   110,   112,   117,   123,   128,   134,   140,
     146,   148,   150,   152,   154,   156,   158,   160,   162
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      30,     0,    -1,    31,    24,    -1,    31,     1,    24,    -1,
       1,    24,    -1,    32,    -1,    31,    32,    -1,    50,    -1,
      49,    -1,    45,    -1,    55,    -1,    33,    -1,     3,    26,
      21,    27,    -1,    -1,    35,    -1,    42,    -1,    35,    28,
      42,    -1,    -1,    37,    -1,    41,    -1,    37,    28,    41,
      -1,    -1,    39,    -1,    40,    -1,    39,    28,    40,    -1,
      22,    -1,    22,    -1,    22,    44,    -1,    42,    -1,    23,
      22,    -1,    -1,    23,    -1,    19,    26,    44,    46,    27,
      -1,    16,    26,    44,    46,    27,    -1,    20,    26,    44,
      48,    27,    -1,    -1,    47,    -1,    46,    28,    47,    -1,
       7,    -1,     9,    -1,    10,    -1,     6,    -1,    10,    -1,
       8,    -1,    51,    26,    34,    27,    -1,    51,    26,    23,
      36,    27,    -1,    52,    26,    34,    27,    -1,    52,    26,
      23,    36,    27,    -1,    53,    26,    43,    38,    27,    -1,
      54,    26,    43,    38,    27,    -1,     4,    -1,     5,    -1,
      11,    -1,    12,    -1,    17,    -1,    15,    -1,    13,    -1,
      14,    -1,    18,    26,    22,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   127,   129,   134,   140,   148,   149,   150,
     151,   152,   157,   179,   180,   184,   190,   199,   200,   204,
     210,   219,   220,   224,   230,   239,   243,   251,   259,   260,
     268,   269,   273,   280,   287,   296,   297,   301,   308,   309,
     310,   311,   315,   317,   322,   328,   335,   341,   351,   358,
     368,   372,   379,   383,   390,   394,   401,   405,   412
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "MAX_EXECUTION_TIME_HINT", "BKA_HINT",
  "BNL_HINT", "DUPSWEEDOUT_HINT", "FIRSTMATCH_HINT", "INTOEXISTS_HINT",
  "LOOSESCAN_HINT", "MATERIALIZATION_HINT", "NO_BKA_HINT", "NO_BNL_HINT",
  "NO_ICP_HINT", "NO_MRR_HINT", "NO_RANGE_OPTIMIZATION_HINT",
  "NO_SEMIJOIN_HINT", "MRR_HINT", "QB_NAME_HINT", "SEMIJOIN_HINT",
  "SUBQUERY_HINT", "HINT_ARG_NUMBER", "HINT_ARG_IDENT", "HINT_ARG_QB_NAME",
  "HINT_CLOSE", "HINT_ERROR", "'('", "')'", "','", "$accept", "start",
  "hint_list", "hint", "max_execution_time_hint",
  "opt_hint_param_table_list", "hint_param_table_list",
  "opt_hint_param_table_list_empty_qb", "hint_param_table_list_empty_qb",
  "opt_hint_param_index_list", "hint_param_index_list", "hint_param_index",
  "hint_param_table_empty_qb", "hint_param_table", "hint_param_table_ext",
  "opt_qb_name", "qb_level_hint", "semijoin_strategies",
  "semijoin_strategy", "subquery_strategy", "table_level_hint",
  "index_level_hint", "table_level_hint_type_on",
  "table_level_hint_type_off", "key_level_hint_type_on",
  "key_level_hint_type_off", "qb_name_hint", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,    40,    41,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    30,    30,    30,    31,    31,    32,    32,    32,
      32,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      37,    38,    38,    39,    39,    40,    41,    42,    43,    43,
      44,    44,    45,    45,    45,    46,    46,    46,    47,    47,
      47,    47,    48,    48,    49,    49,    49,    49,    50,    50,
      51,    51,    52,    52,    53,    53,    54,    54,    55
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     4,     0,     1,     1,     3,     0,     1,     1,
       3,     0,     1,     1,     3,     1,     1,     2,     1,     2,
       0,     1,     5,     5,     5,     0,     1,     3,     1,     1,
       1,     1,     1,     1,     4,     5,     4,     5,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,    50,    51,    52,    53,    56,    57,    55,
       0,    54,     0,     0,     0,     0,     0,     5,    11,     9,
       8,     7,     0,     0,     0,     0,    10,     4,     0,    30,
       0,    30,    30,     1,     0,     2,     6,    13,    13,     0,
       0,     0,    31,    35,     0,    35,     0,     3,    30,    17,
       0,    14,    15,    17,     0,     0,    28,    21,    21,    12,
      41,    38,    39,    40,     0,    36,    58,     0,    43,    42,
       0,    27,    26,     0,    18,    19,    44,     0,     0,    46,
      29,    25,     0,    22,    23,     0,    33,     0,    32,    34,
      45,     0,    16,    47,    48,     0,    49,    37,    20,    24
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    50,    51,    73,    74,    82,
      83,    84,    75,    52,    57,    43,    19,    64,    65,    70,
      20,    21,    22,    23,    24,    25,    26
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -40
static const yytype_int8 yypact[] =
{
      28,   -21,   -15,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
       4,   -40,    25,    30,    31,    58,     1,   -40,   -40,   -40,
     -40,   -40,    33,    34,    35,    36,   -40,   -40,     6,    40,
      42,    40,    40,   -40,    41,   -40,   -40,   -13,     0,    12,
      12,    39,   -40,    43,    44,    43,    18,   -40,    40,    45,
      46,    47,   -40,    45,    49,    48,   -40,    50,    50,   -40,
     -40,   -40,   -40,   -40,     9,   -40,   -40,    27,   -40,   -40,
      51,   -40,   -40,    52,    53,   -40,   -40,    55,    56,   -40,
     -40,   -40,    57,    54,   -40,    59,   -40,    43,   -40,   -40,
     -40,    45,   -40,   -40,   -40,    50,   -40,   -40,   -40,   -40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,   -40,    64,   -40,    60,   -40,    15,   -40,    11,
     -40,   -10,   -17,   -39,    61,   -24,   -40,    62,     2,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -40
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      56,    56,    34,    27,     2,     3,     4,    45,    46,    48,
      49,    28,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    48,    53,    71,    35,    68,    41,    69,     1,
      29,     2,     3,     4,    48,    55,    86,    87,    92,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    60,
      61,    30,    62,    63,    88,    87,    31,    32,    33,    37,
      38,    39,    40,    42,    44,    47,    59,    72,    78,    85,
      80,    66,    81,    76,    98,    77,    79,    48,    89,    90,
      36,    91,    95,    93,    94,    99,    96,     0,     0,    97,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,    58,     0,     0,     0,     0,     0,    67
};

static const yytype_int8 yycheck[] =
{
      39,    40,     1,    24,     3,     4,     5,    31,    32,    22,
      23,    26,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    22,    23,    48,    24,     8,    21,    10,     1,
      26,     3,     4,     5,    22,    23,    27,    28,    77,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     6,
       7,    26,     9,    10,    27,    28,    26,    26,     0,    26,
      26,    26,    26,    23,    22,    24,    27,    22,    53,    58,
      22,    27,    22,    27,    91,    28,    27,    22,    27,    27,
      16,    28,    28,    27,    27,    95,    27,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    30,    31,    32,    33,    45,
      49,    50,    51,    52,    53,    54,    55,    24,    26,    26,
      26,    26,    26,     0,     1,    24,    32,    26,    26,    26,
      26,    21,    23,    44,    22,    44,    44,    24,    22,    23,
      34,    35,    42,    23,    34,    23,    42,    43,    43,    27,
       6,     7,     9,    10,    46,    47,    27,    46,     8,    10,
      48,    44,    22,    36,    37,    41,    27,    28,    36,    27,
      22,    22,    38,    39,    40,    38,    27,    28,    27,    27,
      27,    28,    42,    27,    27,    28,    27,    47,    41,    40
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (thd, scanner, ret, YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, scanner)
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, thd, scanner, ret); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, thd, scanner, ret)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (thd);
  YYUSE (scanner);
  YYUSE (ret);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, thd, scanner, ret)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, thd, scanner, ret);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yy_reduce_print (yyvsp, yyrule, thd, scanner, ret)
    YYSTYPE *yyvsp;
    int yyrule;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       , thd, scanner, ret);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, thd, scanner, ret); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, thd, scanner, ret)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (thd);
  YYUSE (scanner);
  YYUSE (ret);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */





/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (class THD *thd, class Hint_scanner *scanner, class PT_hint_list **ret)
#else
int
yyparse (thd, scanner, ret)
    class THD *thd;
    class Hint_scanner *scanner;
    class PT_hint_list **ret;
#endif
#endif
{
/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 126 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { *ret= (yyvsp[(1) - (2)].hint_list); }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 128 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { *ret= (yyvsp[(1) - (3)].hint_list); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 130 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { *ret= NULL; }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 135 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_list)= NEW_PTN PT_hint_list(thd->mem_root);
            if ((yyval.hint_list) == NULL || (yyval.hint_list)->push_back((yyvsp[(1) - (1)].hint)))
              YYABORT; // OOM
          }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 141 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyvsp[(1) - (2)].hint_list)->push_back((yyvsp[(2) - (2)].hint));
            (yyval.hint_list)= (yyvsp[(1) - (2)].hint_list);
          }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 158 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            int error;
            char *end= const_cast<char *>((yyvsp[(3) - (4)].hint_string).str + (yyvsp[(3) - (4)].hint_string).length);
            longlong n= my_strtoll10((yyvsp[(3) - (4)].hint_string).str, &end, &error);
            if (error != 0 || end != (yyvsp[(3) - (4)].hint_string).str + (yyvsp[(3) - (4)].hint_string).length || n > UINT_MAX32)
            {
              scanner->syntax_warning(ER_THD(thd,
                                             ER_WARN_BAD_MAX_EXECUTION_TIME));
              (yyval.hint)= NULL;
            }
            else
            {
              (yyval.hint)= NEW_PTN PT_hint_max_execution_time(n);
              if ((yyval.hint) == NULL)
                YYABORT; // OOM
            }
          }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 179 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.hint_param_table_list).init(thd->mem_root); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 185 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[(1) - (1)].hint_param_table)))
              YYABORT; // OOM
          }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 191 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            if ((yyvsp[(1) - (3)].hint_param_table_list).push_back((yyvsp[(3) - (3)].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[(1) - (3)].hint_param_table_list);
          }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 199 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.hint_param_table_list).init(thd->mem_root); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 205 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_param_table_list).init(thd->mem_root);
            if ((yyval.hint_param_table_list).push_back((yyvsp[(1) - (1)].hint_param_table)))
              YYABORT; // OOM
          }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 211 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            if ((yyvsp[(1) - (3)].hint_param_table_list).push_back((yyvsp[(3) - (3)].hint_param_table)))
              YYABORT; // OOM
            (yyval.hint_param_table_list)= (yyvsp[(1) - (3)].hint_param_table_list);
          }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 219 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.hint_param_index_list).init(thd->mem_root); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 225 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_param_index_list).init(thd->mem_root);
            if ((yyval.hint_param_index_list).push_back((yyvsp[(1) - (1)].hint_string)))
              YYABORT; // OOM
          }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 231 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            if ((yyvsp[(1) - (3)].hint_param_index_list).push_back((yyvsp[(3) - (3)].hint_string)))
              YYABORT; // OOM
            (yyval.hint_param_index_list)= (yyvsp[(1) - (3)].hint_param_index_list);
          }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 244 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_param_table).table= (yyvsp[(1) - (1)].hint_string);
            (yyval.hint_param_table).opt_query_block= NULL_CSTR;
          }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 252 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_param_table).table= (yyvsp[(1) - (2)].hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[(2) - (2)].hint_string);
          }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 261 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_param_table).table= (yyvsp[(2) - (2)].hint_string);
            (yyval.hint_param_table).opt_query_block= (yyvsp[(1) - (2)].hint_string);
          }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 268 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.hint_string)= NULL_CSTR; }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 274 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].hint_string), TRUE, SEMIJOIN_HINT_ENUM, (yyvsp[(4) - (5)].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 281 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].hint_string), FALSE, SEMIJOIN_HINT_ENUM, (yyvsp[(4) - (5)].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 288 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_qb_level_hint((yyvsp[(3) - (5)].hint_string), TRUE, SUBQUERY_HINT_ENUM, (yyvsp[(4) - (5)].ulong_num));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 296 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.ulong_num)= 0; }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 298 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.ulong_num)= (yyvsp[(1) - (1)].ulong_num);
          }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 302 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.ulong_num)= (yyvsp[(1) - (3)].ulong_num) | (yyvsp[(3) - (3)].ulong_num);
          }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 308 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_FIRSTMATCH; }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 309 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_LOOSE_SCAN; }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 310 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_MATERIALIZATION; }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 311 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.ulong_num)= OPTIMIZER_SWITCH_DUPSWEEDOUT; }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 315 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.ulong_num)=
                                   Item_exists_subselect::EXEC_MATERIALIZATION; }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 317 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    { (yyval.ulong_num)= Item_exists_subselect::EXEC_EXISTS; }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 323 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[(3) - (4)].hint_param_table_list), TRUE, (yyvsp[(1) - (4)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 330 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[(3) - (5)].hint_string), (yyvsp[(4) - (5)].hint_param_table_list), TRUE, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 336 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint(NULL_CSTR, (yyvsp[(3) - (4)].hint_param_table_list), FALSE, (yyvsp[(1) - (4)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 343 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_table_level_hint((yyvsp[(3) - (5)].hint_string), (yyvsp[(4) - (5)].hint_param_table_list), FALSE, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 353 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[(3) - (5)].hint_param_table), (yyvsp[(4) - (5)].hint_param_index_list), TRUE, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 360 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_key_level_hint((yyvsp[(3) - (5)].hint_param_table), (yyvsp[(4) - (5)].hint_param_index_list), FALSE, (yyvsp[(1) - (5)].hint_type));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 369 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 373 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 380 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= BKA_HINT_ENUM;
          }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 384 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= BNL_HINT_ENUM;
          }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 391 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 395 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= NO_RANGE_HINT_ENUM;
          }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 402 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= ICP_HINT_ENUM;
          }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 406 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint_type)= MRR_HINT_ENUM;
          }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 413 "E:/mysql/mysql-5.7.33/sql/sql_hints.yy"
    {
            (yyval.hint)= NEW_PTN PT_hint_qb_name((yyvsp[(3) - (4)].hint_string));
            if ((yyval.hint) == NULL)
              YYABORT; // OOM
          }
    break;



/* Line 1455 of yacc.c  */
#line 1924 "E:/mysql/win/sql/sql_hints.yy.cc"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (thd, scanner, ret, YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (thd, scanner, ret, yymsg);
	  }
	else
	  {
	    yyerror (thd, scanner, ret, YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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
		      yytoken, &yylval, thd, scanner, ret);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp, thd, scanner, ret);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (thd, scanner, ret, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, thd, scanner, ret);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, thd, scanner, ret);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



