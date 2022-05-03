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
#line 1 "./bison/parser.y"

    #include <stdio.h>
    #include "AbstractSyntaxTree.h"
    #include "TranslationUnitNode.h"
    #include "DeclarationNode.h"
    #include "FunctionNode.h"
    #include "StatementNode.h"
    #include "OperatorNode.h"
    #include "ExpressionNode.h"
    #include "ValueNode.h"

    int yylex(void);
    void yyerror(char *);

    ASTNode *root = nullptr;

#line 88 "./src/y.tab.c"

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

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_NUM_INT = 3,                    /* NUM_INT  */
  YYSYMBOL_NUM_FLOAT = 4,                  /* NUM_FLOAT  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_TYPE_INT = 6,                   /* TYPE_INT  */
  YYSYMBOL_TYPE_FLOAT = 7,                 /* TYPE_FLOAT  */
  YYSYMBOL_TYPE_VOID = 8,                  /* TYPE_VOID  */
  YYSYMBOL_OP_ADD = 9,                     /* OP_ADD  */
  YYSYMBOL_OP_SUB = 10,                    /* OP_SUB  */
  YYSYMBOL_OP_MUL = 11,                    /* OP_MUL  */
  YYSYMBOL_OP_DIV = 12,                    /* OP_DIV  */
  YYSYMBOL_OP_MOD = 13,                    /* OP_MOD  */
  YYSYMBOL_OP_GT = 14,                     /* OP_GT  */
  YYSYMBOL_OP_LT = 15,                     /* OP_LT  */
  YYSYMBOL_OP_GTE = 16,                    /* OP_GTE  */
  YYSYMBOL_OP_LTE = 17,                    /* OP_LTE  */
  YYSYMBOL_OP_EQ = 18,                     /* OP_EQ  */
  YYSYMBOL_OP_NEQ = 19,                    /* OP_NEQ  */
  YYSYMBOL_OP_AND = 20,                    /* OP_AND  */
  YYSYMBOL_OP_XOR = 21,                    /* OP_XOR  */
  YYSYMBOL_OP_OR = 22,                     /* OP_OR  */
  YYSYMBOL_OP_NOT = 23,                    /* OP_NOT  */
  YYSYMBOL_OP_LOGAND = 24,                 /* OP_LOGAND  */
  YYSYMBOL_OP_LOGOR = 25,                  /* OP_LOGOR  */
  YYSYMBOL_OP_ASSIGN = 26,                 /* OP_ASSIGN  */
  YYSYMBOL_LP = 27,                        /* LP  */
  YYSYMBOL_RP = 28,                        /* RP  */
  YYSYMBOL_LBR = 29,                       /* LBR  */
  YYSYMBOL_RBR = 30,                       /* RBR  */
  YYSYMBOL_SEM = 31,                       /* SEM  */
  YYSYMBOL_COMMA = 32,                     /* COMMA  */
  YYSYMBOL_IF = 33,                        /* IF  */
  YYSYMBOL_ELSE = 34,                      /* ELSE  */
  YYSYMBOL_WHILE = 35,                     /* WHILE  */
  YYSYMBOL_FOR = 36,                       /* FOR  */
  YYSYMBOL_RETURN = 37,                    /* RETURN  */
  YYSYMBOL_IFX = 38,                       /* IFX  */
  YYSYMBOL_YYACCEPT = 39,                  /* $accept  */
  YYSYMBOL_program = 40,                   /* program  */
  YYSYMBOL_externdef = 41,                 /* externdef  */
  YYSYMBOL_function = 42,                  /* function  */
  YYSYMBOL_parameters = 43,                /* parameters  */
  YYSYMBOL_declaration = 44,               /* declaration  */
  YYSYMBOL_declarator = 45,                /* declarator  */
  YYSYMBOL_type = 46,                      /* type  */
  YYSYMBOL_identifier = 47,                /* identifier  */
  YYSYMBOL_statement = 48,                 /* statement  */
  YYSYMBOL_compoundstmt = 49,              /* compoundstmt  */
  YYSYMBOL_items = 50,                     /* items  */
  YYSYMBOL_item = 51,                      /* item  */
  YYSYMBOL_exprstmt = 52,                  /* exprstmt  */
  YYSYMBOL_expr = 53,                      /* expr  */
  YYSYMBOL_logorexpr = 54,                 /* logorexpr  */
  YYSYMBOL_logandexpr = 55,                /* logandexpr  */
  YYSYMBOL_orexpr = 56,                    /* orexpr  */
  YYSYMBOL_xorexpr = 57,                   /* xorexpr  */
  YYSYMBOL_andexpr = 58,                   /* andexpr  */
  YYSYMBOL_ecmprexpr = 59,                 /* ecmprexpr  */
  YYSYMBOL_cmprexpr = 60,                  /* cmprexpr  */
  YYSYMBOL_addexpr = 61,                   /* addexpr  */
  YYSYMBOL_mulexpr = 62,                   /* mulexpr  */
  YYSYMBOL_factor = 63,                    /* factor  */
  YYSYMBOL_constant = 64,                  /* constant  */
  YYSYMBOL_arguments = 65,                 /* arguments  */
  YYSYMBOL_ctrlstmt = 66,                  /* ctrlstmt  */
  YYSYMBOL_initstmt = 67,                  /* initstmt  */
  YYSYMBOL_jumpstmt = 68                   /* jumpstmt  */
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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  73
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   293


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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    60,    60,    61,    64,    65,    68,    71,    72,    73,
      74,    77,    78,    81,    84,    85,    88,    91,    92,    93,
      94,    97,   100,   101,   104,   105,   108,   109,   112,   113,
     116,   117,   120,   121,   124,   125,   128,   129,   132,   133,
     136,   137,   138,   141,   142,   143,   144,   145,   148,   149,
     150,   153,   154,   155,   156,   159,   160,   161,   162,   163,
     164,   167,   168,   171,   172,   173,   176,   177,   179,   180,
     181,   184,   185,   188
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
  "\"end of file\"", "error", "\"invalid token\"", "NUM_INT", "NUM_FLOAT",
  "ID", "TYPE_INT", "TYPE_FLOAT", "TYPE_VOID", "OP_ADD", "OP_SUB",
  "OP_MUL", "OP_DIV", "OP_MOD", "OP_GT", "OP_LT", "OP_GTE", "OP_LTE",
  "OP_EQ", "OP_NEQ", "OP_AND", "OP_XOR", "OP_OR", "OP_NOT", "OP_LOGAND",
  "OP_LOGOR", "OP_ASSIGN", "LP", "RP", "LBR", "RBR", "SEM", "COMMA", "IF",
  "ELSE", "WHILE", "FOR", "RETURN", "IFX", "$accept", "program",
  "externdef", "function", "parameters", "declaration", "declarator",
  "type", "identifier", "statement", "compoundstmt", "items", "item",
  "exprstmt", "expr", "logorexpr", "logandexpr", "orexpr", "xorexpr",
  "andexpr", "ecmprexpr", "cmprexpr", "addexpr", "mulexpr", "factor",
  "constant", "arguments", "ctrlstmt", "initstmt", "jumpstmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-69)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -69,     9,   -69,   -69,   -69,   -69,   -69,   -69,    41,     6,
     133,    85,   -69,   -69,   -69,   -69,   -69,   133,   133,   133,
      -7,    -2,    -8,    16,    28,    76,    53,    52,    43,    78,
     137,   -69,   -69,   -69,    24,   -69,    51,   -69,   -69,    80,
     133,   133,   -69,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   133,    83,
     135,   -69,   -69,   -69,    57,    16,    28,    76,    53,    52,
      43,    43,    78,    78,    78,    78,   137,   137,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   133,    18,   -69,   -69,   -69,
      87,    96,   100,     3,   -69,     7,   -69,   -69,   -69,   -69,
      90,   -69,   -69,   133,   133,    59,   -69,   -69,   101,   103,
     -69,   -69,     3,    97,    97,   112,    91,   -69,    97,   123,
      97,   -69,    97,   -69,   -69
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     1,    14,    15,     2,     4,     5,     0,     0,
       0,    10,    11,    16,    13,    61,    62,     0,     0,     0,
      55,     0,    29,    31,    33,    35,    37,    39,    42,    47,
      50,    54,    56,     9,     0,     8,    55,    59,    60,     0,
       0,    65,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,    28,    64,     0,    30,    32,    34,    36,    38,
      40,    41,    43,    44,    45,    46,    48,    49,    51,    52,
      53,    23,     6,     7,    58,     0,     0,    63,    21,    27,
       0,     0,     0,     0,    24,     0,    25,    17,    22,    18,
       0,    19,    20,     0,     0,     0,    73,    26,     0,     0,
      72,    71,     0,     0,     0,     0,    66,    68,     0,     0,
       0,    70,     0,    67,    69
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -69,   -69,   -69,   -69,   -69,   -68,     1,   -69,    -9,   -39,
      95,   -69,   -69,   -66,    -5,   -69,   114,   111,   113,   115,
     116,    70,    94,    98,   -14,   -69,   -69,   -69,   -69,   -69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     5,     6,    34,     7,    95,     9,    36,    96,
      97,    86,    98,    99,   100,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    64,   101,   112,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      14,    20,     8,    37,    38,    21,    15,    16,    13,     2,
      20,    13,    35,    17,    39,     3,     4,    43,    94,    40,
      41,    15,    16,    13,     3,     4,    18,   106,    17,    42,
      19,    20,    20,    10,    89,    62,    63,   110,    12,   111,
      44,    18,    78,    79,    80,    19,   115,    81,    88,    89,
      45,    90,    59,    91,    92,    93,    60,    50,    51,    52,
      53,    83,    15,    16,    13,     3,     4,    10,    11,    17,
      48,    49,    12,    47,   116,   117,    20,    20,    41,   121,
      87,   123,    18,   124,    20,    84,    19,    54,    55,    85,
      89,     3,     4,    33,    20,    20,    20,    46,   108,   109,
      15,    16,    13,    20,    20,    20,    20,    17,    61,    20,
     119,    20,    81,    20,   103,    15,    16,    13,    70,    71,
      18,   107,    17,   104,    19,   120,    81,   105,    89,   113,
      90,   114,    91,    92,    93,    18,    15,    16,    13,    19,
     118,     3,     4,    17,    72,    73,    74,    75,    56,    57,
      58,   122,    76,    77,    82,    66,    18,    65,    67,     0,
      19,    68,     0,    69
};

