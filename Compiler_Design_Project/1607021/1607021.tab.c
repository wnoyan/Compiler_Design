
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
#line 1 "1607021.y"

	#include<math.h>
	#include<stdio.h>
	#include<stdlib.h>
	#include <string.h>

	int yyparse();
	int yylex();
	int yyerror();

	int switchdone = 0;
	int switchvar;

	int ifval[1000];
	int ifptr = -1;
	int ifdone[1000];

    int ptr = 0;
    int value[1000];
    char varlist[1000][1000];

    ///if already declared  return 1 else return 0
    int isdeclared(char str[]){
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) return 1;
        }
        return 0;
    }

    /// if already declared return 0 or add new value and return 1;
    int addnewval(char str[],int val){
        if(isdeclared(str) == 1) return 0;
        strcpy(varlist[ptr],str);
        value[ptr] = val;
        ptr++;
        return 1;
    }

    ///get the value of corresponding string
    int getval(char str[]){
        int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
        return value[indx];
    }

    int setval(char str[], int val){
    	int indx = -1;
        int i;
        for(i = 0; i < ptr; i++){
            if(strcmp(varlist[i],str) == 0) {
                indx = i;
                break;
            }
        }
        value[indx] = val;

    }




/* Line 189 of yacc.c  */
#line 142 "1607021.tab.c"

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
     ID = 258,
     NUM = 259,
     STR = 260,
     GE = 261,
     LE = 262,
     GT = 263,
     LT = 264,
     MINUS = 265,
     PLUS = 266,
     DIV = 267,
     MULT = 268,
     INT = 269,
     DOUBLE = 270,
     CHAR = 271,
     MAIN = 272,
     PB = 273,
     PE = 274,
     BB = 275,
     BE = 276,
     SM = 277,
     CM = 278,
     ASGN = 279,
     PRINTVAR = 280,
     PRINTSTR = 281,
     PRINTLN = 282,
     IF = 283,
     ELSE = 284,
     ELSEIF = 285,
     FOR = 286,
     INC = 287,
     TO = 288,
     SWITCH = 289,
     DEFAULT = 290,
     COL = 291,
     FUNCTION = 292,
     EQU = 293,
     NEQU = 294,
     EXP = 295,
     GCD = 296,
     MAX = 297,
     IFX = 298,
     SH = 299
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 69 "1607021.y"

  char text[1000];
  int val;



