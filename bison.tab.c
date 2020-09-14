
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
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "bison.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "table_symbole.c"
//#include <windows.h>
#include "quad.c"
extern FILE* yyin;/*fichier contenant le code à compiler*/
extern int line;
extern int col;
int sauvtype = 0;
int nbr_inst_if=0;
int ntemp=1;
int qcW[20],qcF[20];
int qcWI=-1,qcFI=-1;
int qcT[20][4];
int qcTI=-1;
int ifelse=-1;
char * idf_prgm;
char varr[100][255];
int j=0; 
int k;


/* Line 189 of yacc.c  */
#line 98 "bison.tab.c"

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
     PRGRM = 258,
     INTEGER = 259,
     FLOAT = 260,
     CHAR = 261,
     BOOL = 262,
     ENND = 263,
     IN = 264,
     IF = 265,
     ELSEIF = 266,
     ELSE = 267,
     FOR = 268,
     WHILE = 269,
     AND = 270,
     OR = 271,
     DeuxPoints = 272,
     ADD = 273,
     SUB = 274,
     MUL = 275,
     DIV = 276,
     MOD = 277,
     SUPE = 278,
     SUP = 279,
     INFE = 280,
     INF = 281,
     EGAL = 282,
     AFF = 283,
     DIFF = 284,
     PO = 285,
     PF = 286,
     VIR = 287,
     AOUV = 288,
     AFER = 289,
     COUV = 290,
     CFER = 291,
     Sautt = 292,
     IDF = 293,
     inte = 294,
     reel = 295,
     caractere = 296,
     booleen = 297
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 25 "bison.y"
	int num;
	float flo;
	char *chaine;
	 struct{
		 int type;
		 char *val;
	 } NT;
	



