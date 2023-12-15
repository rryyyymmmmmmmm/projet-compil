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
#line 1 "bisonamir.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "func.h"
#include "quad.h"
//#include "val.h"

void yyerror(char *s);
int yylex(void);

extern FILE* yyin;

int nb_ligne = 1;
int nb_colonnes = 1;

typedef struct {
    char NomEntite[20];
    char CodeEntite[20];
    char TypeEntite[20];
    char Constant[4];
    char Val[10];
} TypeTS;

char* k;

double d;
TypeTS ts[100];
int CpTabSym = 0;


#line 103 "bisonamir.tab.c"

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

#include "bisonamir.tab.h"
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
  YYSYMBOL_RETURN_ = 7,                    /* RETURN_  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_BOOL = 9,                       /* BOOL  */
  YYSYMBOL_INTEGER = 10,                   /* INTEGER  */
  YYSYMBOL_FLOAT = 11,                     /* FLOAT  */
  YYSYMBOL_IF = 12,                        /* IF  */
  YYSYMBOL_ELIF = 13,                      /* ELIF  */
  YYSYMBOL_ELSE = 14,                      /* ELSE  */
  YYSYMBOL_FOR = 15,                       /* FOR  */
  YYSYMBOL_DO = 16,                        /* DO  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_AFFECTATION = 18,               /* AFFECTATION  */
  YYSYMBOL_SEPERATOR = 19,                 /* SEPERATOR  */
  YYSYMBOL_LEFT_PARANTHESIS = 20,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 21,         /* RIGHT_PARANTHESIS  */
  YYSYMBOL_LEFT_CURLY_BRACKET = 22,        /* LEFT_CURLY_BRACKET  */
  YYSYMBOL_RIGHT_CURLY_BRACKET = 23,       /* RIGHT_CURLY_BRACKET  */
  YYSYMBOL_END_OP = 24,                    /* END_OP  */
  YYSYMBOL_PLUS = 25,                      /* PLUS  */
  YYSYMBOL_MINUS = 26,                     /* MINUS  */
  YYSYMBOL_MULT = 27,                      /* MULT  */
  YYSYMBOL_DIV = 28,                       /* DIV  */
  YYSYMBOL_UMINUS = 29,                    /* UMINUS  */
  YYSYMBOL_LESS_THAN = 30,                 /* LESS_THAN  */
  YYSYMBOL_LESS_OR_EQUAL = 31,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_THAN = 32,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_OR_EQUAL = 33,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_DIFFERENT = 34,                 /* DIFFERENT  */
  YYSYMBOL_EQUAL = 35,                     /* EQUAL  */
  YYSYMBOL_AND = 36,                       /* AND  */
  YYSYMBOL_OR = 37,                        /* OR  */
  YYSYMBOL_BOOL_TRUE = 38,                 /* BOOL_TRUE  */
  YYSYMBOL_BOOL_FALSE = 39,                /* BOOL_FALSE  */
  YYSYMBOL_NBR_INT = 40,                   /* NBR_INT  */
  YYSYMBOL_NBR_REEL = 41,                  /* NBR_REEL  */
  YYSYMBOL_YYACCEPT = 42,                  /* $accept  */
  YYSYMBOL_Code = 43,                      /* Code  */
  YYSYMBOL_function = 44,                  /* function  */
  YYSYMBOL_function_declaration = 45,      /* function_declaration  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_declarations = 47,              /* declarations  */
  YYSYMBOL_48_1 = 48,                      /* $@1  */
  YYSYMBOL_type = 49,                      /* type  */
  YYSYMBOL_boolean = 50,                   /* boolean  */
  YYSYMBOL_var = 51,                       /* var  */
  YYSYMBOL_52_2 = 52,                      /* $@2  */
  YYSYMBOL_instructions = 53,              /* instructions  */
  YYSYMBOL_assign = 54,                    /* assign  */
  YYSYMBOL_expression = 55,                /* expression  */
  YYSYMBOL_int_expr = 56,                  /* int_expr  */
  YYSYMBOL_int_term = 57,                  /* int_term  */
  YYSYMBOL_int_factor = 58,                /* int_factor  */
  YYSYMBOL_bool_expr = 59,                 /* bool_expr  */
  YYSYMBOL_bool_term = 60,                 /* bool_term  */
  YYSYMBOL_bool_factor = 61,               /* bool_factor  */
  YYSYMBOL_loop = 62,                      /* loop  */
  YYSYMBOL_init = 63,                      /* init  */
  YYSYMBOL_counter = 64,                   /* counter  */
  YYSYMBOL_check = 65,                     /* check  */
  YYSYMBOL_another = 66,                   /* another  */
  YYSYMBOL_inc = 67,                       /* inc  */
  YYSYMBOL_dec = 68                        /* dec  */
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
#define YYLAST   166

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  42
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  67
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  171

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
       0,    85,    85,    86,    89,    90,    93,    94,   103,   106,
     106,   107,   108,   109,   110,   111,   114,   115,   116,   119,
     120,   122,   122,   123,   126,   127,   128,   129,   132,   137,
     138,   141,   142,   143,   146,   147,   148,   151,   152,   153,
     154,   157,   158,   161,   162,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   178,   179,   180,   183,   187,
     188,   189,   193,   196,   197,   198,   201,   204
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
  "BEGIN_", "END_", "RETURN_", "CONST", "BOOL", "INTEGER", "FLOAT", "IF",
  "ELIF", "ELSE", "FOR", "DO", "WHILE", "AFFECTATION", "SEPERATOR",
  "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS", "LEFT_CURLY_BRACKET",
  "RIGHT_CURLY_BRACKET", "END_OP", "PLUS", "MINUS", "MULT", "DIV",
  "UMINUS", "LESS_THAN", "LESS_OR_EQUAL", "GREATER_THAN",
  "GREATER_OR_EQUAL", "DIFFERENT", "EQUAL", "AND", "OR", "BOOL_TRUE",
  "BOOL_FALSE", "NBR_INT", "NBR_REEL", "$accept", "Code", "function",
  "function_declaration", "program", "declarations", "$@1", "type",
  "boolean", "var", "$@2", "instructions", "assign", "expression",
  "int_expr", "int_term", "int_factor", "bool_expr", "bool_term",
  "bool_factor", "loop", "init", "counter", "check", "another", "inc",
  "dec", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-55)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      53,   -51,    18,   -51,   -51,   -51,    30,    53,   -51,    13,
      12,    34,    42,    56,   -51,   -51,   -51,     7,    69,    92,
      87,    88,    89,    91,    90,    93,    94,    97,   105,     7,
       7,     7,    48,    52,    53,   -24,    72,    73,    29,    29,
     114,     7,    29,   -51,   -51,   -51,   -51,    98,   117,   -51,
     -51,   -51,   -51,   -51,    99,   100,   101,    36,    29,     5,
     -51,   -51,   -51,   102,    60,    50,   -51,    95,    86,   -51,
     107,   111,   115,   110,   109,   113,   118,    92,    53,    53,
      53,    49,   -11,   -51,     5,   -51,   -51,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,    29,    29,   119,
      29,    29,   122,   120,    53,    48,   -51,   -51,   -51,   -51,
     -51,   -51,    11,    50,    50,    62,    62,    62,    62,    62,
      62,   -51,   -51,    60,    86,   -51,     7,   -51,   124,   116,
       7,   121,   -51,   123,   141,    29,   125,    48,    85,    -5,
     126,   -51,   -51,   128,   -51,   -51,    12,   130,   129,   -51,
      29,   127,   131,   132,   -51,    29,     7,   -51,   -51,   -51,
       7,   134,   133,   135,   137,   -51,   -51,     7,   138,    85,
     -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,    14,     0,    18,    16,    17,     0,    15,     3,     0,
       0,     0,     0,     0,     1,     2,     9,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    27,
      27,    27,     7,     0,    15,     0,     0,     0,     0,     0,
       0,    27,     0,     8,    24,    25,    26,     0,     0,    21,
      23,    10,    19,    20,     0,     0,     0,    40,     0,     0,
      45,    46,    37,     0,    29,    33,    36,    30,    42,    44,
       0,     0,     0,     0,     0,     0,     0,     0,    15,    15,
      15,     0,     0,    40,     0,    39,    28,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    15,     7,    22,    13,    11,    12,
      38,    47,     0,    31,    32,    50,    51,    52,    53,    49,
      48,    34,    35,     0,    41,    43,    27,    58,     0,     0,
      27,     0,     6,     0,     0,     0,     0,     5,    65,     0,
       0,    60,    61,     0,    56,     4,     0,     0,     0,    62,
       0,     0,     0,     0,    57,     0,    27,    59,    66,    67,
      27,     0,     0,     0,     0,    64,    55,    27,     0,    65,
      63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -51,   -51,    23,    57,    -2,   -28,   -51,     3,   -51,    76,
     -51,   -29,   -51,   -35,   -50,    16,   -42,   106,    66,    67,
     -51,   -51,   -51,   -51,    -3,   -51,   -51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    47,     8,     9,    19,    16,    54,    34,
      77,    28,    29,    63,    64,    65,    66,    67,    68,    69,
      30,    72,   140,    31,   149,   141,   142
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    45,    46,    10,    70,    15,    51,    74,    81,    83,
     111,    23,    73,   150,    52,    53,    18,    85,    17,    24,
     151,   152,    25,    26,    27,    84,    97,    11,    12,    13,
      14,    59,   110,    57,   112,    48,    87,    88,    20,   115,
     116,   117,   118,   119,   120,    62,    21,   123,   123,    58,
     107,   108,   109,   121,   122,    59,     1,     3,     4,     5,
      22,     2,     3,     4,     5,   127,   128,    60,    61,    62,
     110,    49,   -54,   -54,    87,    88,    50,    95,    96,    89,
      90,    91,    92,    93,    94,    87,    88,    87,    88,    32,
      89,    90,    91,    92,    93,    94,    33,   133,   147,   148,
     143,   136,   131,   113,   114,    35,    36,    37,    48,    38,
      39,    43,    55,    40,    56,   157,    41,    42,    71,    75,
     161,    76,    98,    78,    79,    80,    86,   162,    99,   100,
     103,   163,    97,   102,   101,   104,   135,   105,   168,   129,
     146,   126,   130,   134,   137,   139,   138,   153,   144,   154,
     155,   156,   158,   106,   160,   164,   165,   159,   166,   167,
     145,   169,   132,   124,    82,   125,   170
};