/* Line 214 of yacc.c  */
#line 229 "1607021.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 241 "1607021.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   299

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     7,    15,    16,    19,    22,    25,    28,
      31,    34,    37,    41,    43,    45,    47,    51,    53,    55,
      59,    64,    70,    76,    81,    83,    85,    89,    93,    97,
     101,   105,   109,   113,   117,   121,   125,   129,   133,   137,
     141,   150,   152,   153,   162,   168,   180,   188,   190,   191,
     198,   205,   206,   209,   218,   219,   223,   224
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      46,     0,    -1,    63,    47,    63,    -1,    14,    17,    18,
      19,    20,    48,    21,    -1,    -1,    48,    49,    -1,    48,
      54,    -1,    48,    55,    -1,    48,    56,    -1,    48,    53,
      -1,    48,    59,    -1,    48,    60,    -1,    50,    51,    22,
      -1,    14,    -1,    15,    -1,    16,    -1,    52,    23,    51,
      -1,    52,    -1,     3,    -1,     3,    24,    55,    -1,     3,
      24,    55,    22,    -1,    25,    18,     3,    19,    22,    -1,
      26,    18,     5,    19,    22,    -1,    27,    18,    19,    22,
      -1,     4,    -1,     3,    -1,    55,    11,    55,    -1,    55,
      10,    55,    -1,    55,    13,    55,    -1,    55,    12,    55,
      -1,    55,     9,    55,    -1,    55,     8,    55,    -1,    55,
       7,    55,    -1,    55,     6,    55,    -1,    55,    38,    55,
      -1,    55,    39,    55,    -1,    18,    55,    19,    -1,    55,
      40,    55,    -1,    55,    41,    55,    -1,    55,    42,    55,
      -1,    28,    18,    57,    19,    20,    48,    21,    58,    -1,
      55,    -1,    -1,    58,    30,    18,    55,    19,    20,    48,
      21,    -1,    58,    29,    20,    48,    21,    -1,    31,    18,
      55,    33,    55,    32,    55,    19,    20,    48,    21,    -1,
      34,    18,    61,    19,    20,    62,    21,    -1,    55,    -1,
      -1,    62,    55,    36,    20,    48,    21,    -1,    62,    35,
      36,    20,    48,    21,    -1,    -1,    63,    64,    -1,    50,
      37,    18,    65,    19,    20,    48,    21,    -1,    -1,    50,
       3,    66,    -1,    -1,    66,    23,    50,     3,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    95,    95,    98,   101,   102,   103,   104,   105,   106,
     107,   108,   115,   118,   118,   118,   121,   122,   125,   135,
     151,   167,   178,   184,   196,   197,   207,   209,   211,   213,
     224,   226,   228,   230,   232,   234,   236,   238,   254,   268,
     284,   291,   301,   302,   309,   324,   342,   345,   353,   354,
     361,   375,   376,   379,   384,   385,   387,   388
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "NUM", "STR", "GE", "LE", "GT",
  "LT", "MINUS", "PLUS", "DIV", "MULT", "INT", "DOUBLE", "CHAR", "MAIN",
  "PB", "PE", "BB", "BE", "SM", "CM", "ASGN", "PRINTVAR", "PRINTSTR",
  "PRINTLN", "IF", "ELSE", "ELSEIF", "FOR", "INC", "TO", "SWITCH",
  "DEFAULT", "COL", "FUNCTION", "EQU", "NEQU", "EXP", "GCD", "MAX", "IFX",
  "SH", "$accept", "starthere", "program", "statement", "declaration",
  "type", "variables", "variable", "assign", "print", "expression",
  "ifelse", "ifexp", "elseif", "forloop", "switch", "expswitch",
  "switchinside", "function", "func", "fparameter", "fsparameter", 0
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
     295,   296,   297,   298,   299
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    45,    46,    47,    48,    48,    48,    48,    48,    48,
      48,    48,    49,    50,    50,    50,    51,    51,    52,    52,
      53,    54,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    57,    58,    58,    58,    59,    60,    61,    62,    62,
      62,    63,    63,    64,    65,    65,    66,    66
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     7,     0,     2,     2,     2,     2,     2,
       2,     2,     3,     1,     1,     1,     3,     1,     1,     3,
       4,     5,     5,     4,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       8,     1,     0,     8,     5,    11,     7,     1,     0,     6,
       6,     0,     2,     8,     0,     3,     0,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      51,     0,     0,     1,    13,    14,    15,    51,     0,    52,
       0,     2,     0,     0,    13,    54,     0,     0,     0,     4,
      56,     0,     0,    55,     4,    25,    24,     0,     3,     0,
       0,     0,     0,     0,     0,     5,     0,     9,     6,     7,
       8,    10,    11,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    17,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,    36,     0,     0,     0,    41,     0,     0,
      47,     0,     0,    12,     0,    33,    32,    31,    30,    27,
      26,    29,    28,    34,    35,    37,    38,    39,    57,    20,
       0,     0,    23,     0,     0,     0,    19,    16,    21,    22,
       4,     0,    48,     0,     0,     0,    42,     0,    46,     0,
       0,    40,     0,     0,     0,     0,     0,     4,     4,     4,
       4,     0,     0,     0,     0,     0,     0,    45,    50,    49,
      44,     0,     4,     0,    43
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     7,    22,    35,    36,    55,    56,    37,    38,
      39,    40,    78,   121,    41,    42,    81,   115,     2,     9,
      18,    23
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -32
static const yytype_int16 yypact[] =
{
     -32,     3,    17,   -32,   -12,   -32,   -32,   -32,   -20,   -32,
      -4,    34,     0,     1,   -32,    34,     7,    18,    37,   -32,
     -32,    40,   253,    46,   -32,    47,   -32,    -2,   -32,    52,
      58,    59,    60,    61,    62,   -32,    70,   -32,   -32,   224,
     -32,   -32,   -32,    34,   279,    -2,   -32,    55,    79,    78,
      65,    -2,    -2,    -2,    63,    66,    67,    -2,    -2,    -2,
      -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,    -2,
      82,   -32,   103,   -32,    80,    81,    76,   224,    83,   120,
     224,    88,    -2,   -32,    70,    13,    13,    13,    13,   108,
     108,   -31,   -31,   224,   224,   224,   224,   224,   -32,   -32,
      95,    97,   -32,   102,    -2,   104,   224,   -32,   -32,   -32,
     -32,   157,   -32,   305,    -2,    54,   -32,   165,   -32,    87,
     202,   -17,   114,   115,   116,   117,   121,   -32,   -32,   -32,
     -32,    -2,   331,   357,   383,   409,   210,   -32,   -32,   -32,
     -32,   118,   -32,   435,   -32
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -32,   -32,   -32,   -24,   -32,     4,    56,   -32,   -32,   -32,
     -23,   -32,   -32,   -32,   -32,   -32,   -32,   -32,    94,   -32,
     -32,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      44,    46,    26,     3,    47,    10,     8,    65,    66,    67,
      68,    69,   125,   126,    13,     8,    27,    12,    15,    17,
      16,    20,    72,    61,    62,    63,    64,    19,    77,    79,
      80,     4,     5,     6,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    70,    14,     5,
       6,    65,    66,    67,    68,    69,    21,    46,    26,   106,
      24,    57,    58,    59,    60,    61,    62,    63,    64,    43,
      48,    45,    27,    54,    73,   118,    49,    50,    51,    52,
      53,   111,    74,    75,    76,    98,   113,    82,    83,   119,
      84,   117,   120,    65,    66,    67,    68,    69,   102,   100,
     101,    11,   103,   132,   133,   134,   135,   105,   136,    57,
      58,    59,    60,    61,    62,    63,    64,   108,   143,   109,
      63,    64,   110,   123,   112,    99,    57,    58,    59,    60,
      61,    62,    63,    64,   127,   128,   129,   130,   142,   131,
     107,    65,    66,    67,    68,    69,    65,    66,    67,    68,
      69,     0,     0,   104,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    57,    58,    59,    60,    61,    62,    63,
      64,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,   114,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
       0,     0,     0,    65,    66,    67,    68,    69,    57,    58,
      59,    60,    61,    62,    63,    64,    57,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     0,     0,   141,
      57,    58,    59,    60,    61,    62,    63,    64,   124,     0,
      65,    66,    67,    68,    69,     0,     0,     0,    65,    66,
      67,    68,    69,     0,     0,     0,    25,    26,     0,     0,
       0,     0,    65,    66,    67,    68,    69,    14,     5,     6,
       0,    27,     0,     0,    28,     0,     0,     0,    29,    30,
      31,    32,    25,    26,    33,     0,     0,    34,     0,     0,
       0,     0,     0,    14,     5,     6,     0,    27,     0,     0,
      71,     0,     0,     0,    29,    30,    31,    32,    25,    26,
      33,     0,     0,    34,     0,     0,     0,     0,     0,    14,
       5,     6,     0,    27,     0,     0,   116,     0,     0,     0,
      29,    30,    31,    32,    25,    26,    33,     0,     0,    34,
       0,     0,     0,     0,     0,    14,     5,     6,     0,    27,
       0,     0,   137,     0,     0,     0,    29,    30,    31,    32,
      25,    26,    33,     0,     0,    34,     0,     0,     0,     0,
       0,    14,     5,     6,     0,    27,     0,     0,   138,     0,
       0,     0,    29,    30,    31,    32,    25,    26,    33,     0,
       0,    34,     0,     0,     0,     0,     0,    14,     5,     6,
       0,    27,     0,     0,   139,     0,     0,     0,    29,    30,
      31,    32,    25,    26,    33,     0,     0,    34,     0,     0,
       0,     0,     0,    14,     5,     6,     0,    27,     0,     0,
     140,     0,     0,     0,    29,    30,    31,    32,    25,    26,
      33,     0,     0,    34,     0,     0,     0,     0,     0,    14,
       5,     6,     0,    27,     0,     0,   144,     0,     0,     0,
      29,    30,    31,    32,     0,     0,    33,     0,     0,    34
};

