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
#line 1 "bison.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "func.h"


typedef struct {
    char NomEntite[20];
    char CodeEntite[20];
    char TypeEntite[20];
    char Constant[4];
    char Val[10];
} TypeTS;

void yyerror(const char *s);
char* afficherErreur(int typeErreur, char *idf);
int yylex(void);

extern FILE* yyin;

int nb_lignes = 1;
int nb_colonnes = 1;


char* k;
char idf[11];
char erreur[100];
bool estDansInstructions = false;


double d;
bool booleanExp;
TypeTS ts[100];
int CpTabSym = 0;
TypeTag typeVariable;



#line 112 "bison.tab.c"

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

#include "bison.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ERROR = 3,                      /* ERROR  */
  YYSYMBOL_IDF = 4,                        /* IDF  */
  YYSYMBOL_BEGIN_ = 5,                     /* BEGIN_  */
  YYSYMBOL_END_ = 6,                       /* END_  */
  YYSYMBOL_CONST = 7,                      /* CONST  */
  YYSYMBOL_BOOL = 8,                       /* BOOL  */
  YYSYMBOL_INTEGER = 9,                    /* INTEGER  */
  YYSYMBOL_FLOAT = 10,                     /* FLOAT  */
  YYSYMBOL_IF = 11,                        /* IF  */
  YYSYMBOL_ELIF = 12,                      /* ELIF  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_FOR = 14,                       /* FOR  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_WHILE = 16,                     /* WHILE  */
  YYSYMBOL_AFFECTATION = 17,               /* AFFECTATION  */
  YYSYMBOL_SEPERATOR = 18,                 /* SEPERATOR  */
  YYSYMBOL_LEFT_PARANTHESIS = 19,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 20,         /* RIGHT_PARANTHESIS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 21,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 22,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_END_OP = 23,                    /* END_OP  */
  YYSYMBOL_PLUS = 24,                      /* PLUS  */
  YYSYMBOL_MINUS = 25,                     /* MINUS  */
  YYSYMBOL_MULT = 26,                      /* MULT  */
  YYSYMBOL_DIV = 27,                       /* DIV  */
  YYSYMBOL_UMINUS = 28,                    /* UMINUS  */
  YYSYMBOL_LESS_THAN = 29,                 /* LESS_THAN  */
  YYSYMBOL_LESS_OR_EQUAL = 30,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_THAN = 31,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_OR_EQUAL = 32,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_DIFFERENT = 33,                 /* DIFFERENT  */
  YYSYMBOL_EQUAL = 34,                     /* EQUAL  */
  YYSYMBOL_AND = 35,                       /* AND  */
  YYSYMBOL_OR = 36,                        /* OR  */
  YYSYMBOL_NOT = 37,                       /* NOT  */
  YYSYMBOL_BOOL_TRUE = 38,                 /* BOOL_TRUE  */
  YYSYMBOL_BOOL_FALSE = 39,                /* BOOL_FALSE  */
  YYSYMBOL_NBR_INT = 40,                   /* NBR_INT  */
  YYSYMBOL_NBR_REEL = 41,                  /* NBR_REEL  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_program = 43,                   /* program  */
  YYSYMBOL_44_1 = 44,                      /* $@1  */
  YYSYMBOL_45_2 = 45,                      /* $@2  */
  YYSYMBOL_declarations = 46,              /* declarations  */
  YYSYMBOL_47_3 = 47,                      /* $@3  */
  YYSYMBOL_type = 48,                      /* type  */
  YYSYMBOL_boolean = 49,                   /* boolean  */
  YYSYMBOL_var = 50,                       /* var  */
  YYSYMBOL_51_4 = 51,                      /* $@4  */
  YYSYMBOL_instructions = 52,              /* instructions  */
  YYSYMBOL_assign = 53,                    /* assign  */
  YYSYMBOL_expression = 54,                /* expression  */
  YYSYMBOL_int_expr = 55,                  /* int_expr  */
  YYSYMBOL_int_term = 56,                  /* int_term  */
  YYSYMBOL_int_factor = 57,                /* int_factor  */
  YYSYMBOL_bool_expr = 58,                 /* bool_expr  */
  YYSYMBOL_bool_term = 59,                 /* bool_term  */
  YYSYMBOL_bool_factor = 60,               /* bool_factor  */
  YYSYMBOL_loop = 61,                      /* loop  */
  YYSYMBOL_init = 62,                      /* init  */
  YYSYMBOL_counter = 63,                   /* counter  */
  YYSYMBOL_check = 64,                     /* check  */
  YYSYMBOL_another = 65,                   /* another  */
  YYSYMBOL_inc = 66,                       /* inc  */
  YYSYMBOL_dec = 67                        /* dec  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  160

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   296


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
      35,    36,    37,    38,    39,    40,    41
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    79,    79,    79,    79,    80,    81,    84,    84,    85,
      86,    87,    88,    89,    92,    93,    94,    97,    98,   101,
     101,   102,   105,   106,   107,   108,   111,   138,   139,   142,
     143,   144,   147,   148,   154,   157,   158,   159,   160,   169,
     170,   173,   174,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   194,   200,   201,   202,   205,   209,   210,
     211,   215,   223,   224,   225,   228,   231
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
  "\"end of file\"", "error", "\"invalid token\"", "ERROR", "IDF",
  "BEGIN_", "END_", "CONST", "BOOL", "INTEGER", "FLOAT", "IF", "ELIF",
  "ELSE", "FOR", "DO", "WHILE", "AFFECTATION", "SEPERATOR",
  "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "END_OP", "PLUS", "MINUS", "MULT", "DIV",
  "UMINUS", "LESS_THAN", "LESS_OR_EQUAL", "GREATER_THAN",
  "GREATER_OR_EQUAL", "DIFFERENT", "EQUAL", "AND", "OR", "NOT",
  "BOOL_TRUE", "BOOL_FALSE", "NBR_INT", "NBR_REEL", "$accept", "program",
  "$@1", "$@2", "declarations", "$@3", "type", "boolean", "var", "$@4",
  "instructions", "assign", "expression", "int_expr", "int_term",
  "int_factor", "bool_expr", "bool_term", "bool_factor", "loop", "init",
  "counter", "check", "another", "inc", "dec", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-97)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-53)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     119,   -97,    11,    53,   -97,   -97,   -97,    24,   -97,   -97,
     -97,    32,    70,    74,   -97,    23,    76,    22,    28,    73,
     -97,     3,    93,   -25,    48,    56,    71,   -97,   -97,   -97,
     -97,   -97,    84,   100,   102,    82,   113,   114,   115,   116,
     128,    71,    71,    71,    76,    93,    93,    93,    33,    33,
     133,    71,    33,   -97,   -97,   -97,   -97,   -97,   -97,   -97,
     -97,    41,    33,     4,    33,   -97,   -97,   -97,   117,    87,
      79,   -97,   103,   106,   -97,    87,    -9,   121,   124,   122,
      -5,    35,    -1,   -97,     4,   -97,   -97,   -97,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,    33,    33,
     125,    33,    33,   127,   126,   -97,   -97,    69,    79,    79,
      85,    85,    85,    85,    85,    85,   -97,   -97,   106,   -97,
      71,   -97,    -6,   129,    71,   123,   145,    33,   130,   101,
      67,   131,   -97,   -97,     2,   -97,   134,   135,   -97,    33,
     136,   132,   137,   -97,    33,    71,   -97,   -97,   -97,    71,
       5,   139,   140,   138,   -97,   -97,    71,   141,   101,   -97
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    12,     0,     0,    16,    14,    15,     0,     2,     7,
       5,     0,     0,     0,     1,     0,     0,     0,     0,     0,
       3,     0,    13,     0,     0,     0,    25,    19,    21,     8,
      17,    18,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    25,    25,     0,    13,    13,    13,     0,     0,
       0,    25,     0,     4,    22,    23,    24,    20,    11,     9,
      10,    38,     0,     0,     0,    43,    44,    35,     0,    27,
      31,    34,    28,    40,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    37,    53,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    45,     0,    29,    30,
      48,    49,    50,    51,    47,    46,    32,    33,    39,    41,
      25,    57,     0,     0,    25,     0,     0,     0,     0,    64,
       0,     0,    59,    60,     0,    55,     0,     0,    61,     0,
       0,     0,     0,    56,     0,    25,    58,    65,    66,    25,
       0,     0,     0,     0,    63,    54,    25,     0,    64,    62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -97,   -97,   -97,   -97,   -13,   -97,   -97,   -97,   110,   -97,
     -41,   -97,   -96,   -44,    42,   -43,   -46,    52,   -57,   -97,
     -97,   -97,   -97,    -3,   -97,   -97
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,    15,    26,     8,    16,     9,    32,    22,    44,
      40,    41,    68,    75,    70,    71,    72,    73,    74,    42,
      78,   131,    43,   138,   132,   133
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      54,    55,    56,    76,    69,   121,    80,    86,    83,    29,
      79,   100,   126,    30,    31,   104,    82,    10,    81,   106,
      85,    27,   143,    84,    14,   153,    28,    98,    20,    63,
      98,    98,    58,    59,    60,    98,    17,    61,    98,    23,
     107,    98,   119,   146,    67,    24,   110,   111,   112,   113,
     114,   115,    62,   116,   117,   105,   122,    69,    63,    88,
      89,    11,    12,    13,    90,    91,    92,    93,    94,    95,
      64,    65,    66,    67,    18,    35,   -52,   -52,    19,   125,
      21,   134,    36,   128,   139,    37,    38,    39,    33,   105,
      25,   140,   141,    88,    89,    69,     1,    34,   150,    48,
       3,     4,     5,     6,   151,    96,    97,    45,   152,    88,
      89,    88,    89,   136,   137,   157,    90,    91,    92,    93,
      94,    95,     1,    46,     2,    47,     3,     4,     5,     6,
     108,   109,    49,    50,    53,    52,    51,    77,   101,    98,
      87,    99,   102,   123,   103,   129,   120,   124,   127,   130,
     118,   142,   135,   144,    57,   159,   145,   148,   149,   156,
     147,   154,   155,   158
};

static const yytype_uint8 yycheck[] =
{
      41,    42,    43,    49,    48,   101,    52,    64,     4,    22,
      51,    20,    18,    38,    39,    20,    62,     6,    62,    20,
      63,    18,    20,    19,     0,    20,    23,    36,     5,    25,
      36,    36,    45,    46,    47,    36,     4,     4,    36,    17,
      84,    36,    99,   139,    40,    17,    90,    91,    92,    93,
      94,    95,    19,    96,    97,    20,   102,   101,    25,    24,
      25,     8,     9,    10,    29,    30,    31,    32,    33,    34,
      37,    38,    39,    40,     4,     4,    35,    36,     4,   120,
       4,   127,    11,   124,    17,    14,    15,    16,    40,    20,
      17,    24,    25,    24,    25,   139,     3,    41,   144,    17,
       7,     8,     9,    10,   145,    26,    27,    23,   149,    24,
      25,    24,    25,    12,    13,   156,    29,    30,    31,    32,
      33,    34,     3,    23,     5,    23,     7,     8,     9,    10,
      88,    89,    19,    19,     6,    19,    21,     4,    17,    36,
      23,    35,    18,    16,    22,    22,    21,    21,    19,     4,
      98,    20,    22,    19,    44,   158,    21,    25,    21,    21,
      24,    22,    22,    22
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     7,     8,     9,    10,    43,    46,    48,
       6,     8,     9,    10,     0,    44,    47,     4,     4,     4,
       5,     4,    50,    17,    17,    17,    45,    18,    23,    46,
      38,    39,    49,    40,    41,     4,    11,    14,    15,    16,
      52,    53,    61,    64,    51,    23,    23,    23,    17,    19,
      19,    21,    19,     6,    52,    52,    52,    50,    46,    46,
      46,     4,    19,    25,    37,    38,    39,    40,    54,    55,
      56,    57,    58,    59,    60,    55,    58,     4,    62,    52,
      58,    55,    58,     4,    19,    57,    60,    23,    24,    25,
      29,    30,    31,    32,    33,    34,    26,    27,    36,    35,
      20,    17,    18,    22,    20,    20,    20,    55,    56,    56,
      55,    55,    55,    55,    55,    55,    57,    57,    59,    60,
      21,    54,    58,    16,    21,    52,    18,    19,    52,    22,
       4,    63,    66,    67,    58,    22,    12,    13,    65,    17,
      24,    25,    20,    20,    19,    21,    54,    24,    25,    21,
      58,    52,    52,    20,    22,    22,    21,    52,    22,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    44,    45,    43,    43,    43,    47,    46,    46,
      46,    46,    46,    46,    48,    48,    48,    49,    49,    51,
      50,    50,    52,    52,    52,    52,    53,    54,    54,    55,
      55,    55,    56,    56,    56,    57,    57,    57,    57,    58,
      58,    59,    59,    60,    60,    60,    60,    60,    60,    60,
      60,    60,    60,    60,    61,    61,    61,    62,    63,    63,
      63,    64,    65,    65,    65,    66,    67
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     0,     6,     2,     0,     0,     4,     7,
       7,     7,     1,     0,     1,     1,     1,     1,     1,     0,
       4,     2,     2,     2,     2,     0,     4,     1,     1,     3,
       3,     1,     3,     3,     1,     1,     3,     2,     1,     3,
       1,     3,     1,     1,     1,     3,     3,     3,     3,     3,
       3,     3,     1,     2,    11,     7,     8,     3,     3,     1,
       1,     8,     8,     4,     0,     3,     3
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
  case 2: /* $@1: %empty  */
