
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
#line 1 "SyntaxicAnalyser.y"


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;

int yyerror(char const * msg);	
int yylex(void);



/* Line 189 of yacc.c  */
#line 87 "SyntaxicAnalyser.tab.c"

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
     PROGRAM = 258,
     CLASS = 259,
     EXTENDS = 260,
     PUBLIC = 261,
     PRIVATE = 262,
     STATIC = 263,
     MAIN = 264,
     RETURN = 265,
     THIS = 266,
     WHILE = 267,
     IF = 268,
     ELSE = 269,
     PROTECTED = 270,
     SYSTEM_OUT_PRINTLN = 271,
     INTERFACE = 272,
     FOR = 273,
     CONTINUE = 274,
     BREAK = 275,
     NUL = 276,
     NEW = 277,
     STR = 278,
     INT = 279,
     BOOLEAN = 280,
     VOID = 281,
     P_OUVRANTE = 282,
     P_FERMANTE = 283,
     C_OUVRANTE = 284,
     C_FERMANTE = 285,
     BLOCK_START = 286,
     BLOCK_END = 287,
     INTEGER_LITERAL = 288,
     BOOLEAN_LITERAL = 289,
     STRING = 290,
     LENGTH = 291,
     VIRGULE = 292,
     POINT_VIRGULE = 293,
     POINT = 294,
     OPPAFFECT = 295,
     OPPEQUALITY = 296,
     OPPINEQUALITY = 297,
     OPPSUPEQUALITY = 298,
     OPPINFEQUALITY = 299,
     OPPINF = 300,
     OPPSUP = 301,
     OPPAND = 302,
     OPPOR = 303,
     OPPADD = 304,
     OPPSUB = 305,
     OPPMULTIPLY = 306,
     OPPDIV = 307,
     NOT = 308,
     ID = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 183 "SyntaxicAnalyser.tab.c"

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  125
/* YYNRULES -- Number of states.  */
#define YYNSTATES  444

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    10,    28,    46,    64,    82,
     100,   118,   136,   154,   172,   175,   177,   185,   193,   201,
     209,   217,   220,   222,   225,   228,   230,   233,   235,   239,
     243,   247,   261,   275,   289,   303,   317,   331,   345,   359,
     373,   377,   381,   385,   387,   389,   392,   395,   399,   403,
     407,   409,   411,   413,   415,   418,   420,   422,   430,   438,
     446,   454,   462,   468,   474,   480,   486,   492,   498,   504,
     510,   516,   521,   526,   531,   536,   544,   552,   560,   568,
     576,   584,   587,   590,   593,   596,   599,   605,   611,   617,
     623,   629,   634,   639,   644,   649,   654,   657,   660,   665,
     670,   675,   678,   680,   686,   692,   698,   703,   708,   713,
     721,   729,   737,   745,   753,   757,   761,   765,   769,   773,
     777,   781,   785,   787,   791,   793
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    57,    58,    -1,    57,    -1,    58,    -1,
       4,    54,    31,     6,     8,    26,     9,    27,    23,    29,
      30,    54,    28,    31,    69,    32,    32,    -1,     4,     1,
      31,     6,     8,    26,     9,    27,    23,    29,    30,    54,
      28,    31,    69,    32,    32,    -1,     4,    54,     1,     6,
       8,    26,     9,    27,    23,    29,    30,    54,    28,    31,
      69,    32,    32,    -1,     4,    54,    31,     6,     8,    26,
       9,     1,    23,    29,    30,    54,    28,    31,    69,    32,
      32,    -1,     4,    54,    31,     6,     8,    26,     1,    27,
      23,    29,    30,    54,    28,    31,    69,    32,    32,    -1,
       4,    54,    31,     6,     8,    26,     9,    27,    23,    29,
       1,    54,    28,    31,    69,    32,    32,    -1,     4,    54,
      31,     6,     8,    26,     9,    27,    23,    29,    30,    54,
       1,    31,    69,    32,    32,    -1,     4,    54,    31,     6,
       8,    26,     9,    27,    23,    29,    30,    54,    28,    31,
      69,     1,    32,    -1,     4,     1,    31,     6,     8,    26,
       9,    27,    23,    29,    30,    54,    28,    31,    69,    32,
       1,    -1,    59,    58,    -1,    73,    -1,     4,    54,    60,
      31,    61,    62,    32,    -1,     4,     1,    60,    31,    61,
      62,    32,    -1,     4,    54,    60,     1,    61,    62,    32,
      -1,     4,    54,    60,    31,    61,    62,     1,    -1,     1,
      54,    60,    31,    61,    62,    32,    -1,     5,    54,    -1,
      73,    -1,     1,    54,    -1,    63,    61,    -1,    73,    -1,
      64,    62,    -1,    73,    -1,    67,    54,    38,    -1,    67,
       1,    38,    -1,    67,    54,     1,    -1,     6,    67,    54,
      27,    65,    28,    31,    61,    68,    10,    70,    38,    32,
      -1,     1,    67,    54,    27,    65,    28,    31,    61,    68,
      10,    70,    38,    32,    -1,     6,    67,     1,    27,    65,
      28,    31,    61,    68,    10,    70,    38,    32,    -1,     6,
      67,    54,     1,    65,    28,    31,    61,    68,    10,    70,
      38,    32,    -1,     6,    67,    54,    27,    65,     1,    31,
      61,    68,    10,    70,    38,    32,    -1,     6,    67,    54,
      27,    65,    28,     1,    61,    68,    10,    70,    38,    32,
      -1,     6,    67,    54,    27,    65,    28,    31,    61,    68,
       1,    70,    38,    32,    -1,     6,    67,    54,    27,    65,
      28,    31,    61,    68,    10,    70,     1,    32,    -1,     6,
      67,    54,    27,    65,    28,    31,    61,    68,    10,    70,
      38,     1,    -1,    66,    37,    65,    -1,    66,     1,    65,
      -1,    66,    37,     1,    -1,    66,    -1,    73,    -1,    67,
      54,    -1,    67,     1,    -1,    24,    29,    30,    -1,    24,
       1,    30,    -1,    24,    29,     1,    -1,    24,    -1,    25,
      -1,    54,    -1,     1,    -1,    69,    68,    -1,    73,    -1,
      68,    -1,    13,    27,    70,    28,    69,    14,    69,    -1,
       1,    27,    70,    28,    69,    14,    69,    -1,    13,     1,
      70,    28,    69,    14,    69,    -1,    13,    27,    70,     1,
      69,    14,    69,    -1,    13,    27,    70,    28,    69,     1,
      69,    -1,    12,    27,    70,    28,    69,    -1,     1,    27,
      70,    28,    69,    -1,    12,     1,    70,    28,    69,    -1,
      12,    27,    70,     1,    69,    -1,    16,    27,    70,    28,
      38,    -1,     1,    27,    70,    28,    38,    -1,    16,     1,
      70,    28,    38,    -1,    16,    27,    70,     1,    38,    -1,
      16,    27,    70,    28,     1,    -1,    54,    40,    70,    38,
      -1,     1,    40,    70,    38,    -1,    54,     1,    70,    38,
      -1,    54,    40,    70,     1,    -1,    54,    29,    70,    30,
      40,    70,    38,    -1,     1,    29,    70,    30,    40,    70,
      38,    -1,    54,     1,    70,    30,    40,    70,    38,    -1,
      54,    29,    70,     1,    40,    70,    38,    -1,    54,    29,
      70,    30,     1,    70,    38,    -1,    54,    29,    70,    30,
      40,    70,     1,    -1,    33,    71,    -1,    34,    71,    -1,
      54,    71,    -1,    11,    71,    -1,     1,    71,    -1,    22,
      24,    29,    70,    30,    -1,     1,    24,    29,    70,    30,
      -1,    22,     1,    29,    70,    30,    -1,    22,    24,     1,
      70,    30,    -1,    22,    24,    29,    70,     1,    -1,    22,
      54,    27,    28,    -1,     1,    54,    27,    28,    -1,    22,
       1,    27,    28,    -1,    22,    54,     1,    28,    -1,    22,
      54,    27,     1,    -1,    53,    70,    -1,     1,    70,    -1,
      27,    70,    28,    71,    -1,     1,    70,    28,    71,    -1,
      27,    70,     1,    71,    -1,    35,    71,    -1,    73,    -1,
      29,    70,    30,    70,    71,    -1,     1,    70,    30,    70,
      71,    -1,    29,    70,     1,    70,    71,    -1,    39,    36,
      70,    71,    -1,     1,    36,    70,    71,    -1,    39,     1,
      70,    71,    -1,    39,    54,    27,    72,    28,    70,    71,
      -1,     1,    54,    27,    72,    28,    70,    71,    -1,    39,
       1,    27,    72,    28,    70,    71,    -1,    39,    54,     1,
      72,    28,    70,    71,    -1,    39,    54,    27,    72,     1,
      70,    71,    -1,    47,    70,    71,    -1,    48,    70,    71,
      -1,    46,    70,    71,    -1,    45,    70,    71,    -1,    49,
      70,    71,    -1,    50,    70,    71,    -1,    51,    70,    71,
      -1,     1,    70,    71,    -1,    73,    -1,    70,    37,    72,
      -1,    70,    -1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    71,    71,    72,    73,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    85,    86,    88,    89,    90,    91,
      92,    94,    95,    96,    98,    99,   101,   102,   104,   105,
     106,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     118,   119,   120,   121,   122,   124,   125,   127,   128,   129,
     130,   131,   132,   133,   135,   136,   138,   139,   140,   141,
     142,   143,   145,   146,   147,   148,   150,   151,   152,   153,
     154,   156,   157,   158,   159,   161,   162,   163,   164,   165,
     166,   168,   169,   170,   171,   172,   174,   175,   176,   177,
     178,   180,   181,   182,   183,   184,   186,   187,   189,   190,
     191,   193,   194,   196,   197,   198,   200,   201,   202,   205,
     206,   207,   208,   209,   211,   212,   213,   214,   215,   216,
     217,   218,   220,   222,   223,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PROGRAM", "CLASS", "EXTENDS", "PUBLIC",
  "PRIVATE", "STATIC", "MAIN", "RETURN", "THIS", "WHILE", "IF", "ELSE",
  "PROTECTED", "SYSTEM_OUT_PRINTLN", "INTERFACE", "FOR", "CONTINUE",
  "BREAK", "NUL", "NEW", "STR", "INT", "BOOLEAN", "VOID", "P_OUVRANTE",
  "P_FERMANTE", "C_OUVRANTE", "C_FERMANTE", "BLOCK_START", "BLOCK_END",
  "INTEGER_LITERAL", "BOOLEAN_LITERAL", "STRING", "LENGTH", "VIRGULE",
  "POINT_VIRGULE", "POINT", "OPPAFFECT", "OPPEQUALITY", "OPPINEQUALITY",
  "OPPSUPEQUALITY", "OPPINFEQUALITY", "OPPINF", "OPPSUP", "OPPAND",
  "OPPOR", "OPPADD", "OPPSUB", "OPPMULTIPLY", "OPPDIV", "NOT", "ID",
  "$accept", "programme", "MainClass", "ClassDeclarations",
  "ClassDeclaration", "EXTENDSID", "VarDeclarations", "MethodDeclarations",
  "VarDeclaration", "MethodDeclaration", "argDeclarations",
  "argDeclaration", "type", "Statements", "Statement", "expression",
  "expressionComp", "expressions", "epsilon", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    56,    56,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    58,    58,    59,    59,    59,    59,
      59,    60,    60,    60,    61,    61,    62,    62,    63,    63,
      63,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      65,    65,    65,    65,    65,    66,    66,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,    71,    71,    72,    72,    73
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     1,    17,    17,    17,    17,    17,
      17,    17,    17,    17,     2,     1,     7,     7,     7,     7,
       7,     2,     1,     2,     2,     1,     2,     1,     3,     3,
       3,    13,    13,    13,    13,    13,    13,    13,    13,    13,
       3,     3,     3,     1,     1,     2,     2,     3,     3,     3,
       1,     1,     1,     1,     2,     1,     1,     7,     7,     7,
       7,     7,     5,     5,     5,     5,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     7,     7,     7,     7,     7,
       7,     2,     2,     2,     2,     2,     5,     5,     5,     5,
       5,     4,     4,     4,     4,     4,     2,     2,     4,     4,
       4,     2,     1,     5,     5,     5,     4,     4,     4,     7,
       7,     7,     7,     7,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     1,     0
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     4,     0,    15,     0,     0,
       0,     1,     0,     2,    14,     0,     0,     0,    22,     0,
       0,     0,     0,     0,     0,     0,    23,    21,     0,     0,
       0,     0,     0,     0,     0,    53,     0,    51,    52,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    27,    24,     0,     0,     0,
       0,     0,     0,     0,     0,    48,    49,    47,     0,     0,
      20,    26,    29,    30,    28,     0,    17,     0,     0,     0,
      18,    19,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
      40,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      56,     0,    55,    56,    56,    56,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   102,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,    85,   102,     0,    84,   122,     0,     0,
       0,     0,    81,    82,   101,    96,    83,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,    74,    71,     0,     0,     0,     0,     0,
       0,     0,     0,    13,     6,     7,     9,     8,    10,    11,
      12,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    66,     0,     0,     0,     0,    32,    33,    34,    35,
      36,    37,    38,    39,    31,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     0,     0,     0,   117,   116,   114,
     115,   118,   119,   120,    92,    99,     0,    93,     0,     0,
       0,    94,    95,    91,   100,    98,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   107,   124,     0,     0,
      87,     0,     0,     0,     0,   108,   106,     0,     0,    88,
      89,    90,    86,     0,    76,     0,     0,     0,     0,    77,
      78,    79,    80,    75,     0,     0,   104,   105,   103,     0,
       0,     0,     0,   123,     0,     0,     0,     0,     0,   110,
     111,   112,   113,   109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    20,    39,    53,    40,    54,
     100,   101,    41,   188,   161,   397,   266,   398,   213
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -325
static const yytype_int16 yypact[] =
{
     180,   -53,     4,    57,   522,  -325,   598,  -325,   277,   278,
     344,  -325,    11,  -325,  -325,    25,    72,   191,  -325,   217,
     197,    -4,   274,   120,   277,   277,  -325,  -325,   275,   281,
     275,   297,   317,   275,   275,  -325,   184,  -325,  -325,   226,
     346,    70,  -325,   258,   226,   259,   371,   226,   226,   316,
      21,   158,   158,   366,   226,  -325,  -325,   365,    42,   405,
     387,   413,     2,   399,   107,  -325,  -325,  -325,   373,    84,
    -325,  -325,  -325,  -325,  -325,   437,  -325,   438,   442,   121,
    -325,  -325,  -325,   445,   448,   393,   455,   456,   457,   477,
     478,    36,    36,    36,    36,   464,   469,   474,   476,   489,
     453,   218,   104,  -325,   500,   502,    35,   512,   516,   520,
     524,    44,   529,    36,   151,  -325,  -325,   537,   539,   548,
     295,   528,   535,   536,   538,   540,   542,   205,  -325,   546,
    -325,   205,   205,   205,   205,   205,   575,   576,   583,   590,
     591,   320,    19,    19,    19,    19,    19,    19,   597,   599,
     602,   603,   604,   605,   606,   518,   406,   425,   458,   185,
     621,   600,  -325,   629,   632,   635,   637,   341,   285,   285,
     285,   285,   285,   285,   285,    76,   616,   795,    76,    76,
      76,    76,    76,    76,    48,   616,   795,   795,  -325,   795,
     795,   795,   795,   795,   795,  -325,   470,   475,   561,   628,
     929,   955,   957,   215,  1054,    52,    76,  1054,  1054,  1054,
     735,  1054,   620,  -325,   622,   615,   633,   337,   636,   359,
     638,   376,    98,   194,   122,   625,   627,   630,   634,   640,
     641,   139,   209,   639,   648,   649,   651,   652,   511,   653,
     675,   658,   616,    71,   735,   735,   735,   735,   735,   735,
     735,   975,   660,  -325,  -325,   705,  -325,  -325,    -6,   340,
     465,   384,  -325,  -325,  -325,  -325,  -325,   543,   650,  -325,
     600,   600,   600,    83,    83,    83,   654,   662,   140,   667,
    -325,   677,     6,  -325,  -325,   659,   666,   669,   686,   687,
     698,   699,   256,  -325,  -325,  -325,  -325,  -325,  -325,  -325,
    -325,  -325,   735,  1000,  1084,   616,   276,   765,   735,   467,
    1054,  1054,  1054,  1054,  1054,  1054,  1054,   709,  1054,  1030,
    1108,   717,   616,   616,   616,   719,   395,  1054,  1054,  -325,
     822,   795,   830,   851,   856,   367,   661,   906,  -325,  -325,
    -325,  -325,   795,   795,   795,   795,  -325,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  1054,   339,   735,  -325,   718,
     735,   735,   462,  1054,  1054,   462,   462,  -325,  -325,  -325,
    -325,  -325,  -325,  -325,  -325,  -325,   462,  -325,   730,   731,
     301,  -325,  -325,  -325,  -325,  -325,   600,   711,   600,   600,
     551,   600,   729,   733,   737,   149,  -325,   740,   750,  1054,
    -325,  1054,  1054,   219,   751,  -325,  -325,   762,   404,  -325,
    -325,  -325,  -325,   877,  -325,   884,   901,   911,   934,  -325,
    -325,  -325,  -325,  -325,   462,   735,  -325,  -325,  -325,   735,
     735,   735,   735,  -325,  1054,  1054,  1054,  1054,  1054,  -325,
    -325,  -325,  -325,  -325
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -325,  -325,  -325,   378,  -325,   452,    22,   473,  -325,  -325,
     230,  -325,   -25,    20,  -155,   264,   221,  -324,     0
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -126
static const yytype_int16 yytable[] =
{
       7,     8,    31,    78,     7,     9,     7,   344,    18,    18,
      18,    79,    24,   196,   197,   198,   199,   200,   201,   202,
     155,   321,    66,   322,    18,    18,    68,    69,    42,  -125,
      42,   156,   157,    42,    42,   158,   119,    35,   404,    55,
      42,   407,   408,    73,    55,   125,   345,    55,    55,   203,
      26,    67,    44,   258,    55,    47,    48,    11,    10,   204,
      36,    37,    56,   120,  -125,    25,   102,   102,   102,   102,
     205,    57,   307,   159,   126,   206,   259,   203,  -125,    26,
      74,   207,   208,   209,   155,    84,  -125,   204,   102,   102,
      38,   103,   103,   103,   103,   156,   157,  -125,   205,   158,
     433,   210,   211,   206,  -125,   115,   260,   308,    81,   207,
     208,   209,   330,   103,   103,   332,   333,   334,   335,   336,
     337,    33,    89,   283,    58,   309,    27,    42,   279,   210,
     211,    42,    42,    42,    42,    42,   280,   159,    85,    82,
     291,   340,   162,   162,   162,   162,   162,   162,    90,   142,
     422,    34,   129,   143,   144,   145,   146,   147,   116,    35,
     284,   162,   160,   163,   164,   165,   166,   167,   162,   162,
     162,   162,   162,   162,   162,    36,    37,   292,   341,  -125,
    -125,     1,    36,    37,     2,    49,   184,   423,   195,   195,
     195,   195,   195,   195,   195,   281,   162,   162,   162,   162,
     162,   162,   162,   254,   257,    38,    35,   257,   257,   257,
     293,   257,    38,    50,   185,  -125,   240,  -125,  -125,   113,
     327,  -125,    28,    29,   282,   186,   204,    51,    30,    36,
      37,   413,    52,   415,   416,   417,   418,   205,   -50,   241,
     254,   294,   206,  -125,   242,  -125,   -43,   328,   207,   208,
     209,   257,  -125,  -125,   243,   114,   424,   353,  -125,    38,
     244,   245,   246,   247,   248,   249,   250,   162,   210,   251,
     162,   162,   162,   162,   162,   162,    35,   360,    15,    15,
      32,  -125,    16,    16,    59,    61,   155,   195,   354,    43,
     195,   195,   195,   195,   195,   195,   134,   156,   157,    36,
      37,   158,   411,   257,   257,    45,   361,  -125,  -125,    19,
     257,   257,   257,   257,   257,   257,   257,  -125,   257,   257,
     257,   153,   104,   105,   106,    46,   135,   257,   257,    38,
     162,   412,   162,   162,   162,   162,   162,   162,   271,   159,
     203,   323,   193,   128,   130,    21,    65,    35,   154,    16,
     204,   194,  -125,   -56,   -56,   257,  -125,   -56,  -125,  -125,
     274,   205,  -125,   257,   257,   272,   206,   374,   155,   324,
      36,    37,   207,   208,   209,    22,  -125,   277,  -125,   156,
     157,   388,    13,   158,    14,   327,   162,   275,   162,   162,
     162,   162,   210,   211,    93,   -56,   382,    62,    70,   257,
      38,   257,   257,    72,   278,   431,   195,   178,   195,   195,
     195,   195,   328,   162,    75,   162,   162,   162,   162,    76,
      94,   159,    77,   383,   253,   256,   180,    83,   262,   263,
     264,    80,   432,   179,   257,   257,   257,   257,   257,   212,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   181,   226,   227,   228,   229,   230,   231,   182,
      17,   253,    23,   203,    86,    87,   325,   252,   365,    88,
     261,   155,    91,   204,   265,    92,   155,    23,    95,    96,
      97,   112,   156,   157,   205,   183,   158,   156,   157,   206,
    -125,   158,   326,   107,   366,   207,   208,   209,   108,  -125,
      98,    99,   232,   109,   304,   110,   306,   233,   310,   311,
     312,   313,   314,   315,   316,   210,   211,    60,   111,   320,
      63,    64,    -3,     1,   159,   358,    12,    71,   117,   159,
     118,   367,   368,   369,   370,   371,   372,   373,   175,   375,
     176,   358,   121,   300,   155,   175,   122,   176,   384,   385,
     123,   177,   155,  -125,   124,   156,   157,  -125,   177,   158,
     127,  -125,   155,   156,   157,  -125,   355,   158,   131,   359,
     132,   363,   364,   156,   157,  -125,   396,   158,   175,   133,
     176,   329,   136,  -125,   405,   406,   378,   379,   380,   137,
     138,   177,   139,   234,   140,   387,   141,   159,  -125,     1,
     -53,   155,    12,   148,   149,   159,   392,   393,   394,   395,
    -125,   150,   156,   157,  -125,   159,   158,   203,   151,   152,
     426,   399,   427,   428,   401,   402,   403,   204,   168,   155,
     169,   187,  -125,   170,   171,   172,   173,   174,   205,   189,
     156,   157,   190,   206,   158,   191,  -125,   192,   267,   207,
     208,   209,   268,   269,   159,   439,   440,   441,   442,   443,
     235,   270,   155,   285,   273,   286,   276,     0,   287,   210,
     211,   295,   288,   156,   157,   389,   240,   158,   289,   290,
     296,   297,   159,   298,   299,   301,   204,   305,   318,   434,
     331,   346,   338,   435,   436,   437,   438,   205,   347,   241,
     339,   348,   206,  -125,   242,  -125,   203,   342,   207,   208,
     209,   302,  -125,  -125,   243,   159,   204,   343,   349,   350,
     244,   245,   246,   247,   248,   249,   250,   205,   210,   303,
     351,   352,   206,  -125,  -125,  -125,   203,   374,   207,   208,
     209,   302,  -125,  -125,  -125,   377,   204,   381,   400,   414,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   205,   210,   319,
     409,   410,   206,  -125,  -125,  -125,   203,   419,   207,   208,
     209,   420,  -125,  -125,  -125,   421,   204,   424,   425,   429,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   205,   210,   211,
     430,     0,   362,  -125,  -125,  -125,   203,     0,   207,   208,
     209,     0,  -125,  -125,  -125,     0,   204,     0,     0,     0,
    -125,  -125,  -125,  -125,  -125,  -125,  -125,   205,   210,   211,
       0,     0,   206,   155,     0,     0,     0,     0,   207,   208,
     209,   155,   -63,  -125,   156,   157,   386,     0,   158,     0,
     -64,     0,   156,   157,   -64,     0,   158,     0,   210,   211,
       0,     0,   155,     0,   -63,     0,     0,   155,     0,     0,
       0,   -65,   -64,   156,   157,   -65,   -62,   158,   156,   157,
     -62,     0,   158,     0,     0,     0,   159,     0,   155,     0,
       0,     0,     0,   -65,   159,   155,     0,   -58,   -62,   156,
     157,   -58,     0,   158,   -59,     0,   156,   157,   -59,     0,
     158,     0,   155,     0,     0,   159,     0,   390,     0,   -58,
     159,   -60,   155,   156,   157,   -60,   -59,   158,   156,   157,
     391,   -61,   158,   156,   157,   -61,     0,   158,     0,     0,
     155,   159,     0,   -60,     0,   155,     0,     0,   159,     0,
       0,   156,   157,   -61,   -57,   158,   156,   157,   -57,     0,
     158,     0,     0,     0,     0,   159,   155,     0,   238,     0,
     159,   236,     0,     0,     0,   159,   -57,   156,   157,   156,
     157,   158,     0,   158,     0,     0,   255,     0,     0,     0,
       0,     0,     0,   159,     0,     0,     0,   237,   159,   239,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,   317,  -125,   242,  -125,     0,     0,     0,   159,
       0,   159,  -125,  -125,   243,     0,     0,     0,     0,     0,
     244,   245,   246,   247,   248,   249,   250,   356,  -125,   242,
    -125,   255,     0,     0,     0,     0,     0,  -125,  -125,   243,
       0,     0,     0,     0,     0,   244,   245,   246,   247,   248,
     249,   250,     0,     0,     0,   255,     0,   376,  -125,   242,
    -125,     0,     0,     0,     0,     0,     0,  -125,  -125,   243,
       0,     0,     0,     0,     0,   244,   245,   246,   247,   248,
     249,   250,  -125,   242,  -125,   255,     0,     0,     0,     0,
       0,  -125,  -125,   243,     0,     0,     0,     0,     0,   244,
     245,   246,   247,   248,   249,   250,     0,     0,     0,   255,
       0,     0,   318,   242,   357,     0,     0,     0,     0,     0,
       0,   -97,   -97,   243,     0,     0,     0,     0,     0,   244,
     245,   246,   247,   248,   249,   250,  -125,   242,   357,     0,
       0,     0,     0,     0,     0,  -125,  -125,   243,     0,     0,
       0,     0,     0,   244,   245,   246,   247,   248,   249,   250
};

static const yytype_int16 yycheck[] =
{
       0,    54,     6,     1,     4,     1,     6,     1,     8,     9,
      10,     9,     1,   168,   169,   170,   171,   172,   173,   174,
       1,    27,     1,    29,    24,    25,    51,    52,    28,    10,
      30,    12,    13,    33,    34,    16,     1,     1,   362,    39,
      40,   365,   366,     1,    44,     1,    40,    47,    48,     1,
      54,    30,    30,     1,    54,    33,    34,     0,    54,    11,
      24,    25,    40,    28,    28,    54,    91,    92,    93,    94,
      22,     1,     1,    54,    30,    27,    24,     1,    30,    54,
      38,    33,    34,    35,     1,     1,    38,    11,   113,   114,
      54,    91,    92,    93,    94,    12,    13,    14,    22,    16,
     424,    53,    54,    27,    28,     1,    54,    36,     1,    33,
      34,    35,   267,   113,   114,   270,   271,   272,   273,   274,
     275,     1,     1,     1,    54,    54,    54,   127,    30,    53,
      54,   131,   132,   133,   134,   135,    38,    54,    54,    32,
       1,     1,   142,   143,   144,   145,   146,   147,    27,   127,
       1,    31,     1,   131,   132,   133,   134,   135,    54,     1,
      38,   161,   142,   143,   144,   145,   146,   147,   168,   169,
     170,   171,   172,   173,   174,    24,    25,    38,    38,    28,
       0,     1,    24,    25,     4,     1,     1,    38,   168,   169,
     170,   171,   172,   173,   174,     1,   196,   197,   198,   199,
     200,   201,   202,   203,   204,    54,     1,   207,   208,   209,
       1,   211,    54,    29,    29,    10,     1,    12,    13,     1,
       1,    16,    31,     6,    30,    40,    11,     1,    31,    24,
      25,   386,     6,   388,   389,   390,   391,    22,    54,    24,
     240,    32,    27,    28,    29,    30,    28,    28,    33,    34,
      35,   251,    37,    38,    39,    37,    37,     1,    32,    54,
      45,    46,    47,    48,    49,    50,    51,   267,    53,    54,
     270,   271,   272,   273,   274,   275,     1,     1,     1,     1,
       6,     6,     5,     5,    26,    26,     1,   267,    32,     8,
     270,   271,   272,   273,   274,   275,     1,    12,    13,    24,
      25,    16,     1,   303,   304,     8,    30,    32,    31,    31,
     310,   311,   312,   313,   314,   315,   316,    32,   318,   319,
     320,     1,    92,    93,    94,     8,    31,   327,   328,    54,
     330,    30,   332,   333,   334,   335,   336,   337,     1,    54,
       1,     1,     1,   113,   114,     1,    30,     1,    28,     5,
      11,    10,     6,    12,    13,   355,    10,    16,    12,    13,
       1,    22,    16,   363,   364,    28,    27,    28,     1,    29,
      24,    25,    33,    34,    35,    31,    37,     1,    32,    12,
      13,    14,     4,    16,     6,     1,   386,    28,   388,   389,
     390,   391,    53,    54,     1,    54,     1,    26,    32,   399,
      54,   401,   402,    38,    28,     1,   386,     1,   388,   389,
     390,   391,    28,   413,     9,   415,   416,   417,   418,    32,
      27,    54,     9,    28,   203,   204,     1,    54,   207,   208,
     209,    32,    28,    27,   434,   435,   436,   437,   438,   175,
     176,   177,   178,   179,   180,   181,   182,   183,   184,   185,
     186,   187,    27,   189,   190,   191,   192,   193,   194,     1,
       8,   240,    10,     1,    27,    27,     1,   203,     1,    27,
     206,     1,    27,    11,   210,    27,     1,    25,    23,    23,
      23,    28,    12,    13,    22,    27,    16,    12,    13,    27,
      28,    16,    27,    29,    27,    33,    34,    35,    29,    37,
      23,    23,    32,    29,   240,    29,   242,    32,   244,   245,
     246,   247,   248,   249,   250,    53,    54,    44,    29,   255,
      47,    48,     0,     1,    54,   304,     4,    54,    28,    54,
      28,   310,   311,   312,   313,   314,   315,   316,    27,   318,
      29,   320,    30,    32,     1,    27,    30,    29,   327,   328,
      30,    40,     1,    10,    30,    12,    13,    14,    40,    16,
      31,    10,     1,    12,    13,    14,   302,    16,    31,   305,
      31,   307,   308,    12,    13,    32,   355,    16,    27,    31,
      29,    38,    54,    32,   363,   364,   322,   323,   324,    54,
      54,    40,    54,    32,    54,   331,    54,    54,     0,     1,
      54,     1,     4,    28,    28,    54,   342,   343,   344,   345,
      10,    28,    12,    13,    14,    54,    16,     1,    28,    28,
     399,   357,   401,   402,   360,   361,   362,    11,    31,     1,
      31,    10,    32,    31,    31,    31,    31,    31,    22,    10,
      12,    13,    10,    27,    16,    10,    30,    10,    28,    33,
      34,    35,    30,    38,    54,   434,   435,   436,   437,   438,
      32,    28,     1,    38,    28,    38,    28,    -1,    38,    53,
      54,    32,    38,    12,    13,    14,     1,    16,    38,    38,
      32,    32,    54,    32,    32,    32,    11,    29,    28,   425,
      40,    32,    38,   429,   430,   431,   432,    22,    32,    24,
      38,    32,    27,    28,    29,    30,     1,    40,    33,    34,
      35,    36,    37,    38,    39,    54,    11,    40,    32,    32,
      45,    46,    47,    48,    49,    50,    51,    22,    53,    54,
      32,    32,    27,    28,    29,    30,     1,    28,    33,    34,
      35,    36,    37,    38,    39,    28,    11,    28,    30,    38,
      45,    46,    47,    48,    49,    50,    51,    22,    53,    54,
      30,    30,    27,    28,    29,    30,     1,    38,    33,    34,
      35,    38,    37,    38,    39,    38,    11,    37,    28,    28,
      45,    46,    47,    48,    49,    50,    51,    22,    53,    54,
      28,    -1,    27,    28,    29,    30,     1,    -1,    33,    34,
      35,    -1,    37,    38,    39,    -1,    11,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    22,    53,    54,
      -1,    -1,    27,     1,    -1,    -1,    -1,    -1,    33,    34,
      35,     1,    10,    38,    12,    13,    14,    -1,    16,    -1,
      10,    -1,    12,    13,    14,    -1,    16,    -1,    53,    54,
      -1,    -1,     1,    -1,    32,    -1,    -1,     1,    -1,    -1,
      -1,    10,    32,    12,    13,    14,    10,    16,    12,    13,
      14,    -1,    16,    -1,    -1,    -1,    54,    -1,     1,    -1,
      -1,    -1,    -1,    32,    54,     1,    -1,    10,    32,    12,
      13,    14,    -1,    16,    10,    -1,    12,    13,    14,    -1,
      16,    -1,     1,    -1,    -1,    54,    -1,     1,    -1,    32,
      54,    10,     1,    12,    13,    14,    32,    16,    12,    13,
      14,    10,    16,    12,    13,    14,    -1,    16,    -1,    -1,
       1,    54,    -1,    32,    -1,     1,    -1,    -1,    54,    -1,
      -1,    12,    13,    32,    10,    16,    12,    13,    14,    -1,
      16,    -1,    -1,    -1,    -1,    54,     1,    -1,     1,    -1,
      54,    32,    -1,    -1,    -1,    54,    32,    12,    13,    12,
      13,    16,    -1,    16,    -1,    -1,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    32,    54,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    27,    28,    29,    30,    -1,    -1,    -1,    54,
      -1,    54,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    48,    49,    50,    51,    27,    28,    29,
      30,     1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,     1,    -1,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48,    49,
      50,    51,    28,    29,    30,     1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,     1,
      -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    48,    49,    50,    51,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    48,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    56,    57,    58,    59,    73,    54,     1,
      54,     0,     4,    58,    58,     1,     5,    60,    73,    31,
      60,     1,    31,    60,     1,    54,    54,    54,    31,     6,
      31,     6,     6,     1,    31,     1,    24,    25,    54,    61,
      63,    67,    73,     8,    61,     8,     8,    61,    61,     1,
      29,     1,     6,    62,    64,    73,    61,     1,    54,    26,
      62,    26,    26,    62,    62,    30,     1,    30,    67,    67,
      32,    62,    38,     1,    38,     9,    32,     9,     1,     9,
      32,     1,    32,    54,     1,    54,    27,    27,    27,     1,
      27,    27,    27,     1,    27,    23,    23,    23,    23,    23,
      65,    66,    67,    73,    65,    65,    65,    29,    29,    29,
      29,    29,    28,     1,    37,     1,    54,    28,    28,     1,
      28,    30,    30,    30,    30,     1,    30,    31,    65,     1,
      65,    31,    31,    31,     1,    31,    54,    54,    54,    54,
      54,    54,    61,    61,    61,    61,    61,    61,    28,    28,
      28,    28,    28,     1,    28,     1,    12,    13,    16,    54,
      68,    69,    73,    68,    68,    68,    68,    68,    31,    31,
      31,    31,    31,    31,    31,    27,    29,    40,     1,    27,
       1,    27,     1,    27,     1,    29,    40,    10,    68,    10,
      10,    10,    10,     1,    10,    68,    69,    69,    69,    69,
      69,    69,    69,     1,    11,    22,    27,    33,    34,    35,
      53,    54,    70,    73,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    32,    32,    32,    32,    32,    32,     1,    32,
       1,    24,    29,    39,    45,    46,    47,    48,    49,    50,
      51,    54,    70,    71,    73,     1,    71,    73,     1,    24,
      54,    70,    71,    71,    71,    70,    71,    28,    30,    38,
      28,     1,    28,    28,     1,    28,    28,     1,    28,    30,
      38,     1,    30,     1,    38,    38,    38,    38,    38,    38,
      38,     1,    38,     1,    32,    32,    32,    32,    32,    32,
      32,    32,    36,    54,    70,    29,    70,     1,    36,    54,
      70,    70,    70,    70,    70,    70,    70,    27,    28,    54,
      70,    27,    29,     1,    29,     1,    27,     1,    28,    38,
      69,    40,    69,    69,    69,    69,    69,    69,    38,    38,
       1,    38,    40,    40,     1,    40,    32,    32,    32,    32,
      32,    32,    32,     1,    32,    70,    27,    30,    71,    70,
       1,    30,    27,    70,    70,     1,    27,    71,    71,    71,
      71,    71,    71,    71,    28,    71,    27,    28,    70,    70,
      70,    28,     1,    28,    71,    71,    14,    70,    14,    14,
       1,    14,    70,    70,    70,    70,    71,    70,    72,    70,
      30,    70,    70,    70,    72,    71,    71,    72,    72,    30,
      30,     1,    30,    69,    38,    69,    69,    69,    69,    38,
      38,    38,     1,    38,    37,    28,    71,    71,    71,    28,
      28,     1,    28,    72,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    71
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
        case 6:

/* Line 1455 of yacc.c  */
#line 76 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : class name not found"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 77 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '{' expected but not found"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 78 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '(' expected but not found"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 79 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : class main not found"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 80 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : ']' expected but not found"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 81 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : ')' expected but not found"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 82 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration : '}' expected but not found"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 83 "SyntaxicAnalyser.y"
    {yyerror (" invalid declaration :'}' expected but not found"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 89 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : Keyword invalid"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 90 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '{' expect but not found"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 91 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '}' expect but not found "); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 92 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : keyword CLASS not found "); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 96 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : keyword EXTENDS not found");;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 105 "SyntaxicAnalyser.y"
    {yyerror ("invalid identifier");;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 106 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ';' expect but not found"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 109 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : PUBLIC missing");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 110 "SyntaxicAnalyser.y"
    {yyerror ("invalid identifier"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 111 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '(' expected but not found"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 112 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ')' expected but not found"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 113 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '{' expected but not found"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 114 "SyntaxicAnalyser.y"
    {yyerror ("RETURN missing"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 115 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ';' expected but not found"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 116 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '}' expected but not found"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 119 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ',' expected but not found");;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 120 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ',' unexpected but found");;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 125 "SyntaxicAnalyser.y"
    {yyerror ("invalid identifier");;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 128 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '[' expected but not found"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 129 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ']' expected but not found");;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 133 "SyntaxicAnalyser.y"
    {yyerror ("error in type");;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 140 "SyntaxicAnalyser.y"
    {yyerror ("missing keyword IF");;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 141 "SyntaxicAnalyser.y"
    {yyerror (" declaration invalid : '(' expected but not found"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 142 "SyntaxicAnalyser.y"
    {yyerror (" declaration invalid : ')' expected but not found "); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 143 "SyntaxicAnalyser.y"
    {yyerror ("missing keyword ELSE ");;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 146 "SyntaxicAnalyser.y"
    {yyerror ("missing keyword WHILE");;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 147 "SyntaxicAnalyser.y"
    {yyerror (" declaration invalid : '(' expected but not found ");;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 148 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ')' expected but not found");;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 151 "SyntaxicAnalyser.y"
    {yyerror ("missing keyword  SYSTEM_OUT_PRINTLN");;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 152 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '(' expected but not found");;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 153 "SyntaxicAnalyser.y"
    {yyerror (" declaration invalid : ')' expected but not found");;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 154 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ';' expected but not found");;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 157 "SyntaxicAnalyser.y"
    {yyerror ("invalid identifier ");;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 158 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION missing");;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 159 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ';' expected but not found");;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 162 "SyntaxicAnalyser.y"
    {yyerror ("invalid identifier ");;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 163 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '[' expected but not found ");;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 164 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ']' expected but not found ");;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 165 "SyntaxicAnalyser.y"
    {yyerror ("AFFECTATION missing");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 166 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ';' expected but not found");;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 172 "SyntaxicAnalyser.y"
    {yyerror ("Expression error");;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 175 "SyntaxicAnalyser.y"
    {yyerror (" keyword NEW missing ");;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 176 "SyntaxicAnalyser.y"
    {yyerror (" keyword INT missing  ");;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 177 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '[' expected but not found ");;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 178 "SyntaxicAnalyser.y"
    {yyerror (" declaration invalid : ']' expected but not found  ");;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 181 "SyntaxicAnalyser.y"
    {yyerror (" keyword NEW missing");;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 182 "SyntaxicAnalyser.y"
    {yyerror (" invalid identifie ");;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 183 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '(' expected but not found");;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 184 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ')' expected but not found");;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 187 "SyntaxicAnalyser.y"
    {yyerror ("expression error");;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 190 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '(' expected but not found");;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 191 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ')' expected but not found");;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 197 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '[' expected but not found");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 198 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ']' expected but not found");;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 201 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '.' expected but not found");;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 202 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : 'LENGTH' expected but not found");;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 206 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '.' expected but not found");;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 207 "SyntaxicAnalyser.y"
    {yyerror ("invalid indentifier");;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 208 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : '(' expected but not found");;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 209 "SyntaxicAnalyser.y"
    {yyerror ("declaration invalid : ')' expected but not found");;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 218 "SyntaxicAnalyser.y"
    {yyerror ("Missing orperator");;}
    break;



/* Line 1455 of yacc.c  */
#line 2356 "SyntaxicAnalyser.tab.c"
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
#line 228 "SyntaxicAnalyser.y"



int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
}