static const yytype_int16 yycheck[] =
{
      24,     3,     4,     0,    27,    17,     2,    38,    39,    40,
      41,    42,    29,    30,    18,    11,    18,    37,    18,    15,
      19,     3,    45,    10,    11,    12,    13,    20,    51,    52,
      53,    14,    15,    16,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    43,    14,    15,
      16,    38,    39,    40,    41,    42,    19,     3,     4,    82,
      20,     6,     7,     8,     9,    10,    11,    12,    13,    23,
      18,    24,    18,     3,    19,    21,    18,    18,    18,    18,
      18,   104,     3,     5,    19,     3,   110,    24,    22,    35,
      23,   114,   115,    38,    39,    40,    41,    42,    22,    19,
      19,     7,    19,   127,   128,   129,   130,    19,   131,     6,
       7,     8,     9,    10,    11,    12,    13,    22,   142,    22,
      12,    13,    20,    36,    20,    22,     6,     7,     8,     9,
      10,    11,    12,    13,    20,    20,    20,    20,    20,    18,
      84,    38,    39,    40,    41,    42,    38,    39,    40,    41,
      42,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,     6,     7,     8,     9,    10,    11,    12,
      13,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    32,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      -1,    -1,    -1,    38,    39,    40,    41,    42,     6,     7,
       8,     9,    10,    11,    12,    13,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    19,
       6,     7,     8,     9,    10,    11,    12,    13,    36,    -1,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    38,    39,    40,    41,    42,    14,    15,    16,
      -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    25,    26,
      27,    28,     3,     4,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    -1,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,     3,     4,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      25,    26,    27,    28,     3,     4,    31,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      -1,    -1,    21,    -1,    -1,    -1,    25,    26,    27,    28,
       3,     4,    31,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    -1,    -1,    21,    -1,
      -1,    -1,    25,    26,    27,    28,     3,     4,    31,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    -1,    -1,    21,    -1,    -1,    -1,    25,    26,
      27,    28,     3,     4,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    -1,    -1,
      21,    -1,    -1,    -1,    25,    26,    27,    28,     3,     4,
      31,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    -1,    -1,    21,    -1,    -1,    -1,
      25,    26,    27,    28,    -1,    -1,    31,    -1,    -1,    34
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    46,    63,     0,    14,    15,    16,    47,    50,    64,
      17,    63,    37,    18,    14,    18,    19,    50,    65,    20,
       3,    19,    48,    66,    20,     3,     4,    18,    21,    25,
      26,    27,    28,    31,    34,    49,    50,    53,    54,    55,
      56,    59,    60,    23,    48,    24,     3,    55,    18,    18,
      18,    18,    18,    18,     3,    51,    52,     6,     7,     8,
       9,    10,    11,    12,    13,    38,    39,    40,    41,    42,
      50,    21,    55,    19,     3,     5,    19,    55,    57,    55,
      55,    61,    24,    22,    23,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,     3,    22,
      19,    19,    22,    19,    33,    19,    55,    51,    22,    22,
      20,    55,    20,    48,    32,    62,    21,    55,    21,    35,
      55,    58,    19,    36,    36,    29,    30,    20,    20,    20,
      20,    18,    48,    48,    48,    48,    55,    21,    21,    21,
      21,    19,    20,    48,    21
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
        case 2:

/* Line 1455 of yacc.c  */
#line 95 "1607021.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 115 "1607021.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 118 "1607021.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 121 "1607021.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 122 "1607021.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 126 "1607021.y"
    {
						//printf("%s\n",$1);
						int x = addnewval((yyvsp[(1) - (1)].text),0);
						if(!x) {
							printf("Compilation Error:Variable %s is already declared\n",(yyvsp[(1) - (1)].text));
							exit(-1);
						}

					;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 136 "1607021.y"
    {
						//printf("%s %d\n",$1,$3);
						int x = addnewval((yyvsp[(1) - (3)].text),(yyvsp[(3) - (3)].val));
						if(!x) {
							printf("Compilation Error: Variable %s is already declared\n",(yyvsp[(1) - (3)].text));
							exit(-1);
							}
					;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 152 "1607021.y"
    {
						if(!isdeclared((yyvsp[(1) - (4)].text))) {
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (4)].text));
							exit(-1);
						}
						else{
							setval((yyvsp[(1) - (4)].text),(yyvsp[(3) - (4)].val));
						}
				    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 168 "1607021.y"
    {
						if(!isdeclared((yyvsp[(3) - (5)].text))){
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(3) - (5)].text));
							exit(-1);
						}
						else{
							int v = getval((yyvsp[(3) - (5)].text));
							printf("%d\n",v);
						}
					;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 179 "1607021.y"
    {
						int l = strlen((yyvsp[(3) - (5)].text));
						int i;
						for(i = 1;  i < l-1; i++) printf("%c",(yyvsp[(3) - (5)].text)[i]);
					;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 185 "1607021.y"
    {
						printf("\n");
					;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 196 "1607021.y"
    {(yyval.val) = (yyvsp[(1) - (1)].val);;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 198 "1607021.y"
    {
						if(!isdeclared((yyvsp[(1) - (1)].text))) {
							printf("Compilation Error: Variable %s is not declared\n",(yyvsp[(1) - (1)].text));
							exit(-1);
						}
						else{
							(yyval.val) = getval((yyvsp[(1) - (1)].text));
						}
				 	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 208 "1607021.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) + (yyvsp[(3) - (3)].val);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 210 "1607021.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) - (yyvsp[(3) - (3)].val);;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 212 "1607021.y"
    {(yyval.val) = (yyvsp[(1) - (3)].val) * (yyvsp[(3) - (3)].val);;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 214 "1607021.y"
    {
						if((yyvsp[(3) - (3)].val)) {
 							(yyval.val) = (yyvsp[(1) - (3)].val) / (yyvsp[(3) - (3)].val);
							}
				  		else {
							(yyval.val) = 0;
							printf("\nRuntime Error: division by zero\t");
							exit(-1);
				  		} 
					;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 225 "1607021.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) < (yyvsp[(3) - (3)].val); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 227 "1607021.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) > (yyvsp[(3) - (3)].val); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 229 "1607021.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) <= (yyvsp[(3) - (3)].val); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 231 "1607021.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) >= (yyvsp[(3) - (3)].val); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 233 "1607021.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) == (yyvsp[(3) - (3)].val); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 235 "1607021.y"
    { (yyval.val) = (yyvsp[(1) - (3)].val) != (yyvsp[(3) - (3)].val); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 237 "1607021.y"
    {(yyval.val) = (yyvsp[(2) - (3)].val);;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 239 "1607021.y"
    {
					int n = (yyvsp[(1) - (3)].val);
					int m = (yyvsp[(3) - (3)].val);
					int value = 1;

					while(m){
						value *= n;
						m--;
					}

					//printf("The expotential value : %d\n", value);

					(yyval.val) = value;
				;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 255 "1607021.y"
    {
					int a = (yyvsp[(1) - (3)].val);
					int b = (yyvsp[(3) - (3)].val);

					while(a != b){
						if(a > b)	a -= b;
						else b -= a;
					}

					(yyval.val) = a;

				;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 269 "1607021.y"
    {
					int a = (yyvsp[(1) - (3)].val);
					int b = (yyvsp[(3) - (3)].val);

					if(a > b) (yyval.val) = a;
					else (yyval.val) = b;
				;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 285 "1607021.y"
    {

						ifdone[ifptr] = 0;
						ifptr--;
					;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 292 "1607021.y"
    {
						ifptr++;
						ifdone[ifptr] = 0;
						if((yyvsp[(1) - (1)].val)){
							//printf("If executed!\n");
							ifdone[ifptr] = 1;
						}
					;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 303 "1607021.y"
    {
						if((yyvsp[(4) - (8)].val) && ifdone[ifptr] == 0){
							printf("Else if executed!\n");
							ifdone[ifptr] = 1;
						}
					;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 310 "1607021.y"
    {
						if(ifdone[ifptr] == 0){
							printf("Else executed!\n");
							ifdone[ifptr] = 1;
						}
					;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 325 "1607021.y"
    {
						int st = (yyvsp[(3) - (11)].val);
						int ed = (yyvsp[(5) - (11)].val);
						int dif = (yyvsp[(7) - (11)].val);
						int cnt = 0;
						int k = 0;
						for(k = st; k <= ed; k += dif){
							cnt++;
						}	
						printf("Loop executes %d times\n",cnt);
					;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 346 "1607021.y"
    {
						switchdone = 0;
						switchvar = (yyvsp[(1) - (1)].val);
					;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 355 "1607021.y"
    {
						if((yyvsp[(2) - (6)].val) == switchvar){
							printf("Executed %d block case!\n",(yyvsp[(2) - (6)].val));
							switchdone = 1;
						}					
					;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 362 "1607021.y"
    {
						if(switchdone == 0){
							switchdone = 1;
							printf("Default block case executed!\n");
						}
					;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 380 "1607021.y"
    {
						printf("Function Declared\n");
					;}
    break;



/* Line 1455 of yacc.c  */
#line 1996 "1607021.tab.c"
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
#line 393 "1607021.y"



int yyerror(char *s){
	printf( "%s\n", s);
}

int yywrap()
{
	return 1;
}


int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	yyparse();
}