/* Line 214 of yacc.c  */
#line 188 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "bison.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   177

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  43
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  65
/* YYNRULES -- Number of states.  */
#define YYNSTATES  148

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     8,    11,    12,    14,    16,    18,    20,
      22,    28,    34,    39,    42,    46,    48,    50,    52,    54,
      56,    58,    60,    62,    64,    71,    78,    82,    92,    97,
     102,   106,   110,   114,   118,   120,   125,   130,   132,   136,
     140,   144,   146,   150,   154,   158,   162,   166,   170,   174,
     176,   177,   178,   189,   190,   191,   192,   204,   205,   208,
     209,   210,   216,   217,   226,   227
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      44,     0,    -1,     3,    38,    45,     8,    -1,    46,    45,
      -1,    -1,    47,    -1,    51,    -1,    55,    -1,    65,    -1,
      67,    -1,    49,    38,    35,    50,    36,    -1,    49,    38,
      35,    38,    36,    -1,    49,    38,    28,    50,    -1,    49,
      48,    -1,    38,    32,    48,    -1,    38,    -1,     4,    -1,
       5,    -1,     6,    -1,     7,    -1,    39,    -1,    40,    -1,
      41,    -1,    42,    -1,    38,    35,    50,    36,    28,    53,
      -1,    38,    35,    38,    36,    28,    53,    -1,    38,    28,
      53,    -1,    38,    28,    30,    53,    32,    52,    32,    52,
      31,    -1,    38,    18,    28,    50,    -1,    38,    19,    28,
      50,    -1,    52,    18,    52,    -1,    52,    19,    52,    -1,
      52,    20,    52,    -1,    52,    21,    52,    -1,    38,    -1,
      38,    35,    50,    36,    -1,    38,    35,    38,    36,    -1,
      50,    -1,    30,    52,    31,    -1,    53,    15,    53,    -1,
      53,    16,    53,    -1,    54,    -1,    30,    53,    31,    -1,
      54,    23,    54,    -1,    54,    24,    54,    -1,    54,    25,
      54,    -1,    54,    26,    54,    -1,    54,    27,    54,    -1,
      54,    29,    54,    -1,    52,    -1,    -1,    -1,    10,    30,
      53,    31,    56,    33,    45,    34,    57,    58,    -1,    -1,
      -1,    -1,    11,    59,    30,    53,    31,    60,    33,    45,
      34,    61,    63,    -1,    -1,    62,    63,    -1,    -1,    -1,
      12,    64,    33,    45,    34,    -1,    -1,    14,    66,    30,
      53,    31,    33,    45,    34,    -1,    -1,    13,    30,    38,
       9,    50,    17,    50,    31,    68,    33,    45,    34,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    58,    58,    61,    64,    67,    68,    69,    70,    71,
      75,    90,   105,   114,   116,   126,   135,   136,   137,   138,
     141,   142,   143,   144,   150,   167,   186,   197,   213,   238,
     261,   276,   290,   304,   351,   364,   383,   399,   404,   411,
     418,   425,   429,   436,   450,   464,   479,   494,   509,   523,
     531,   532,   531,   536,   537,   538,   536,   541,   541,   543,
     545,   545,   574,   574,   583,   583
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PRGRM", "INTEGER", "FLOAT", "CHAR",
  "BOOL", "ENND", "IN", "IF", "ELSEIF", "ELSE", "FOR", "WHILE", "AND",
  "OR", "DeuxPoints", "ADD", "SUB", "MUL", "DIV", "MOD", "SUPE", "SUP",
  "INFE", "INF", "EGAL", "AFF", "DIFF", "PO", "PF", "VIR", "AOUV", "AFER",
  "COUV", "CFER", "Sautt", "IDF", "inte", "reel", "caractere", "booleen",
  "$accept", "start_code", "corps", "Instructions", "Declaration", "idfs",
  "MC_type", "valeur", "Affectation", "Expression_Arth", "Expression_lgiq",
  "lgiq", "Inst_If", "$@1", "$@2", "Inst_elif", "$@3", "$@4", "$@5", "$@6",
  "Inst_else", "$@7", "boucle_while", "$@8", "boucle_for", "$@9", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    43,    44,    45,    45,    46,    46,    46,    46,    46,
      47,    47,    47,    47,    48,    48,    49,    49,    49,    49,
      50,    50,    50,    50,    51,    51,    51,    51,    51,    51,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    53,
      53,    53,    53,    54,    54,    54,    54,    54,    54,    54,
      56,    57,    55,    59,    60,    61,    58,    62,    58,    58,
      64,    63,    66,    65,    68,    67
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     2,     0,     1,     1,     1,     1,     1,
       5,     5,     4,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     6,     3,     9,     4,     4,
       3,     3,     3,     3,     1,     4,     4,     1,     3,     3,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     1,
       0,     0,    10,     0,     0,     0,    11,     0,     2,     0,
       0,     5,     0,     8,     0,    12
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     1,    16,    17,    18,    19,     0,
       0,    62,     0,     0,     4,     5,     0,     6,     7,     8,
       9,     0,     0,     0,     0,     0,     0,     0,     2,     3,
      15,    13,     0,    34,    20,    21,    22,    23,    37,    49,
       0,    41,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,    49,     0,     0,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,     0,    12,    15,    14,     0,
       0,    38,    42,     0,     0,     0,    30,    31,    32,    33,
      39,    40,     0,    43,    44,    45,    46,    47,    48,     0,
       0,     0,     0,     0,    11,    10,    36,    35,     0,     4,
       0,     4,     0,    25,    24,     0,     0,     0,     0,    51,
      64,    63,     0,    59,     0,    27,    53,    52,     0,     4,
       0,    60,    58,     0,     0,     0,    65,     0,     4,    54,
       0,     0,    61,     4,     0,    55,     0,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    13,    14,    15,    31,    16,    38,    17,    39,
      40,    41,    18,    92,   123,   127,   130,   141,   146,   128,
     132,   135,    19,    23,    20,   124
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -31
static const yytype_int16 yypact[] =
{
       5,   -27,    39,    -1,   -31,   -31,   -31,   -31,   -31,    12,
      24,   -31,     6,    48,    -1,   -31,    23,   -31,   -31,   -31,
     -31,    66,    25,    32,    41,    42,    80,   114,   -31,   -31,
     -18,   -31,    66,    30,   -31,   -31,   -31,   -31,   -31,   107,
      29,   113,    58,    66,   128,   128,    66,     4,    40,    49,
     128,    45,   119,    61,    33,   124,    93,    93,    93,    93,
      66,    66,   -31,    93,    93,    93,    93,    93,    93,   128,
      35,   -31,   -31,    15,    56,    59,   -31,    57,   -31,    55,
      67,   -31,   -31,    75,    77,    93,     2,     2,   -31,   -31,
      74,   -31,    60,   -31,   -31,   -31,   -31,   -31,   -31,    97,
      83,    93,    66,    66,   -31,   -31,   -31,   -31,    61,    -1,
     128,    -1,    54,     4,     4,    96,    63,   109,    93,   -31,
     -31,   -31,    81,    47,    84,   -31,   -31,   -31,   129,    -1,
     121,   -31,   -31,   110,    66,   138,   -31,    37,    -1,   -31,
     139,   141,   -31,    -1,   142,   -31,   129,   -31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -31,   -31,   -14,   -31,   -31,   126,   -31,   -12,   -31,   -30,
     -25,    82,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
      26,   -31,   -31,   -31,   -31,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -58
static const yytype_int16 yytable[] =
{
      29,    47,    53,     5,     6,     7,     8,    54,     1,     9,
      50,     3,    10,    11,    51,    49,    53,    52,    70,    60,
      61,    73,    58,    59,    24,    25,    86,    87,    88,    89,
      60,    61,    71,    72,    26,    90,    91,    12,    76,     4,
      80,    27,    21,    84,    60,    61,    82,   101,    60,    61,
      60,    61,    60,    61,    22,   108,    28,    99,   126,   -57,
      62,    30,    43,    42,    82,    55,   100,    69,   139,    44,
      45,   112,    56,    57,    58,    59,    74,   113,   114,    56,
      57,    58,    59,    77,   102,    75,   118,   103,   122,    51,
      61,   104,    81,   109,   120,   115,    32,   117,   116,    56,
      57,    58,    59,   105,    33,    34,    35,    36,    37,   137,
      46,   106,   125,   107,   110,   133,   111,   129,    33,    34,
      35,    36,    37,    85,   140,    56,    57,    58,    59,   144,
     119,    33,    34,    35,    36,    37,    63,    64,    65,    66,
      67,   131,    68,   121,   136,    93,    94,    95,    96,    97,
      98,   134,    48,    34,    35,    36,    37,    79,    34,    35,
      36,    37,    83,    34,    35,    36,    37,    34,    35,    36,
      37,   138,   147,   142,   143,     0,   145,    78
};

static const yytype_int16 yycheck[] =
{
      14,    26,    32,     4,     5,     6,     7,    32,     3,    10,
      28,    38,    13,    14,    32,    27,    46,    35,    43,    15,
      16,    46,    20,    21,    18,    19,    56,    57,    58,    59,
      15,    16,    44,    45,    28,    60,    61,    38,    50,     0,
      52,    35,    30,    55,    15,    16,    31,    32,    15,    16,
      15,    16,    15,    16,    30,    85,     8,    69,    11,    12,
      31,    38,    30,    38,    31,    35,    31,     9,    31,    28,
      28,   101,    18,    19,    20,    21,    36,   102,   103,    18,
      19,    20,    21,    38,    28,    36,    32,    28,   118,    32,
      16,    36,    31,    33,    31,   109,    30,   111,   110,    18,
      19,    20,    21,    36,    38,    39,    40,    41,    42,   134,
      30,    36,    31,    36,    17,   129,    33,    33,    38,    39,
      40,    41,    42,    30,   138,    18,    19,    20,    21,   143,
      34,    38,    39,    40,    41,    42,    23,    24,    25,    26,
      27,    12,    29,    34,    34,    63,    64,    65,    66,    67,
      68,    30,    38,    39,    40,    41,    42,    38,    39,    40,
      41,    42,    38,    39,    40,    41,    42,    39,    40,    41,
      42,    33,   146,    34,    33,    -1,    34,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    44,    38,     0,     4,     5,     6,     7,    10,
      13,    14,    38,    45,    46,    47,    49,    51,    55,    65,
      67,    30,    30,    66,    18,    19,    28,    35,     8,    45,
      38,    48,    30,    38,    39,    40,    41,    42,    50,    52,
      53,    54,    38,    30,    28,    28,    30,    53,    38,    50,
      28,    32,    35,    52,    53,    35,    18,    19,    20,    21,
      15,    16,    31,    23,    24,    25,    26,    27,    29,     9,
      53,    50,    50,    53,    36,    36,    50,    38,    48,    38,
      50,    31,    31,    38,    50,    30,    52,    52,    52,    52,
      53,    53,    56,    54,    54,    54,    54,    54,    54,    50,
      31,    32,    28,    28,    36,    36,    36,    36,    52,    33,
      17,    33,    52,    53,    53,    45,    50,    45,    32,    34,
      31,    34,    52,    57,    68,    31,    11,    58,    62,    33,
      59,    12,    63,    45,    30,    64,    34,    53,    33,    31,
      45,    60,    34,    33,    45,    34,    61,    63
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
      yyerror (YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
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
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



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
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


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
        case 10:

/* Line 1455 of yacc.c  */
#line 76 "bison.y"
    {
			if(declared((yyvsp[(2) - (5)].chaine))==1)
			{	yyerror("\n******************* double declaration *****************\n");}
			else 
			{	if(!(((yyvsp[(4) - (5)].NT).type==1)&&(atoi((yyvsp[(4) - (5)].NT).val)>=0)))
				{	err_taille_tab((yyvsp[(4) - (5)].NT).type,(yyvsp[(4) - (5)].NT).val);}	
				else
				{
					inserer((yyvsp[(2) - (5)].chaine),10+sauvtype,"tableau",(yyvsp[(4) - (5)].NT).val);
					generer("BOUNDS","1",(yyvsp[(4) - (5)].NT).val,"");
					generer("ADEC",(yyvsp[(2) - (5)].chaine),"","");
				}							
			}
			;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 91 "bison.y"
    {
			if(declared((yyvsp[(2) - (5)].chaine))==1)
			{	yyerror("\n******************* double declaration *****************\n");}
			else 
			{	if(!((gettype((yyvsp[(4) - (5)].chaine))==1)&&(atoi(getValeur((yyvsp[(4) - (5)].chaine)))>=0)))
				{	err_taille_tab(gettype((yyvsp[(4) - (5)].chaine)),getValeur((yyvsp[(4) - (5)].chaine)));}	
				else
				{
					inserer((yyvsp[(2) - (5)].chaine),10+sauvtype,"tableau",getValeur((yyvsp[(4) - (5)].chaine)));
					generer("BOUNDS","1",getValeur((yyvsp[(4) - (5)].chaine)),"");
					generer("ADEC",(yyvsp[(2) - (5)].chaine),"","");
				}							
			}
			;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 106 "bison.y"
    {
				if(declared((yyvsp[(2) - (4)].chaine))==1){yyerror("\n***************** double declaration *****************\n");}
				else{
					inserer((yyvsp[(2) - (4)].chaine),sauvtype,"variable",(yyvsp[(4) - (4)].NT).val);
					generer("=",(yyvsp[(4) - (4)].NT).val,"",(yyvsp[(2) - (4)].chaine));
				}
			;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 117 "bison.y"
    {	
							if(declared((yyvsp[(1) - (3)].chaine))==1)
							{	yyerror("\n*****************double declaration *****************\n"); }
							else
							{
								inserer((yyvsp[(1) - (3)].chaine),sauvtype,"variable","0");
												
							} 
						;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 127 "bison.y"
    {
						if(declared((yyvsp[(1) - (1)].chaine))==1)
						{	yyerror("\n*****************double declaration *****************\n");}
						else
						{	inserer((yyvsp[(1) - (1)].chaine),sauvtype,"variable","0");}	    
					  ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 135 "bison.y"
    {sauvtype=1;;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 136 "bison.y"
    {sauvtype=2;;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 137 "bison.y"
    {sauvtype=3;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 138 "bison.y"
    {sauvtype=4;;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 141 "bison.y"
    {{(yyval.NT).type=1;(yyval.NT).val=(yyvsp[(1) - (1)].chaine);};}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 142 "bison.y"
    {{(yyval.NT).type=2;(yyval.NT).val=(yyvsp[(1) - (1)].chaine);};}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 143 "bison.y"
    {(yyval.NT).type=3;(yyval.NT).val=substring((yyvsp[(1) - (1)].chaine));	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 144 "bison.y"
    {(yyval.NT).type=4;(yyval.NT).val=(yyvsp[(1) - (1)].chaine);;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 151 "bison.y"
    {
				if(declared((yyvsp[(1) - (6)].chaine))==0)
	    		{	yyerror("\n********* erreur semantique : tableau non declare ********\n");}
	    		else
	    		{	if(!(((yyvsp[(3) - (6)].NT).type==1)&&(atoi((yyvsp[(3) - (6)].NT).val)>=0)))
					{	err_taille_tab((yyvsp[(3) - (6)].NT).type,(yyvsp[(3) - (6)].NT).val);}
		    		else 											
					{	err_incompa_typ_tab(gettype((yyvsp[(1) - (6)].chaine)),(yyvsp[(6) - (6)].NT).type);
						//printf("une affectation à la valeur de %s[%d] \n",$1,$3);
	    				char*s;
	    				s=strdup((yyvsp[(1) - (6)].chaine));
	    				sprintf(s, "%s[%d]",(yyvsp[(1) - (6)].chaine),atoi((yyvsp[(3) - (6)].NT).val));
						generer("=",(yyvsp[(6) - (6)].NT).val,"",s);					
	    			}
	    		}
    		;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 168 "bison.y"
    {
				if(declared((yyvsp[(1) - (6)].chaine))==0)
	    		{	yyerror("\n********* erreur semantique : tableau non declare ********\n");}
				if(declared((yyvsp[(3) - (6)].chaine))==0)
	    		{	yyerror("\n********* erreur semantique : variable non declare ********\n");}
	    		else
	    		{	if(!((gettype((yyvsp[(3) - (6)].chaine))==1)&&(atoi(getValeur((yyvsp[(3) - (6)].chaine)))>=0)))
					{	err_taille_tab(gettype((yyvsp[(3) - (6)].chaine)),getValeur((yyvsp[(3) - (6)].chaine)));}
		    		else 											
					{	err_incompa_typ_tab(gettype((yyvsp[(1) - (6)].chaine)),(yyvsp[(6) - (6)].NT).type);
						//printf("une affectation à la valeur de %s[%d] \n",$1,$3);
	    				char*s;
	    				s=strdup((yyvsp[(1) - (6)].chaine));
	    				sprintf(s, "%s[%d]",(yyvsp[(1) - (6)].chaine),atoi(getValeur((yyvsp[(3) - (6)].chaine))));
						generer("=",(yyvsp[(6) - (6)].NT).val,"",s);					
	    			}
	    		}
    		;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 187 "bison.y"
    {	if(declared((yyvsp[(1) - (3)].chaine))==1)
	    		{	err_incompa_typ_var(gettype((yyvsp[(1) - (3)].chaine)),(yyvsp[(3) - (3)].NT).type);	}
			else
				{	
					inserer((yyvsp[(1) - (3)].chaine),(yyvsp[(3) - (3)].NT).type,"variable",(yyvsp[(3) - (3)].NT).val);
				}
				generer("=",(yyvsp[(3) - (3)].NT).val,"",(yyvsp[(1) - (3)].chaine));
				setValeur((yyvsp[(1) - (3)].chaine),(yyvsp[(3) - (3)].NT).val);
				ntemp++;
			;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 198 "bison.y"
    {
				if(declared((yyvsp[(1) - (9)].chaine))==0)
	    		{
	    			yyerror("\n************* erreur semantique : variable non declare *********\n");
				}
				qcTI++;
				qcT[qcTI][0]=qc;
				generer("=",(yyvsp[(6) - (9)].NT).val," ",(yyvsp[(1) - (9)].chaine));
				qcT[qcTI][1]=qc;
				generer("BR","","","");
				liste[qcT[qcTI][0]-1].op1=convert(qc);
				generer("=",(yyvsp[(8) - (9)].NT).val," ",(yyvsp[(1) - (9)].chaine));
				liste[qcT[qcTI][1]].op1=convert(qc);
				qcTI--;
			;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 214 "bison.y"
    {
				if(declared((yyvsp[(1) - (4)].chaine))==0)
	    		{
	    			yyerror("\n************* erreur semantique : variable non declare *********\n");
				}
				if(gettype((yyvsp[(1) - (4)].chaine))!=1)
				{
					yyerror("\n********* erreur semantique : variable pas de type INTEGER *******\n");	
				}
				if((yyvsp[(4) - (4)].NT).type!=1)
				{
					yyerror("\n********* erreur semantique : valeur pas de type INTEGER *******\n");	
				}
				char sss[10];
				sprintf(sss, "T%d", ntemp);
				generer("=",(yyvsp[(1) - (4)].chaine)," ",sss);	
				generer("+",sss,(yyvsp[(4) - (4)].NT).val,sss);;					
				generer("=",sss," ",(yyvsp[(1) - (4)].chaine));	
				int x= atoi(getValeur((yyvsp[(1) - (4)].chaine)))+atoi((yyvsp[(4) - (4)].NT).val);
				sprintf(sss,"%d",x);
				setValeur((yyvsp[(1) - (4)].chaine),sss);			
				ntemp++;	
				
			;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 239 "bison.y"
    {
				if(declared((yyvsp[(1) - (4)].chaine))==0)
	    		{	yyerror("\n*********** erreur semantique : variable non declare **********\n");}
				if(gettype((yyvsp[(1) - (4)].chaine))!=1)
				{	yyerror("\n********* erreur semantique : variable pas de type INTEGER *******\n");	}
				if((yyvsp[(4) - (4)].NT).type!=1)
				{	yyerror("\n********* erreur semantique : valeur pas de type INTEGER *******\n");}
				
				char sss[10];	sprintf(sss, "T%d", ntemp);			
				generer("=",(yyvsp[(1) - (4)].chaine)," ",sss);					
				generer("-",sss,(yyvsp[(4) - (4)].NT).val,sss);									
				generer("=",sss," ",(yyvsp[(1) - (4)].chaine));								
				int x= atoi(getValeur((yyvsp[(1) - (4)].chaine)))-atoi((yyvsp[(4) - (4)].NT).val);				
				sprintf(sss,"%d",x);			
				setValeur((yyvsp[(1) - (4)].chaine),sss);		
				ntemp++;								
			;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 262 "bison.y"
    {	
								if(((yyvsp[(1) - (3)].NT).type==3)||((yyvsp[(3) - (3)].NT).type==3)||((yyvsp[(1) - (3)].NT).type==4)||((yyvsp[(3) - (3)].NT).type==4))
								{
									yyerror("\n******* Erreur semantique :caractere ou booleen dans une expression arithmetique *******\n");
								}
								else
								{ 
								(yyval.NT).type=max((yyvsp[(1) - (3)].NT).type,(yyvsp[(3) - (3)].NT).type);
								(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
								sprintf((yyval.NT).val, "T%d", ntemp);
								generer("+",(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);
								ntemp++;
								}
							;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 277 "bison.y"
    {
							if(((yyvsp[(1) - (3)].NT).type==3)||((yyvsp[(3) - (3)].NT).type==3)||((yyvsp[(1) - (3)].NT).type==4)||((yyvsp[(3) - (3)].NT).type==4))
							{	yyerror("\n******* Erreur semantique :caractere ou booleen dans une expression arithmetique *******\n");							}
							else
							{
								(yyval.NT).type=max((yyvsp[(1) - (3)].NT).type,(yyvsp[(3) - (3)].NT).type);
								(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
								sprintf((yyval.NT).val, "T%d", ntemp);
								generer("-",(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);
								ntemp++;
							}
							;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 291 "bison.y"
    {
							if(((yyvsp[(1) - (3)].NT).type==3)||((yyvsp[(3) - (3)].NT).type==3)||((yyvsp[(1) - (3)].NT).type==4)||((yyvsp[(3) - (3)].NT).type==4))
							{	yyerror("\n******* Erreur semantique :caractere ou booleen dans une expression arithmetique *******\n");}
							else
							{
								(yyval.NT).type=max((yyvsp[(1) - (3)].NT).type,(yyvsp[(3) - (3)].NT).type);
								(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
								sprintf((yyval.NT).val, "T%d", ntemp);
								generer("*",(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);								
								ntemp++;
							}
							;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 306 "bison.y"
    {
							if(((yyvsp[(1) - (3)].NT).type==3)||((yyvsp[(3) - (3)].NT).type==3)||((yyvsp[(1) - (3)].NT).type==4)||((yyvsp[(3) - (3)].NT).type==4))
							{
								yyerror("\n******* Erreur semantique :caractere ou booleen dans une expression arithmetique *******\n");
							}
							else
							{
								if(atoi((yyvsp[(3) - (3)].NT).val)==0)
								{	yyerror("\n *******erreur semantique : division par zero******\n ");}
								else
								{
								(yyval.NT).type=max((yyvsp[(1) - (3)].NT).type,(yyvsp[(3) - (3)].NT).type);
								(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
								sprintf((yyval.NT).val, "T%d", ntemp);
								generer("/",(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);			
								ntemp++;
								}
							}
							;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 352 "bison.y"
    {
							if(declared((yyvsp[(1) - (1)].chaine))==0)
							{
								yyerror("\n******* erreur semantique : variable non declare  *******\n");
							}
							else
							{	
								(yyval.NT).val=strdup(getValeur((yyvsp[(1) - (1)].chaine)));
								(yyval.NT).type=gettype((yyvsp[(1) - (1)].chaine));
								
							}
							;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 365 "bison.y"
    {
							if(declared((yyvsp[(1) - (4)].chaine))==0)
							{	yyerror("\n******* erreur semantique : tableau non declare  *******\n");}
							else
							{	
								if(!(((yyvsp[(3) - (4)].NT).type==1)&&(atoi((yyvsp[(3) - (4)].NT).val)>=0)))
								{	err_taille_tab((yyvsp[(3) - (4)].NT).type,(yyvsp[(3) - (4)].NT).val);	}	
								else
								{
								char*s;	
								s=strdup((yyvsp[(1) - (4)].chaine));
								sprintf(s, "%s[%d]", (yyvsp[(1) - (4)].chaine),atoi((yyvsp[(3) - (4)].NT).val));
								(yyval.NT).val=strdup(s);
								(yyval.NT).type=gettype((yyvsp[(1) - (4)].chaine));
								
								}
							}
							;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 384 "bison.y"
    {
							if(declared((yyvsp[(1) - (4)].chaine))==0)
							{	yyerror("\n******** erreur semantique : tableau non declare  ***********\n");	}
							else
							{
							if(declared((yyvsp[(3) - (4)].chaine))==0)
							{	yyerror("\n******** erreur semantique : variable non declare  ***********\n");}
							char*s;	
							s=strdup((yyvsp[(1) - (4)].chaine));
							sprintf(s, "%s[%s]", (yyvsp[(1) - (4)].chaine),(yyvsp[(3) - (4)].chaine));
							(yyval.NT).val=strdup(s);
							(yyval.NT).type=gettype((yyvsp[(1) - (4)].chaine));
							
							}
							;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 400 "bison.y"
    {
								(yyval.NT).val=(yyvsp[(1) - (1)].NT).val;
								(yyval.NT).type=(yyvsp[(1) - (1)].NT).type;
							;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 405 "bison.y"
    {
								(yyval.NT).val=(yyvsp[(2) - (3)].NT).val;
								(yyval.NT).type=(yyvsp[(2) - (3)].NT).type;
							;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 412 "bison.y"
    {
							(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
							sprintf((yyval.NT).val,"T%d",ntemp);
							quadL(3,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);							
							ntemp++;
						;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 419 "bison.y"
    {
						(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
						sprintf((yyval.NT).val,"T%d",ntemp);
						quadL(2,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);			
						ntemp++;
						;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 426 "bison.y"
    {
						(yyval.NT).type=(yyvsp[(1) - (1)].NT).type;
					;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 430 "bison.y"
    {
						(yyval.NT).type=(yyvsp[(2) - (3)].NT).type;
						(yyval.NT).val=(yyvsp[(2) - (3)].NT).val;
					;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 437 "bison.y"
    {	if(!((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type))
					{	yyerror("\n******** erreur semantique : types incompatible  ***********\n");}
					else
					{
						if((yyvsp[(1) - (3)].NT).val==NULL||(yyvsp[(3) - (3)].NT).val==NULL){
							yyerror("\n******** erreur semantique : variable non initialise  ***********\n");	}
					(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
					sprintf((yyval.NT).val,"T%d",ntemp);
					quadC(2,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);					
					ntemp++;
					}
				;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 451 "bison.y"
    {	if(!((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type))
						{
							yyerror("\n******** erreur semantique : types incompatible  ***********\n");
						}
						if((yyvsp[(1) - (3)].NT).val==NULL||(yyvsp[(3) - (3)].NT).val==NULL){
							yyerror("\n******** erreur semantique : variable non initialise  ***********\n");
						}
						(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
						sprintf((yyval.NT).val,"T%d",ntemp);
						quadC(1,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);						
						ntemp++;
					;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 465 "bison.y"
    {	if(!((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type))
						{
							yyerror("\n******** erreur semantique : types incompatible  ***********\n");
						}
						if((yyvsp[(1) - (3)].NT).val==NULL||(yyvsp[(3) - (3)].NT).val==NULL){
							yyerror("\n******** erreur semantique : variable non initialise  ***********\n");
						}
						(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
						sprintf((yyval.NT).val,"T%d",ntemp);
						quadC(4,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);						
						ntemp++;
						
					;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 480 "bison.y"
    {	if(!((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type))
						{
							yyerror("\n******** erreur semantique : types incompatible  ***********\n");
						}
						if((yyvsp[(1) - (3)].NT).val==NULL||(yyvsp[(3) - (3)].NT).val==NULL){
							//yyerror("\n******** erreur semantique : variable non initialise  ***********\n");
						}
						(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
						sprintf((yyval.NT).val,"T%d",ntemp);
						quadC(3,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);						
						ntemp++;				
							
					;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 495 "bison.y"
    {	if(!((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type))
						{	
							
							yyerror("\n******** erreur semantique : types incompatible  ***********\n");
						}
						if((yyvsp[(1) - (3)].NT).val==NULL||(yyvsp[(3) - (3)].NT).val==NULL){
							//yyerror("\n******** erreur semantique : variable non initialise  ***********\n");
						}
						(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
						sprintf((yyval.NT).val,"T%d",ntemp);
						quadC(5,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);						
						ntemp++;
					;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 510 "bison.y"
    {	if(!((yyvsp[(1) - (3)].NT).type==(yyvsp[(3) - (3)].NT).type))
						{
							yyerror("\n******** erreur semantique : types incompatible  ***********\n");
						}
						if((yyvsp[(1) - (3)].NT).val==NULL||(yyvsp[(3) - (3)].NT).val==NULL){
							yyerror("\n******** erreur semantique : variable non initialise  ***********\n");
						}
						(yyvsp[(1) - (3)].NT).val=strdup((yyval.NT).val);
						sprintf((yyval.NT).val,"T%d",ntemp);
						quadC(6,(yyvsp[(1) - (3)].NT).val,(yyvsp[(3) - (3)].NT).val,(yyval.NT).val);						
						ntemp++;
					;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 524 "bison.y"
    {
						(yyval.NT).val=(yyvsp[(1) - (1)].NT).val;
						(yyval.NT).type=(yyvsp[(1) - (1)].NT).type;
					;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 531 "bison.y"
    {qcTI++; qcT[qcTI][0]=qc;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 532 "bison.y"
    {qcT[qcTI][1]=qc;;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 536 "bison.y"
    {ifelse=0;generer("BR","","",""); liste[qcT[qcTI][0]-1].op1=convert(qc);;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 537 "bison.y"
    {qcT[qcTI][2]=qc;;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 538 "bison.y"
    {qcT[qcTI][3]=qc;generer("BR","","","");;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 541 "bison.y"
    {generer("BR","","","");ifelse=1;;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 543 "bison.y"
    {liste[qcT[qcTI][0]-1].op1=convert(qc);qcTI--;;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 545 "bison.y"
    {if(ifelse==0)
					{liste[qcT[qcTI][2]-1].op1=convert(qc);}
				if(ifelse==1)
				{
					liste[qcT[qcTI][0]-1].op1=convert(qc);
				};}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 552 "bison.y"
    {	
				if(ifelse==0){
					liste[qcT[qcTI][3]].op1=convert(qc);
				}
				if(ifelse==1)
				{
					/*liste[qcT[qcTI][0]-1].op1=convert(qc);*/
				}
				liste[qcT[qcTI][1]].op1=convert(qc);
				qcTI--;
			;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 574 "bison.y"
    {qcWI++; qcW[qcWI]=qc;;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 576 "bison.y"
    {
					liste[qcW[qcWI]-1].op1=convert(qc);
					generer("BR",convert(qcW[qcWI]),"","");
					qcWI--;
				;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 583 "bison.y"
    {
				 if(declared((yyvsp[(3) - (8)].chaine))==0){	yyerror("\n******* erreur semantique : idf non declare  *******\n");}
				 if(!(((yyvsp[(5) - (8)].NT).type==1)&&(atoi((yyvsp[(5) - (8)].NT).val)>=0))||!(((yyvsp[(7) - (8)].NT).type==1)&&(atoi((yyvsp[(7) - (8)].NT).val)>=0)))
				{	yyerror("\n******* erreur semantique : valeur pas de type entier positif  *******\n");	}	
				 char s[10];	
				sprintf(s,"T%d",ntemp);
				quadC(3,(yyvsp[(5) - (8)].NT).val,(yyvsp[(7) - (8)].NT).val,s);						
				ntemp++;
				qcFI++;
				qcF[qcFI]=qc;
			 ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 594 "bison.y"
    {
					
					generer("BR",convert(qcF[qcFI]-2),"","");
					liste[qcF[qcFI]-1].op1=convert(qc);
				qcFI--;
			;}
    break;



/* Line 1455 of yacc.c  */
#line 2244 "bison.tab.c"
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
      yyerror (YY_("syntax error"));
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
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
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
		  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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



/* Line 1675 of yacc.c  */
#line 610 "bison.y"

int yyerror(char* msg)
{printf("%s : ligne %d , colonne : %d\n",msg,line,col);
	exit(EXIT_FAILURE);
}
int main()
{
init();
yyin=fopen("test.txt","r");
if(yyparse()==0)
{		
	printf("\n\t\t***********************************\n");
	printf("\t\t********Parsing Successfull********\t\t\n");
	printf("\t\t***********************************\n");
}
else
{
	printf("faute");
}
afficher();
afficher_qdr();
assembler();
int k=0,h=0;
fclose(yyin);

return 0;

}