#line 79 "bison.y"
                      {estDansInstructions = false;}
#line 1265 "bison.tab.c"
    break;

  case 3: /* $@2: %empty  */
#line 79 "bison.y"
                                                            {estDansInstructions = true;}
#line 1271 "bison.tab.c"
    break;

  case 4: /* program: declarations $@1 BEGIN_ $@2 instructions END_  */
#line 79 "bison.y"
                                                                                                             { printf("noice program\n");  YYACCEPT; }
#line 1277 "bison.tab.c"
    break;

  case 5: /* program: BEGIN_ END_  */
#line 80 "bison.y"
                     {yyerror(afficherErreur(24, ""));}
#line 1283 "bison.tab.c"
    break;

  case 6: /* program: %empty  */
#line 81 "bison.y"
          {yyerror(afficherErreur(24, ""));}
#line 1289 "bison.tab.c"
    break;

  case 7: /* $@3: %empty  */
#line 84 "bison.y"
                   {k = (yyvsp[0].valeur).string;}
#line 1295 "bison.tab.c"
    break;

  case 8: /* declarations: type $@3 var declarations  */
#line 84 "bison.y"
                                                      { printf("noice declaration\n"); }
#line 1301 "bison.tab.c"
    break;

  case 9: /* declarations: CONST INTEGER IDF AFFECTATION NBR_INT END_OP declarations  */