static const yytype_int8 yycheck[] =
{
       9,    10,     1,    17,    18,    10,     3,     4,     5,     0,
      19,     5,    11,    10,    19,     6,     7,    25,    86,    26,
      27,     3,     4,     5,     6,     7,    23,    93,    10,    31,
      27,    40,    41,    26,    31,    40,    41,   105,    31,   105,
      24,    23,    56,    57,    58,    27,   112,    29,    30,    31,
      22,    33,    28,    35,    36,    37,    32,    14,    15,    16,
      17,    60,     3,     4,     5,     6,     7,    26,    27,    10,
      18,    19,    31,    20,   113,   114,    85,    86,    27,   118,
      85,   120,    23,   122,    93,    28,    27,     9,    10,    32,
      31,     6,     7,     8,   103,   104,   105,    21,   103,   104,
       3,     4,     5,   112,   113,   114,   115,    10,    28,   118,
     115,   120,    29,   122,    27,     3,     4,     5,    48,    49,
      23,    31,    10,    27,    27,    34,    29,    27,    31,    28,
      33,    28,    35,    36,    37,    23,     3,     4,     5,    27,
      28,     6,     7,    10,    50,    51,    52,    53,    11,    12,
      13,    28,    54,    55,    59,    44,    23,    43,    45,    -1,
      27,    46,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    40,     0,     6,     7,    41,    42,    44,    45,    46,
      26,    27,    31,     5,    47,     3,     4,    10,    23,    27,
      47,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,     8,    43,    45,    47,    63,    63,    53,
      26,    27,    31,    25,    24,    22,    21,    20,    18,    19,
      14,    15,    16,    17,     9,    10,    11,    12,    13,    28,
      32,    28,    53,    53,    65,    55,    56,    57,    58,    59,
      60,    60,    61,    61,    61,    61,    62,    62,    63,    63,
      63,    29,    49,    45,    28,    32,    50,    53,    30,    31,
      33,    35,    36,    37,    44,    45,    48,    49,    51,    52,
      53,    66,    68,    27,    27,    27,    52,    31,    53,    53,
      44,    52,    67,    28,    28,    52,    48,    48,    28,    53,
      34,    48,    28,    48,    48
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    40,    41,    41,    42,    43,    43,    43,
      43,    44,    44,    45,    46,    46,    47,    48,    48,    48,
      48,    49,    50,    50,    51,    51,    52,    52,    53,    53,
      54,    54,    55,    55,    56,    56,    57,    57,    58,    58,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    61,
      61,    62,    62,    62,    62,    63,    63,    63,    63,    63,
      63,    64,    64,    65,    65,    65,    66,    66,    66,    66,
      66,    67,    67,    68
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     0,     1,     1,     5,     3,     1,     1,
       0,     2,     4,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     2,     0,     1,     1,     2,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     1,     1,     1,     3,     4,     2,
       2,     1,     1,     3,     1,     0,     5,     7,     5,     7,
       6,     1,     1,     2
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
  case 2: /* program: program externdef  */
#line 60 "./bison/parser.y"
                                    { (yyval.unit) = (yyvsp[-1].unit); (yyval.unit)->AppendDefinition((yyvsp[0].node)); }
#line 1235 "./src/y.tab.c"
    break;

  case 3: /* program: %empty  */
#line 61 "./bison/parser.y"
                              { (yyval.unit) = new TranslationUnitNode(); root = (yyval.unit); }
#line 1241 "./src/y.tab.c"
    break;

  case 4: /* externdef: function  */
#line 64 "./bison/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1247 "./src/y.tab.c"
    break;

  case 5: /* externdef: declaration  */
#line 65 "./bison/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1253 "./src/y.tab.c"
    break;

  case 6: /* function: declarator LP parameters RP compoundstmt  */
#line 68 "./bison/parser.y"
                                                           { (yyval.node) = new FunctionNode((yyvsp[-4].declarator).name, (yyvsp[-4].declarator).type, (yyvsp[-2].parameters), (yyvsp[0].node)); }
#line 1259 "./src/y.tab.c"
    break;

  case 7: /* parameters: parameters COMMA declarator  */
#line 71 "./bison/parser.y"
                                              { (yyval.parameters) = (yyvsp[-2].parameters); (yyvsp[-2].parameters)->AppendParameter(new DeclarationNode((yyvsp[0].declarator).name, (yyvsp[0].declarator).type)); }
#line 1265 "./src/y.tab.c"
    break;

  case 8: /* parameters: declarator  */
#line 72 "./bison/parser.y"
                             { (yyval.parameters) = new ParameterListNode(); (yyval.parameters)->AppendParameter(new DeclarationNode((yyvsp[0].declarator).name, (yyvsp[0].declarator).type)); }
#line 1271 "./src/y.tab.c"
    break;

  case 9: /* parameters: TYPE_VOID  */
#line 73 "./bison/parser.y"
                            { (yyval.parameters) = new ParameterListNode(); }
#line 1277 "./src/y.tab.c"
    break;

  case 10: /* parameters: %empty  */
#line 74 "./bison/parser.y"
                              { (yyval.parameters) = new ParameterListNode(); }
#line 1283 "./src/y.tab.c"
    break;

  case 11: /* declaration: declarator SEM  */
#line 77 "./bison/parser.y"
                                 { (yyval.node) = new DeclarationNode((yyvsp[-1].declarator).name, (yyvsp[-1].declarator).type); }
#line 1289 "./src/y.tab.c"
    break;

  case 12: /* declaration: declarator OP_ASSIGN expr SEM  */
#line 78 "./bison/parser.y"
                                                { (yyval.node) = new DeclarationNode((yyvsp[-3].declarator).name, (yyvsp[-3].declarator).type, (yyvsp[-1].node)); }
#line 1295 "./src/y.tab.c"
    break;

  case 13: /* declarator: type identifier  */
#line 81 "./bison/parser.y"
                                  { (yyval.declarator) = { (yyvsp[-1].node), (yyvsp[0].node) }; }
#line 1301 "./src/y.tab.c"
    break;

  case 14: /* type: TYPE_INT  */
#line 84 "./bison/parser.y"
                           { (yyval.node) = new TypeNode(Type::INTEGER); }
#line 1307 "./src/y.tab.c"
    break;

  case 15: /* type: TYPE_FLOAT  */
#line 85 "./bison/parser.y"
                             { (yyval.node) = new TypeNode(Type::FLOAT); }
#line 1313 "./src/y.tab.c"
    break;

  case 16: /* identifier: ID  */
#line 88 "./bison/parser.y"
                     { (yyval.node) = new IdentifierNode((yyvsp[0].str)); }
#line 1319 "./src/y.tab.c"
    break;

  case 17: /* statement: compoundstmt  */
#line 91 "./bison/parser.y"
                               { (yyval.node) = (yyvsp[0].node); }
#line 1325 "./src/y.tab.c"
    break;

  case 18: /* statement: exprstmt  */
#line 92 "./bison/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1331 "./src/y.tab.c"
    break;

  case 19: /* statement: ctrlstmt  */
#line 93 "./bison/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1337 "./src/y.tab.c"
    break;

  case 20: /* statement: jumpstmt  */
#line 94 "./bison/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1343 "./src/y.tab.c"
    break;

  case 21: /* compoundstmt: LBR items RBR  */
#line 97 "./bison/parser.y"
                                { (yyval.node) = (yyvsp[-1].compound); }
#line 1349 "./src/y.tab.c"
    break;

  case 22: /* items: items item  */
#line 100 "./bison/parser.y"
                             { (yyval.compound) = (yyvsp[-1].compound); (yyval.compound)->AppendStatement((yyvsp[0].node)); }
#line 1355 "./src/y.tab.c"
    break;

  case 23: /* items: %empty  */
#line 101 "./bison/parser.y"
                              { (yyval.compound) = new CompoundStatementNode(); }
#line 1361 "./src/y.tab.c"
    break;

  case 24: /* item: declaration  */
#line 104 "./bison/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1367 "./src/y.tab.c"
    break;

  case 25: /* item: statement  */
#line 105 "./bison/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1373 "./src/y.tab.c"
    break;

  case 26: /* exprstmt: expr SEM  */
#line 108 "./bison/parser.y"
                           { (yyval.node) = new ExpressionStatementNode((yyvsp[-1].node)); }
#line 1379 "./src/y.tab.c"
    break;

  case 27: /* exprstmt: SEM  */
#line 109 "./bison/parser.y"
                       { (yyval.node) = new ExpressionStatementNode(); }
#line 1385 "./src/y.tab.c"
    break;

  case 28: /* expr: identifier OP_ASSIGN expr  */
#line 112 "./bison/parser.y"
                                            { (yyval.node) = new AssignOpNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1391 "./src/y.tab.c"
    break;

  case 29: /* expr: logorexpr  */
#line 113 "./bison/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1397 "./src/y.tab.c"
    break;

  case 30: /* logorexpr: logorexpr OP_LOGOR logandexpr  */
#line 116 "./bison/parser.y"
                                                { (yyval.node) = new BinaryOpNode(Operator::LOGOR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1403 "./src/y.tab.c"
    break;

  case 31: /* logorexpr: logandexpr  */
#line 117 "./bison/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1409 "./src/y.tab.c"
    break;

  case 32: /* logandexpr: logandexpr OP_LOGAND orexpr  */
#line 120 "./bison/parser.y"
                                              { (yyval.node) = new BinaryOpNode(Operator::LOGAND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1415 "./src/y.tab.c"
    break;

  case 33: /* logandexpr: orexpr  */
#line 121 "./bison/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1421 "./src/y.tab.c"
    break;

  case 34: /* orexpr: orexpr OP_OR xorexpr  */
#line 124 "./bison/parser.y"
                                       { (yyval.node) = new BinaryOpNode(Operator::OR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1427 "./src/y.tab.c"
    break;

  case 35: /* orexpr: xorexpr  */
#line 125 "./bison/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1433 "./src/y.tab.c"
    break;

  case 36: /* xorexpr: xorexpr OP_XOR andexpr  */
#line 128 "./bison/parser.y"
                                         { (yyval.node) = new BinaryOpNode(Operator::XOR, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1439 "./src/y.tab.c"
    break;

  case 37: /* xorexpr: andexpr  */
#line 129 "./bison/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1445 "./src/y.tab.c"
    break;

  case 38: /* andexpr: andexpr OP_AND ecmprexpr  */
#line 132 "./bison/parser.y"
                                           { (yyval.node) = new BinaryOpNode(Operator::AND, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1451 "./src/y.tab.c"
    break;

  case 39: /* andexpr: ecmprexpr  */
#line 133 "./bison/parser.y"
                            { (yyval.node) = (yyvsp[0].node); }
#line 1457 "./src/y.tab.c"
    break;

  case 40: /* ecmprexpr: ecmprexpr OP_EQ cmprexpr  */
#line 136 "./bison/parser.y"
                                           { (yyval.node) = new BinaryOpNode(Operator::EQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1463 "./src/y.tab.c"
    break;

  case 41: /* ecmprexpr: ecmprexpr OP_NEQ cmprexpr  */
#line 137 "./bison/parser.y"
                                            { (yyval.node) = new BinaryOpNode(Operator::NEQ, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1469 "./src/y.tab.c"
    break;

  case 42: /* ecmprexpr: cmprexpr  */
#line 138 "./bison/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1475 "./src/y.tab.c"
    break;

  case 43: /* cmprexpr: cmprexpr OP_GT addexpr  */
#line 141 "./bison/parser.y"
                                         { (yyval.node) = new BinaryOpNode(Operator::GT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1481 "./src/y.tab.c"
    break;

  case 44: /* cmprexpr: cmprexpr OP_LT addexpr  */
#line 142 "./bison/parser.y"
                                         { (yyval.node) = new BinaryOpNode(Operator::LT, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1487 "./src/y.tab.c"
    break;

  case 45: /* cmprexpr: cmprexpr OP_GTE addexpr  */
#line 143 "./bison/parser.y"
                                          { (yyval.node) = new BinaryOpNode(Operator::GTE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1493 "./src/y.tab.c"
    break;

  case 46: /* cmprexpr: cmprexpr OP_LTE addexpr  */
#line 144 "./bison/parser.y"
                                          { (yyval.node) = new BinaryOpNode(Operator::LTE, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1499 "./src/y.tab.c"
    break;

  case 47: /* cmprexpr: addexpr  */
#line 145 "./bison/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1505 "./src/y.tab.c"
    break;

  case 48: /* addexpr: addexpr OP_ADD mulexpr  */
#line 148 "./bison/parser.y"
                                         { (yyval.node) = new BinaryOpNode(Operator::ADD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1511 "./src/y.tab.c"
    break;

  case 49: /* addexpr: addexpr OP_SUB mulexpr  */
#line 149 "./bison/parser.y"
                                         { (yyval.node) = new BinaryOpNode(Operator::SUB, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1517 "./src/y.tab.c"
    break;

  case 50: /* addexpr: mulexpr  */
#line 150 "./bison/parser.y"
                          { (yyval.node) = (yyvsp[0].node); }
#line 1523 "./src/y.tab.c"
    break;

  case 51: /* mulexpr: mulexpr OP_MUL factor  */
#line 153 "./bison/parser.y"
                                        { (yyval.node) = new BinaryOpNode(Operator::MUL, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1529 "./src/y.tab.c"
    break;

  case 52: /* mulexpr: mulexpr OP_DIV factor  */
#line 154 "./bison/parser.y"
                                        { (yyval.node) = new BinaryOpNode(Operator::DIV, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1535 "./src/y.tab.c"
    break;

  case 53: /* mulexpr: mulexpr OP_MOD factor  */
#line 155 "./bison/parser.y"
                                        { (yyval.node) = new BinaryOpNode(Operator::MOD, (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1541 "./src/y.tab.c"
    break;

  case 54: /* mulexpr: factor  */
#line 156 "./bison/parser.y"
                         { (yyval.node) = (yyvsp[0].node); }
#line 1547 "./src/y.tab.c"
    break;

  case 55: /* factor: identifier  */
#line 159 "./bison/parser.y"
                             { (yyval.node) = (yyvsp[0].node); }
#line 1553 "./src/y.tab.c"
    break;

  case 56: /* factor: constant  */
#line 160 "./bison/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1559 "./src/y.tab.c"
    break;

  case 57: /* factor: LP expr RP  */
#line 161 "./bison/parser.y"
                             { (yyval.node) = (yyvsp[-1].node); }
#line 1565 "./src/y.tab.c"
    break;

  case 58: /* factor: identifier LP arguments RP  */
#line 162 "./bison/parser.y"
                                             { (yyval.node) = new FunctionCallNode((yyvsp[-3].node), (yyvsp[-1].arguments)); }
#line 1571 "./src/y.tab.c"
    break;

  case 59: /* factor: OP_SUB factor  */
#line 163 "./bison/parser.y"
                                { (yyval.node) = new BinaryOpNode(Operator::SUB, new IntegerNode(0), (yyvsp[0].node)); }
#line 1577 "./src/y.tab.c"
    break;

  case 60: /* factor: OP_NOT factor  */
#line 164 "./bison/parser.y"
                                { (yyval.node) = new BinaryOpNode(Operator::XOR, new IntegerNode(0), (yyvsp[0].node)); }
#line 1583 "./src/y.tab.c"
    break;

  case 61: /* constant: NUM_INT  */
#line 167 "./bison/parser.y"
                          { (yyval.node) = new IntegerNode((yyvsp[0].intNum)); }
#line 1589 "./src/y.tab.c"
    break;

  case 62: /* constant: NUM_FLOAT  */
#line 168 "./bison/parser.y"
                            { (yyval.node) = new FloatNode((yyvsp[0].floatNum)); }
#line 1595 "./src/y.tab.c"
    break;

  case 63: /* arguments: arguments COMMA expr  */
#line 171 "./bison/parser.y"
                                       { (yyval.arguments) = (yyvsp[-2].arguments); (yyvsp[-2].arguments)->AppendArgument((yyvsp[0].node)); }
#line 1601 "./src/y.tab.c"
    break;

  case 64: /* arguments: expr  */
#line 172 "./bison/parser.y"
                       { (yyval.arguments) = new ArgumentListNode(); (yyval.arguments)->AppendArgument((yyvsp[0].node)); }
#line 1607 "./src/y.tab.c"
    break;

  case 65: /* arguments: %empty  */
#line 173 "./bison/parser.y"
                              { (yyval.arguments) = new ArgumentListNode(); }
#line 1613 "./src/y.tab.c"
    break;

  case 66: /* ctrlstmt: IF LP expr RP statement  */
#line 176 "./bison/parser.y"
                                                    { (yyval.node) = new IfStatementNode((yyvsp[-2].node), (yyvsp[0].node), new ExpressionStatementNode()); }
#line 1619 "./src/y.tab.c"
    break;

  case 67: /* ctrlstmt: IF LP expr RP statement ELSE statement  */
#line 177 "./bison/parser.y"
                                                         { (yyval.node) = new IfStatementNode((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1625 "./src/y.tab.c"
    break;

  case 68: /* ctrlstmt: WHILE LP expr RP statement  */
#line 179 "./bison/parser.y"
                                             { (yyval.node) = new WhileStatementNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 1631 "./src/y.tab.c"
    break;

  case 69: /* ctrlstmt: FOR LP initstmt exprstmt expr RP statement  */
#line 180 "./bison/parser.y"
                                                             { (yyval.node) = new ForStatementNode((yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 1637 "./src/y.tab.c"
    break;

  case 70: /* ctrlstmt: FOR LP initstmt exprstmt RP statement  */
#line 181 "./bison/parser.y"
                                                        { (yyval.node) = new ForStatementNode((yyvsp[-3].node), (yyvsp[-2].node), new EmptyExpressionNode() ,(yyvsp[0].node)); }
#line 1643 "./src/y.tab.c"
    break;

  case 71: /* initstmt: exprstmt  */
#line 184 "./bison/parser.y"
                           { (yyval.node) = (yyvsp[0].node); }
#line 1649 "./src/y.tab.c"
    break;

  case 72: /* initstmt: declaration  */
#line 185 "./bison/parser.y"
                              { (yyval.node) = (yyvsp[0].node); }
#line 1655 "./src/y.tab.c"
    break;

  case 73: /* jumpstmt: RETURN exprstmt  */
#line 188 "./bison/parser.y"
                                  { (yyval.node) = new ReturnStatementNode((yyvsp[0].node)); }
#line 1661 "./src/y.tab.c"
    break;


#line 1665 "./src/y.tab.c"

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

#line 191 "./bison/parser.y"


void yyerror(char *e) {
    fprintf(stderr, "error: %s\n", e);
}

int yywrap(){
    return 1;
}

ASTNode *parse_and_generate_syntax_tree(FILE *input){
    extern FILE *yyin;
    yyin = input;
    yyparse();
    return root;
}