static const yytype_uint8 yycheck[] =
{
      29,    30,    31,     0,    39,     7,    34,    42,    58,     4,
      21,     4,    41,    18,    38,    39,     4,    59,     5,    12,
      25,    26,    15,    16,    17,    20,    37,     9,    10,    11,
       0,    26,    21,     4,    84,    32,    25,    26,     4,    89,
      90,    91,    92,    93,    94,    40,     4,    97,    98,    20,
      78,    79,    80,    95,    96,    26,     3,     9,    10,    11,
       4,     8,     9,    10,    11,   100,   101,    38,    39,    40,
      21,    19,    36,    37,    25,    26,    24,    27,    28,    30,
      31,    32,    33,    34,    35,    25,    26,    25,    26,    20,
      30,    31,    32,    33,    34,    35,     4,   126,    13,    14,
     135,   130,   104,    87,    88,    18,    18,    18,   105,    18,
      20,     6,    40,    20,    41,   150,    22,    20,     4,    21,
     155,     4,    36,    24,    24,    24,    24,   156,    21,    18,
      21,   160,    37,    23,    19,    22,    20,    19,   167,    17,
     137,    22,    22,    19,    23,     4,    23,    21,    23,    21,
      20,    22,    25,    77,    22,    21,    23,    26,    23,    22,
     137,    23,   105,    97,    58,    98,   169
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     8,     9,    10,    11,    43,    44,    46,    47,
      49,     9,    10,    11,     0,    46,    49,     5,     4,    48,
       4,     4,     4,     4,    12,    15,    16,    17,    53,    54,
      62,    65,    20,     4,    51,    18,    18,    18,    18,    20,
      20,    22,    20,     6,    53,    53,    53,    45,    49,    19,
      24,    47,    38,    39,    50,    40,    41,     4,    20,    26,
      38,    39,    40,    55,    56,    57,    58,    59,    60,    61,
      55,     4,    63,    53,    55,    21,     4,    52,    24,    24,
      24,    56,    59,     4,    20,    58,    24,    25,    26,    30,
      31,    32,    33,    34,    35,    27,    28,    37,    36,    21,
      18,    19,    23,    21,    22,    19,    51,    47,    47,    47,
      21,    21,    56,    57,    57,    56,    56,    56,    56,    56,
      56,    58,    58,    56,    60,    61,    22,    55,    55,    17,
      22,    46,    45,    53,    19,    20,    53,    23,    23,     4,
      64,    67,    68,    55,    23,    44,    49,    13,    14,    66,
      18,    25,    26,    21,    21,    20,    22,    55,    25,    26,
      22,    55,    53,    53,    21,    23,    23,    22,    53,    23,
      66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    42,    43,    43,    44,    44,    45,    45,    46,    48,
      47,    47,    47,    47,    47,    47,    49,    49,    49,    50,
      50,    52,    51,    51,    53,    53,    53,    53,    54,    55,
      55,    56,    56,    56,    57,    57,    57,    58,    58,    58,
      58,    59,    59,    60,    60,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    62,    62,    62,    63,    64,
      64,    64,    65,    66,    66,    66,    67,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     1,     9,     0,     4,     0,     4,     0,
       4,     7,     7,     7,     1,     0,     1,     1,     1,     1,
       1,     0,     4,     2,     2,     2,     2,     0,     4,     1,
       1,     3,     3,     1,     3,     3,     1,     1,     3,     2,
       1,     3,     1,     3,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     1,    11,     7,     8,     3,     3,
       1,     1,     8,     8,     4,     0,     3,     3
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
  case 2: /* Code: function program  */
#line 85 "bisonamir.y"
                       { printf("noice program\n");}
#line 1264 "bisonamir.tab.c"
    break;

  case 3: /* Code: program  */
#line 86 "bisonamir.y"
              { printf("noice program\n");}
#line 1270 "bisonamir.tab.c"
    break;

  case 6: /* function_declaration: type IDF SEPERATOR function_declaration  */
#line 93 "bisonamir.y"
                                                              {setCode((yyvsp[-2].valeur).string, "variable_lcl");}
#line 1276 "bisonamir.tab.c"
    break;

  case 8: /* program: declarations BEGIN_ instructions END_  */
#line 103 "bisonamir.y"
                                               { printf("noice program\n"); }
#line 1282 "bisonamir.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 106 "bisonamir.y"
                   {k = (yyvsp[0].valeur).string;}
#line 1288 "bisonamir.tab.c"
    break;

  case 10: /* declarations: type $@1 var declarations  */
#line 106 "bisonamir.y"
                                                      { printf("noice declaration\n"); }
#line 1294 "bisonamir.tab.c"
    break;

  case 11: /* declarations: CONST INTEGER IDF AFFECTATION NBR_INT END_OP declarations  */
#line 107 "bisonamir.y"
                                                                         {setType((yyvsp[-4].valeur).string, (yyvsp[-5].valeur).string);setConstant((yyvsp[-4].valeur).string, "oui");setVal((yyvsp[-4].valeur).string,(yyvsp[-2].valeur).entier);}
#line 1300 "bisonamir.tab.c"
    break;

  case 12: /* declarations: CONST FLOAT IDF AFFECTATION NBR_REEL END_OP declarations  */
#line 108 "bisonamir.y"
                                                                       {setType((yyvsp[-4].valeur).string, (yyvsp[-5].valeur).string);setConstant((yyvsp[-4].valeur).string, "oui");setVal((yyvsp[-4].valeur).string,(yyvsp[-2].valeur).entier);}
#line 1306 "bisonamir.tab.c"
    break;

  case 13: /* declarations: CONST BOOL IDF AFFECTATION boolean END_OP declarations  */
#line 109 "bisonamir.y"
                                                                      {setType((yyvsp[-4].valeur).string, (yyvsp[-5].valeur).string);setConstant((yyvsp[-4].valeur).string, "oui");setVal((yyvsp[-4].valeur).string,(yyvsp[-2].valeur).entier);}
#line 1312 "bisonamir.tab.c"
    break;

  case 14: /* declarations: ERROR  */
#line 110 "bisonamir.y"
                    { fprintf(stderr, "Syntax error: Unexpected token\n"); }
#line 1318 "bisonamir.tab.c"
    break;

  case 21: /* $@2: %empty  */
#line 122 "bisonamir.y"
                   {setType((yyvsp[-1].valeur).string, k);}
#line 1324 "bisonamir.tab.c"
    break;

  case 23: /* var: IDF END_OP  */
#line 123 "bisonamir.y"
                {setType((yyvsp[-1].valeur).string, k);}
#line 1330 "bisonamir.tab.c"
    break;

  case 28: /* assign: IDF AFFECTATION expression END_OP  */
#line 132 "bisonamir.y"
                                          {if(isConstant((yyvsp[-3].valeur).string)==1){ fprintf(stderr, "Error: %s is CONSTANT\n",(yyvsp[-3].valeur).string);}
                                            if(strcmp(getType((yyvsp[-3].valeur).string),"+")==0){ fprintf(stderr, "Error : %s is  NOT defined\n",(yyvsp[-3].valeur).string);}
                                            setVal((yyvsp[-3].valeur).string,(yyvsp[-1].valeur).entier);printf("noice assign\n"); }
#line 1338 "bisonamir.tab.c"
    break;

  case 29: /* expression: int_expr  */
#line 137 "bisonamir.y"
                     { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1344 "bisonamir.tab.c"
    break;

  case 30: /* expression: bool_expr  */
#line 138 "bisonamir.y"
                      { (yyval.valeur).boolean = (yyvsp[0].valeur).boolean; }
#line 1350 "bisonamir.tab.c"
    break;

  case 31: /* int_expr: int_expr PLUS int_term  */
#line 141 "bisonamir.y"
                                 { (yyval.valeur).entier = (yyvsp[-2].valeur).entier + (yyvsp[0].valeur).entier; }
#line 1356 "bisonamir.tab.c"
    break;

  case 32: /* int_expr: int_expr MINUS int_term  */
#line 142 "bisonamir.y"
                                  { (yyval.valeur).entier = (yyvsp[-2].valeur).entier - (yyvsp[0].valeur).entier; }
#line 1362 "bisonamir.tab.c"
    break;

  case 33: /* int_expr: int_term  */
#line 143 "bisonamir.y"
                   { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1368 "bisonamir.tab.c"
    break;

  case 34: /* int_term: int_term MULT int_factor  */
#line 146 "bisonamir.y"
                                   { (yyval.valeur).entier = (yyvsp[-2].valeur).entier * (yyvsp[0].valeur).entier; }
#line 1374 "bisonamir.tab.c"
    break;

  case 35: /* int_term: int_term DIV int_factor  */
#line 147 "bisonamir.y"
                                  { if ((yyvsp[0].valeur).entier == 0) { fprintf(stderr, "Error : division by zero\n"); exit(EXIT_FAILURE); } (yyval.valeur).entier = (yyvsp[-2].valeur).entier / (yyvsp[0].valeur).entier; }
#line 1380 "bisonamir.tab.c"
    break;

  case 36: /* int_term: int_factor  */
#line 148 "bisonamir.y"
                     { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1386 "bisonamir.tab.c"
    break;

  case 37: /* int_factor: NBR_INT  */
#line 151 "bisonamir.y"
                    { (yyval.valeur).entier = (yyvsp[0].valeur).entier; }
#line 1392 "bisonamir.tab.c"
    break;

  case 38: /* int_factor: LEFT_PARANTHESIS int_expr RIGHT_PARANTHESIS  */
#line 152 "bisonamir.y"
                                                        { (yyval.valeur).entier = (yyvsp[-1].valeur).entier; }
#line 1398 "bisonamir.tab.c"
    break;

  case 39: /* int_factor: MINUS int_factor  */
#line 153 "bisonamir.y"
                                          { (yyval.valeur).entier = -(yyvsp[0].valeur).entier; }
#line 1404 "bisonamir.tab.c"
    break;

  case 40: /* int_factor: IDF  */
#line 154 "bisonamir.y"
                { (yyval.valeur).entier = getVal((yyvsp[0].valeur).string);if(strcmp(getType((yyvsp[0].valeur).string),"+")==0){ fprintf(stderr, "Error : %s is  NOT defined\n",(yyvsp[0].valeur).string);}}
#line 1410 "bisonamir.tab.c"
    break;

  case 41: /* bool_expr: bool_expr OR bool_term  */
#line 157 "bisonamir.y"
                                  { (yyval.valeur).boolean = (yyvsp[-2].valeur).boolean || (yyvsp[0].valeur).boolean; }
#line 1416 "bisonamir.tab.c"
    break;

  case 42: /* bool_expr: bool_term  */
#line 158 "bisonamir.y"
                     { (yyval.valeur).boolean = (yyvsp[0].valeur).boolean; }
#line 1422 "bisonamir.tab.c"
    break;

  case 43: /* bool_term: bool_term AND bool_factor  */
#line 161 "bisonamir.y"
                                     { (yyval.valeur).boolean = (yyvsp[-2].valeur).boolean && (yyvsp[0].valeur).boolean; }
#line 1428 "bisonamir.tab.c"
    break;

  case 44: /* bool_term: bool_factor  */
#line 162 "bisonamir.y"
                       { (yyval.valeur).boolean = (yyvsp[0].valeur).boolean; }
#line 1434 "bisonamir.tab.c"
    break;

  case 45: /* bool_factor: BOOL_TRUE  */
#line 165 "bisonamir.y"
                       { (yyval.valeur).boolean = 1; }
#line 1440 "bisonamir.tab.c"
    break;

  case 46: /* bool_factor: BOOL_FALSE  */
#line 166 "bisonamir.y"
                        { (yyval.valeur).boolean = 0; }
#line 1446 "bisonamir.tab.c"
    break;

  case 47: /* bool_factor: LEFT_PARANTHESIS bool_expr RIGHT_PARANTHESIS  */
#line 167 "bisonamir.y"
                                                          { (yyval.valeur).boolean = (yyvsp[-1].valeur).boolean; }
#line 1452 "bisonamir.tab.c"
    break;

  case 48: /* bool_factor: int_expr EQUAL int_expr  */
#line 168 "bisonamir.y"
                                     { (yyval.valeur).entier = (yyvsp[-2].valeur).entier == (yyvsp[0].valeur).entier; }
#line 1458 "bisonamir.tab.c"
    break;

  case 49: /* bool_factor: int_expr DIFFERENT int_expr  */
#line 169 "bisonamir.y"
                                         { (yyval.valeur).entier = (yyvsp[-2].valeur).entier != (yyvsp[0].valeur).entier; }
#line 1464 "bisonamir.tab.c"
    break;

  case 50: /* bool_factor: int_expr LESS_THAN int_expr  */
#line 170 "bisonamir.y"
                                         { (yyval.valeur).entier = (yyvsp[-2].valeur).entier < (yyvsp[0].valeur).entier; }
#line 1470 "bisonamir.tab.c"
    break;

  case 51: /* bool_factor: int_expr LESS_OR_EQUAL int_expr  */
#line 171 "bisonamir.y"
                                             { (yyval.valeur).entier = (yyvsp[-2].valeur).entier <= (yyvsp[0].valeur).entier; }
#line 1476 "bisonamir.tab.c"
    break;

  case 52: /* bool_factor: int_expr GREATER_THAN int_expr  */
#line 172 "bisonamir.y"
                                            { (yyval.valeur).entier = (yyvsp[-2].valeur).entier > (yyvsp[0].valeur).entier; }
#line 1482 "bisonamir.tab.c"
    break;

  case 53: /* bool_factor: int_expr GREATER_OR_EQUAL int_expr  */
#line 173 "bisonamir.y"
                                                { (yyval.valeur).entier = (yyvsp[-2].valeur).entier >= (yyvsp[0].valeur).entier; }
#line 1488 "bisonamir.tab.c"
    break;

  case 54: /* bool_factor: IDF  */
#line 174 "bisonamir.y"
                 { (yyval.valeur).boolean = getVal((yyvsp[0].valeur).string);if(strcmp(getType((yyvsp[0].valeur).string),"+")==0){ fprintf(stderr, "Error : %s is  NOT defined\n",(yyvsp[0].valeur).string);}}
#line 1494 "bisonamir.tab.c"
    break;


#line 1498 "bisonamir.tab.c"

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

#line 207 "bisonamir.y"



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

void yyerror(char *s) {
    fprintf(stderr, "Error : %s\n", s);
}

int recherche(char entite[]) {
    int i = 0;
    while (i < CpTabSym) {
        if (strcmp(entite, ts[i].NomEntite) == 0)
            return i;
        i++;
    }
    return -1;
}

int isDefined(char entite[]) {
    int index = recherche(entite);
    if (index != -1) {
     
        return 1; 
    } else {
       
        return 0;
    }
}

void inserer(char entite[], char code[], char type[], char constant[],char Val[]) {
    if (recherche(entite) == -1) {
        strcpy(ts[CpTabSym].NomEntite, entite);
        strcpy(ts[CpTabSym].CodeEntite, code);
        strcpy(ts[CpTabSym].TypeEntite, type);
        strcpy(ts[CpTabSym].Constant, constant);
        strcpy(ts[CpTabSym].Val, Val);
        CpTabSym++;
    } 
}

void setCode(char entite[], char newType[]) {
    int index = recherche(entite);
    if (index != -1) {
        // Entity found, set the new type
        strcpy(ts[index].CodeEntite, newType);
    } else {
        // Entity not found
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setType(char entite[], char newType[]) {
    int index = recherche(entite);
    if (index != -1) {
        // Entity found, set the new type
        strcpy(ts[index].TypeEntite, newType);
    } else {
        // Entity not found
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setConstant(char entite[], char newConstant[]) {
    int index = recherche(entite);
    if (index != -1) {
        // Entity found, set the new constant
        strcpy(ts[index].Constant, newConstant);
    } else {
        // Entity not found
        printf("\nErreur : %s n'est pas defini.\n", entite);
    }
}

void setVal(char entite[], double newVal) {
    int index = recherche(entite);

    if (index != -1) {
        // Convert the double newVal to a string
        char newValString[10];  // Adjust the array size based on your needs
        snprintf(newValString, sizeof(newValString), "%lf", newVal);

        // Update the value in the symbol table
        strcpy(ts[index].Val, newValString);
        printf("Value of %s has been updated to %s.\n", entite, newValString);
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

void delete(char codeToDelete[]) {
    int i, j;

    // Parcours de la table de symboles
    for (i = 0; i < CpTabSym; i++) {
        // Vérification si l'entité a le code à supprimer
        if (strcmp(ts[i].CodeEntite, codeToDelete) == 0) {
            // Supprimer l'entité en décalant les éléments restants
            for (j = i; j < CpTabSym - 1; j++) {
                strcpy(ts[j].NomEntite, ts[j + 1].NomEntite);
                strcpy(ts[j].CodeEntite, ts[j + 1].CodeEntite);
                strcpy(ts[j].TypeEntite, ts[j + 1].TypeEntite);
                strcpy(ts[j].Constant, ts[j + 1].Constant);
                strcpy(ts[j].Val, ts[j + 1].Val);
            }

            // Décrémenter le compteur de la table de symboles
            CpTabSym--;

            // Après la suppression, réduire le compteur i pour éviter de sauter une entrée
            i--;
        }
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