#line 85 "bison.y"
                                                                         {setType((yyvsp[-4].valeur).string, (yyvsp[-5].valeur).string);setConstant((yyvsp[-4].valeur).string, "oui");setVal((yyvsp[-4].valeur).string,(yyvsp[-2].valeur), INT_TYPE);}
#line 1307 "bison.tab.c"
    break;

  case 10: /* declarations: CONST FLOAT IDF AFFECTATION NBR_REEL END_OP declarations  */
#line 86 "bison.y"
                                                                       {setType((yyvsp[-4].valeur).string, (yyvsp[-5].valeur).string);setConstant((yyvsp[-4].valeur).string, "oui");setVal((yyvsp[-4].valeur).string,(yyvsp[-2].valeur), FLOAT_TYPE);}
#line 1313 "bison.tab.c"
    break;

  case 11: /* declarations: CONST BOOL IDF AFFECTATION boolean END_OP declarations  */
#line 87 "bison.y"
                                                                      {setType((yyvsp[-4].valeur).string, (yyvsp[-5].valeur).string);setConstant((yyvsp[-4].valeur).string, "oui");setVal((yyvsp[-4].valeur).string,(yyvsp[-2].valeur), BOOL_TYPE);}
#line 1319 "bison.tab.c"
    break;

  case 12: /* declarations: ERROR  */
#line 88 "bison.y"
                    { fprintf(stderr, "Syntax error: Unexpected token\n"); }
#line 1325 "bison.tab.c"
    break;

  case 19: /* $@4: %empty  */
#line 101 "bison.y"
                   {setType((yyvsp[-1].valeur).string, k);}
#line 1331 "bison.tab.c"
    break;

  case 21: /* var: IDF END_OP  */
#line 102 "bison.y"
                {setType((yyvsp[-1].valeur).string, k);}
#line 1337 "bison.tab.c"
    break;

  case 26: /* assign: IDF AFFECTATION expression END_OP  */
#line 111 "bison.y"
                                          {

    if(isConstant((yyvsp[-3].valeur).string)==1) { 
        fprintf(stderr, "Erreur: %s est une constante.\n",(yyvsp[-3].valeur).string);
        }                                           
    if(strcmp(getType((yyvsp[-3].valeur).string),"+")==0) { 
        fprintf(stderr, "Erreur : %s n'a pas été déclaré.\n",(yyvsp[-3].valeur).string);
        }
    if(strcmp(deEnumAString(typeVariable), getType((yyvsp[-3].valeur).string)) == 0 ) {
        switch (typeVariable) {
        case BOOL_TYPE :
            setVal((yyvsp[-3].valeur).string,(yyvsp[-1].valeur), BOOL_TYPE);printf("noice assign\n"); 
        break;
        case INT_TYPE : 
            setVal((yyvsp[-3].valeur).string,(yyvsp[-1].valeur), INT_TYPE);printf("noice assign\n"); 
        break;
        case FLOAT_TYPE : 
            setVal((yyvsp[-3].valeur).string,(yyvsp[-1].valeur), FLOAT_TYPE);printf("noice assign\n"); 
        break;
        }
    } else {
        printf("ERROR : INCOMPATIBILITE\n");
    }
    
    }
#line 1367 "bison.tab.c"
    break;

  case 27: /* expression: int_expr  */
#line 138 "bison.y"
                     { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1373 "bison.tab.c"
    break;

  case 28: /* expression: bool_expr  */
#line 139 "bison.y"
                      { (yyval.valeur).boolean = (yyvsp[0].valeur).boolean; typeVariable = BOOL_TYPE;  }
#line 1379 "bison.tab.c"
    break;

  case 29: /* int_expr: int_expr PLUS int_term  */
#line 142 "bison.y"
                                 { (yyval.valeur).entier = (yyvsp[-2].valeur).entier + (yyvsp[0].valeur).entier; }
#line 1385 "bison.tab.c"
    break;

  case 30: /* int_expr: int_expr MINUS int_term  */
#line 143 "bison.y"
                                  { (yyval.valeur).entier = (yyvsp[-2].valeur).entier - (yyvsp[0].valeur).entier; }
#line 1391 "bison.tab.c"
    break;

  case 31: /* int_expr: int_term  */
#line 144 "bison.y"
                   { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1397 "bison.tab.c"
    break;

  case 32: /* int_term: int_term MULT int_factor  */
#line 147 "bison.y"
                                   { (yyval.valeur).entier = (yyvsp[-2].valeur).entier * (yyvsp[0].valeur).entier; }
#line 1403 "bison.tab.c"
    break;

  case 33: /* int_term: int_term DIV int_factor  */
#line 148 "bison.y"
                                  { 
                if ((yyvsp[0].valeur).entier == 0) { 
                    yyerror(afficherErreur(34, ""));     
                } else 
                    (yyval.valeur).entier = (yyvsp[-2].valeur).entier / (yyvsp[0].valeur).entier; 
                }
#line 1414 "bison.tab.c"
    break;

  case 34: /* int_term: int_factor  */
#line 154 "bison.y"
                     { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1420 "bison.tab.c"
    break;

  case 35: /* int_factor: NBR_INT  */
#line 157 "bison.y"
                    { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1426 "bison.tab.c"
    break;

  case 36: /* int_factor: LEFT_PARANTHESIS int_expr RIGHT_PARANTHESIS  */
#line 158 "bison.y"
                                                        { (yyval.valeur).entier = (yyvsp[-1].valeur).entier; }
#line 1432 "bison.tab.c"
    break;

  case 37: /* int_factor: MINUS int_factor  */
#line 159 "bison.y"
                                          { (yyval.valeur).entier = -(yyvsp[0].valeur).entier; }
#line 1438 "bison.tab.c"
    break;

  case 38: /* int_factor: IDF  */
#line 160 "bison.y"
                { 

                if(isDefined((yyvsp[0].valeur).string) != -1) {
                    (yyval.valeur).entier = getVal((yyvsp[0].valeur).string);
                } else {
                    yyerror(afficherErreur(31, (yyvsp[0].valeur).string));
                }
            }
#line 1451 "bison.tab.c"
    break;

  case 39: /* bool_expr: bool_expr OR bool_term  */
#line 169 "bison.y"
                                  { (yyval.valeur).boolean = (yyvsp[-2].valeur).boolean || (yyvsp[0].valeur).boolean; }
#line 1457 "bison.tab.c"
    break;

  case 40: /* bool_expr: bool_term  */
#line 170 "bison.y"
                     { (yyval.valeur).boolean = (yyvsp[0].valeur).boolean; }
#line 1463 "bison.tab.c"
    break;

  case 41: /* bool_term: bool_term AND bool_factor  */
#line 173 "bison.y"
                                     { (yyval.valeur).boolean = (yyvsp[-2].valeur).boolean && (yyvsp[0].valeur).boolean; }
#line 1469 "bison.tab.c"
    break;

  case 42: /* bool_term: bool_factor  */
#line 174 "bison.y"
                       { (yyval.valeur).boolean = (yyvsp[0].valeur).boolean; }
#line 1475 "bison.tab.c"
    break;

  case 43: /* bool_factor: BOOL_TRUE  */
#line 177 "bison.y"
                       { (yyval.valeur).boolean = true; }
#line 1481 "bison.tab.c"
    break;

  case 44: /* bool_factor: BOOL_FALSE  */
#line 178 "bison.y"
                        { (yyval.valeur).boolean = false; }
#line 1487 "bison.tab.c"
    break;

  case 45: /* bool_factor: LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS  */
#line 179 "bison.y"
                                                          { (yyval.valeur).boolean = (yyvsp[-1].valeur).boolean; }
#line 1493 "bison.tab.c"
    break;

  case 46: /* bool_factor: int_expr EQUAL int_expr  */
#line 180 "bison.y"
                                     { (yyval.valeur).boolean = (yyvsp[-2].valeur).entier == (yyvsp[0].valeur).entier; }
#line 1499 "bison.tab.c"
    break;

  case 47: /* bool_factor: int_expr DIFFERENT int_expr  */
#line 181 "bison.y"
                                         { (yyval.valeur).boolean = (yyvsp[-2].valeur).entier != (yyvsp[0].valeur).entier; }
#line 1505 "bison.tab.c"
    break;

  case 48: /* bool_factor: int_expr LESS_THAN int_expr  */
#line 182 "bison.y"
                                         { (yyval.valeur).boolean =  (yyvsp[-2].valeur).entier < (yyvsp[0].valeur).entier; }
#line 1511 "bison.tab.c"
    break;

  case 49: /* bool_factor: int_expr LESS_OR_EQUAL int_expr  */
#line 183 "bison.y"
                                             {(yyval.valeur).boolean = (yyvsp[-2].valeur).entier <= (yyvsp[0].valeur).entier; }
#line 1517 "bison.tab.c"
    break;

  case 50: /* bool_factor: int_expr GREATER_THAN int_expr  */
#line 184 "bison.y"
                                            { (yyval.valeur).boolean =  (yyvsp[-2].valeur).entier > (yyvsp[0].valeur).entier; }
#line 1523 "bison.tab.c"
    break;

  case 51: /* bool_factor: int_expr GREATER_OR_EQUAL int_expr  */
#line 185 "bison.y"
                                                { (yyval.valeur).boolean = (yyvsp[-2].valeur).entier >= (yyvsp[0].valeur).entier;}
#line 1529 "bison.tab.c"
    break;

  case 52: /* bool_factor: IDF  */
#line 186 "bison.y"
                 { 
                if(isDefined((yyvsp[0].valeur).string) != -1) {
                    (yyval.valeur).boolean = getVal((yyvsp[0].valeur).string);
                    typeVariable = BOOL_TYPE;
                } else {
                    yyerror(afficherErreur(31,(yyvsp[0].valeur).string));
                }
           }
#line 1542 "bison.tab.c"
    break;

  case 53: /* bool_factor: NOT bool_factor  */
#line 194 "bison.y"
                             {
                                (yyval.valeur).boolean = !(yyvsp[0].valeur).boolean;
                                }
#line 1550 "bison.tab.c"
    break;

  case 61: /* check: IF LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS LEFT_CURLY_BRACKET instructions RIGHT_CURLY_BRACKET another  */
#line 215 "bison.y"
                                                                                                                   {/*if ($3.boolean) {
    $$ = $6;
} else {

    $$ = $
}              */}
#line 1561 "bison.tab.c"
    break;


#line 1565 "bison.tab.c"

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

#line 234 "bison.y"



int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    FILE *input_file = fopen(argv[1], "r");
    if (!input_file) {
        perror("Unable to open input file");
        return 1;
    }

    yyin = input_file;
    yyparse();
    afficher();
    fclose(input_file);

    return 0;
}

void yyerror(const char *s) {
    fprintf(stderr, "%s\n", s);
}

char* deEnumAString(TypeTag type) {
    switch (type) {
        case INT_TYPE: return "INT";
        break;
        case FLOAT_TYPE: return "FLOAT";
        break;
        case BOOL_TYPE: return "BOOL";
        break;
        default: return "ERREUR";
    }
}


char* afficherErreur(int typeErreur, char *idf) {
    switch (typeErreur) {
        case 34 : 
            snprintf(erreur, sizeof(erreur), "Error : Division par zero à la ligne %d colonne %d\n", nb_lignes, nb_colonnes);
            return erreur;
        break;
        case 31 : 
            snprintf(erreur, sizeof(erreur), "Error: Variable %s non déclarée à la ligne %d colonne %d\n", idf, nb_lignes, nb_colonnes);
            return erreur;
        break;
        
        case 35 : 
            snprintf(erreur, sizeof(erreur), "Error: Variable %s déjà déclarée de type %s à la ligne %d colonne %d\n", idf, getType(idf), nb_lignes, nb_colonnes);
            return erreur;
        break;
        
        case 24 : 
            strcpy(erreur, "Erreur : Le programme est vide");
            return erreur;
        break;
        default:
            snprintf(erreur, sizeof(erreur), "Error : Erreur inconnue.");
        break;
    }
}

int recherche(char entite[]) {
    int i = 0;
    while (i < CpTabSym) {
        if (strcmp(entite, ts[i].NomEntite) == 0) {
           // printf("found l entite dans table des symboles\n");
            return i;
        }
        i++;
    }
    //printf("DID NOTfound l entite dans table des symboles\n");
    return -1;
}

int isDefined(char entite[]) {
    int index = recherche(entite);
    if (index != -1) {
        return index; 
    } else {
        return -1;
    }
}

void inserer(char entite[], char code[], char type[], char constant[],char Val[]) {
    int index = recherche(entite);
    if ((index == -1)&&(estDansInstructions==false)) {
        strcpy(ts[CpTabSym].NomEntite, entite);
        strcpy(ts[CpTabSym].CodeEntite, code);
        strcpy(ts[CpTabSym].TypeEntite, type);
        strcpy(ts[CpTabSym].Constant, constant);
        strcpy(ts[CpTabSym].Val, Val);
        CpTabSym++;
    }
    else if ((index != -1)&&(estDansInstructions==false)) {
        printf("ERREUR if 2 : DOUBLE DECLARATION de %s\n", entite); 
    }
    else if ((index != -1)&&(estDansInstructions==true)) {
        printf("IF 3 INSERER\n");
    }
}

void setType(char entite[], char newType[]) {
    int index = recherche(entite);
    if (index != -1) {
        if(strcmp(ts[index].TypeEntite, "+") == 0) {
            strcpy(ts[index].TypeEntite, newType);

        } else {
            printf("ERROR : INCOpatibilite\n");
        }
    } else {
        
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setConstant(char entite[], char newConstant[]) {
    int index = recherche(entite);
    if (index != -1) {
        
        strcpy(ts[index].Constant, newConstant);
    } else {
        
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setVal(char entite[], Valeur newVal, TypeTag type) {
    int index = recherche(entite);
    if (index != -1) {
        
        char newValString[10];  
        if(type == BOOL_TYPE) {
            if(newVal.boolean == true) strcpy(ts[index].Val, "TRUE");
            if(newVal.boolean == false) strcpy(ts[index].Val, "FALSE");
            //printf("Value of %s has been updated to %s.\n", entite, newValString);

        } else {
            snprintf(newValString, sizeof(newValString), "%lf", newVal.entier);
            strcpy(ts[index].Val, newValString);
            //printf("Value of %s has been updated to %s.\n", entite, newValString);
        }
    } else {
        printf("Error: %s not found in the symbol table.\n", entite);
    }
}

double getVal(char entite[]) {

    int index = recherche(entite);

    if (index != -1) {
        return atof(ts[index].Val);

       } else {
        printf("Error: %s not found in the symbol table.\n", entite);
        return 0;
    }

}


char* getType(char entite[]) {
    int index = recherche(entite);
    if (index != -1) {
        return ts[index].TypeEntite;
    } else {
        fprintf(stderr, "Error: Identifier '%s' not found in the symbol table.\n", entite);
        return NULL;
    }
}


int typeCompatible(char type1[], char type2[]) {


    if (strcmp(type1, type2) == 0) {
        return 1;  
    } else {
        return 0;  
    }
}


int isConstant(char entite[]) {
    int index = recherche(entite);
    
   
    if (index != -1) {
        
        if (strcmp(ts[index].Constant, "oui") == 0) {
            return 1;  
        } else {
            return 0;  
        }
    } else {
        return -1;  
    }
}

void afficher() {
    printf("\n/***************Table des symboles ******************/\n");
    printf("_________________________________________________________________\n");
    printf("| NomEntite | CodeEntite | TypeEntite | Constant | Val |\n");
    printf("_________________________________________________________________\n");
    int i = 0;
    while (i < CpTabSym) {
        printf("| %10s | %11s | %10s | %8s | %10s|\n",
               ts[i].NomEntite, ts[i].CodeEntite, ts[i].TypeEntite, ts[i].Constant, ts[i].Val);
        i++;
    }
}
