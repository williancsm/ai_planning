/* A Bison parser, made by GNU Bison 3.7.6.  */

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
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 17 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"

/*
Error reporting:
Intention is to provide error token on most bracket expressions,
so synchronisation can occur on next CLOSE_BRAC.
Hence error should be generated for innermost expression containing error.
Expressions which cause errors return a NULL values, and parser
always attempts to carry on.
This won't behave so well if CLOSE_BRAC is missing.

Naming conventions:
Generally, the names should be similar to the PDDL2.1 spec.
During development, they have also been based on older PDDL specs,
older PDDL+ and TIM parsers, and this shows in places.

All the names of fields in the semantic value type begin with t_
Corresponding categories in the grammar begin with c_
Corresponding classes have no prefix.

PDDL grammar       yacc grammar      type of corresponding semantic val.  

thing+             c_things          thing_list
(thing+)           c_thing_list      thing_list

*/

#include <cstdlib>
#include <cstdio>
#include <fstream>
#include <ctype.h>

// This is now copied locally to avoid relying on installation 
// of flex++.

//#include "FlexLexer.h"
//#include <FlexLexer.h>

#include "ptree.h"
#include "parse_error.h"

#define YYDEBUG 1 

int yyerror(const char *);

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", ((char *)msgid))
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) ((char *) msgid)
# endif
#endif

extern int yylex();

using namespace VAL;


#line 133 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OPEN_BRAC = 258,               /* OPEN_BRAC  */
    CLOSE_BRAC = 259,              /* CLOSE_BRAC  */
    OPEN_SQ = 260,                 /* OPEN_SQ  */
    CLOSE_SQ = 261,                /* CLOSE_SQ  */
    DEFINE = 262,                  /* DEFINE  */
    PDDLDOMAIN = 263,              /* PDDLDOMAIN  */
    REQS = 264,                    /* REQS  */
    EQUALITY = 265,                /* EQUALITY  */
    STRIPS = 266,                  /* STRIPS  */
    ADL = 267,                     /* ADL  */
    NEGATIVE_PRECONDITIONS = 268,  /* NEGATIVE_PRECONDITIONS  */
    TYPING = 269,                  /* TYPING  */
    DISJUNCTIVE_PRECONDS = 270,    /* DISJUNCTIVE_PRECONDS  */
    EXT_PRECS = 271,               /* EXT_PRECS  */
    UNIV_PRECS = 272,              /* UNIV_PRECS  */
    QUANT_PRECS = 273,             /* QUANT_PRECS  */
    COND_EFFS = 274,               /* COND_EFFS  */
    FLUENTS = 275,                 /* FLUENTS  */
    OBJECTFLUENTS = 276,           /* OBJECTFLUENTS  */
    NUMERICFLUENTS = 277,          /* NUMERICFLUENTS  */
    ACTIONCOSTS = 278,             /* ACTIONCOSTS  */
    TIME = 279,                    /* TIME  */
    DURATIVE_ACTIONS = 280,        /* DURATIVE_ACTIONS  */
    DURATION_INEQUALITIES = 281,   /* DURATION_INEQUALITIES  */
    CONTINUOUS_EFFECTS = 282,      /* CONTINUOUS_EFFECTS  */
    DERIVED_PREDICATES = 283,      /* DERIVED_PREDICATES  */
    TIMED_INITIAL_LITERALS = 284,  /* TIMED_INITIAL_LITERALS  */
    PREFERENCES = 285,             /* PREFERENCES  */
    CONSTRAINTS = 286,             /* CONSTRAINTS  */
    ACTION = 287,                  /* ACTION  */
    PROCESS = 288,                 /* PROCESS  */
    EVENT = 289,                   /* EVENT  */
    DURATIVE_ACTION = 290,         /* DURATIVE_ACTION  */
    DERIVED = 291,                 /* DERIVED  */
    CONSTANTS = 292,               /* CONSTANTS  */
    PREDS = 293,                   /* PREDS  */
    FUNCTIONS = 294,               /* FUNCTIONS  */
    TYPES = 295,                   /* TYPES  */
    ARGS = 296,                    /* ARGS  */
    PRE = 297,                     /* PRE  */
    CONDITION = 298,               /* CONDITION  */
    PREFERENCE = 299,              /* PREFERENCE  */
    START_PRE = 300,               /* START_PRE  */
    END_PRE = 301,                 /* END_PRE  */
    EFFECTS = 302,                 /* EFFECTS  */
    INITIAL_EFFECT = 303,          /* INITIAL_EFFECT  */
    FINAL_EFFECT = 304,            /* FINAL_EFFECT  */
    INVARIANT = 305,               /* INVARIANT  */
    DURATION = 306,                /* DURATION  */
    AT_START = 307,                /* AT_START  */
    AT_END = 308,                  /* AT_END  */
    OVER_ALL = 309,                /* OVER_ALL  */
    AND = 310,                     /* AND  */
    OR = 311,                      /* OR  */
    EXISTS = 312,                  /* EXISTS  */
    FORALL = 313,                  /* FORALL  */
    IMPLY = 314,                   /* IMPLY  */
    NOT = 315,                     /* NOT  */
    WHEN = 316,                    /* WHEN  */
    WHENEVER = 317,                /* WHENEVER  */
    EITHER = 318,                  /* EITHER  */
    PROBLEM = 319,                 /* PROBLEM  */
    FORDOMAIN = 320,               /* FORDOMAIN  */
    INITIALLY = 321,               /* INITIALLY  */
    OBJECTS = 322,                 /* OBJECTS  */
    GOALS = 323,                   /* GOALS  */
    EQ = 324,                      /* EQ  */
    LENGTH = 325,                  /* LENGTH  */
    SERIAL = 326,                  /* SERIAL  */
    PARALLEL = 327,                /* PARALLEL  */
    METRIC = 328,                  /* METRIC  */
    MINIMIZE = 329,                /* MINIMIZE  */
    MAXIMIZE = 330,                /* MAXIMIZE  */
    HASHT = 331,                   /* HASHT  */
    DURATION_VAR = 332,            /* DURATION_VAR  */
    TOTAL_TIME = 333,              /* TOTAL_TIME  */
    INCREASE = 334,                /* INCREASE  */
    DECREASE = 335,                /* DECREASE  */
    SCALE_UP = 336,                /* SCALE_UP  */
    SCALE_DOWN = 337,              /* SCALE_DOWN  */
    ASSIGN = 338,                  /* ASSIGN  */
    GREATER = 339,                 /* GREATER  */
    GREATEQ = 340,                 /* GREATEQ  */
    LESS = 341,                    /* LESS  */
    LESSEQ = 342,                  /* LESSEQ  */
    Q = 343,                       /* Q  */
    COLON = 344,                   /* COLON  */
    NUMBER = 345,                  /* NUMBER  */
    ALWAYS = 346,                  /* ALWAYS  */
    SOMETIME = 347,                /* SOMETIME  */
    WITHIN = 348,                  /* WITHIN  */
    ATMOSTONCE = 349,              /* ATMOSTONCE  */
    SOMETIMEAFTER = 350,           /* SOMETIMEAFTER  */
    SOMETIMEBEFORE = 351,          /* SOMETIMEBEFORE  */
    ALWAYSWITHIN = 352,            /* ALWAYSWITHIN  */
    HOLDDURING = 353,              /* HOLDDURING  */
    HOLDAFTER = 354,               /* HOLDAFTER  */
    ISVIOLATED = 355,              /* ISVIOLATED  */
    BOGUS = 356,                   /* BOGUS  */
    NAME = 357,                    /* NAME  */
    FUNCTION_SYMBOL = 358,         /* FUNCTION_SYMBOL  */
    INTVAL = 359,                  /* INTVAL  */
    FLOATVAL = 360,                /* FLOATVAL  */
    AT_TIME = 361,                 /* AT_TIME  */
    HYPHEN = 362,                  /* HYPHEN  */
    PLUS = 363,                    /* PLUS  */
    MUL = 364,                     /* MUL  */
    DIV = 365,                     /* DIV  */
    UMINUS = 366                   /* UMINUS  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 79 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"

    parse_category* t_parse_category;

    effect_lists* t_effect_lists;
    effect* t_effect;
    simple_effect* t_simple_effect;
    cond_effect*   t_cond_effect;
    forall_effect* t_forall_effect;
    timed_effect* t_timed_effect;

    quantifier t_quantifier;
    metric_spec*  t_metric;
    optimization t_optimization;

    symbol* t_symbol;
    var_symbol*   t_var_symbol;
    pddl_type*    t_type;
    pred_symbol*  t_pred_symbol;
    func_symbol*  t_func_symbol;
    const_symbol* t_const_symbol;

    parameter_symbol_list* t_parameter_symbol_list;
    var_symbol_list* t_var_symbol_list;
    const_symbol_list* t_const_symbol_list;
    pddl_type_list* t_type_list;

    proposition* t_proposition;
    pred_decl* t_pred_decl;
    pred_decl_list* t_pred_decl_list;
    func_decl* t_func_decl;
    func_decl_list* t_func_decl_list;

    goal* t_goal;
    con_goal * t_con_goal;
    goal_list* t_goal_list;

    func_term* t_func_term;
    assignment* t_assignment;
    expression* t_expression;
    num_expression* t_num_expression;
    assign_op t_assign_op;
    comparison_op t_comparison_op;

    structure_def* t_structure_def;
    structure_store* t_structure_store;

    action* t_action_def;
    event* t_event_def;
    process* t_process_def;
    durative_action* t_durative_action_def;
    derivation_rule* t_derivation_rule;

    problem* t_problem;
    length_spec* t_length_spec;

    domain* t_domain;    

    pddl_req_flag t_pddl_req_flag;

    plan* t_plan;
    plan_step* t_step;

    int ival;
    double fval;

    char* cp;
    int t_dummy;

    var_symbol_table * vtab;

#line 362 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OPEN_BRAC = 3,                  /* OPEN_BRAC  */
  YYSYMBOL_CLOSE_BRAC = 4,                 /* CLOSE_BRAC  */
  YYSYMBOL_OPEN_SQ = 5,                    /* OPEN_SQ  */
  YYSYMBOL_CLOSE_SQ = 6,                   /* CLOSE_SQ  */
  YYSYMBOL_DEFINE = 7,                     /* DEFINE  */
  YYSYMBOL_PDDLDOMAIN = 8,                 /* PDDLDOMAIN  */
  YYSYMBOL_REQS = 9,                       /* REQS  */
  YYSYMBOL_EQUALITY = 10,                  /* EQUALITY  */
  YYSYMBOL_STRIPS = 11,                    /* STRIPS  */
  YYSYMBOL_ADL = 12,                       /* ADL  */
  YYSYMBOL_NEGATIVE_PRECONDITIONS = 13,    /* NEGATIVE_PRECONDITIONS  */
  YYSYMBOL_TYPING = 14,                    /* TYPING  */
  YYSYMBOL_DISJUNCTIVE_PRECONDS = 15,      /* DISJUNCTIVE_PRECONDS  */
  YYSYMBOL_EXT_PRECS = 16,                 /* EXT_PRECS  */
  YYSYMBOL_UNIV_PRECS = 17,                /* UNIV_PRECS  */
  YYSYMBOL_QUANT_PRECS = 18,               /* QUANT_PRECS  */
  YYSYMBOL_COND_EFFS = 19,                 /* COND_EFFS  */
  YYSYMBOL_FLUENTS = 20,                   /* FLUENTS  */
  YYSYMBOL_OBJECTFLUENTS = 21,             /* OBJECTFLUENTS  */
  YYSYMBOL_NUMERICFLUENTS = 22,            /* NUMERICFLUENTS  */
  YYSYMBOL_ACTIONCOSTS = 23,               /* ACTIONCOSTS  */
  YYSYMBOL_TIME = 24,                      /* TIME  */
  YYSYMBOL_DURATIVE_ACTIONS = 25,          /* DURATIVE_ACTIONS  */
  YYSYMBOL_DURATION_INEQUALITIES = 26,     /* DURATION_INEQUALITIES  */
  YYSYMBOL_CONTINUOUS_EFFECTS = 27,        /* CONTINUOUS_EFFECTS  */
  YYSYMBOL_DERIVED_PREDICATES = 28,        /* DERIVED_PREDICATES  */
  YYSYMBOL_TIMED_INITIAL_LITERALS = 29,    /* TIMED_INITIAL_LITERALS  */
  YYSYMBOL_PREFERENCES = 30,               /* PREFERENCES  */
  YYSYMBOL_CONSTRAINTS = 31,               /* CONSTRAINTS  */
  YYSYMBOL_ACTION = 32,                    /* ACTION  */
  YYSYMBOL_PROCESS = 33,                   /* PROCESS  */
  YYSYMBOL_EVENT = 34,                     /* EVENT  */
  YYSYMBOL_DURATIVE_ACTION = 35,           /* DURATIVE_ACTION  */
  YYSYMBOL_DERIVED = 36,                   /* DERIVED  */
  YYSYMBOL_CONSTANTS = 37,                 /* CONSTANTS  */
  YYSYMBOL_PREDS = 38,                     /* PREDS  */
  YYSYMBOL_FUNCTIONS = 39,                 /* FUNCTIONS  */
  YYSYMBOL_TYPES = 40,                     /* TYPES  */
  YYSYMBOL_ARGS = 41,                      /* ARGS  */
  YYSYMBOL_PRE = 42,                       /* PRE  */
  YYSYMBOL_CONDITION = 43,                 /* CONDITION  */
  YYSYMBOL_PREFERENCE = 44,                /* PREFERENCE  */
  YYSYMBOL_START_PRE = 45,                 /* START_PRE  */
  YYSYMBOL_END_PRE = 46,                   /* END_PRE  */
  YYSYMBOL_EFFECTS = 47,                   /* EFFECTS  */
  YYSYMBOL_INITIAL_EFFECT = 48,            /* INITIAL_EFFECT  */
  YYSYMBOL_FINAL_EFFECT = 49,              /* FINAL_EFFECT  */
  YYSYMBOL_INVARIANT = 50,                 /* INVARIANT  */
  YYSYMBOL_DURATION = 51,                  /* DURATION  */
  YYSYMBOL_AT_START = 52,                  /* AT_START  */
  YYSYMBOL_AT_END = 53,                    /* AT_END  */
  YYSYMBOL_OVER_ALL = 54,                  /* OVER_ALL  */
  YYSYMBOL_AND = 55,                       /* AND  */
  YYSYMBOL_OR = 56,                        /* OR  */
  YYSYMBOL_EXISTS = 57,                    /* EXISTS  */
  YYSYMBOL_FORALL = 58,                    /* FORALL  */
  YYSYMBOL_IMPLY = 59,                     /* IMPLY  */
  YYSYMBOL_NOT = 60,                       /* NOT  */
  YYSYMBOL_WHEN = 61,                      /* WHEN  */
  YYSYMBOL_WHENEVER = 62,                  /* WHENEVER  */
  YYSYMBOL_EITHER = 63,                    /* EITHER  */
  YYSYMBOL_PROBLEM = 64,                   /* PROBLEM  */
  YYSYMBOL_FORDOMAIN = 65,                 /* FORDOMAIN  */
  YYSYMBOL_INITIALLY = 66,                 /* INITIALLY  */
  YYSYMBOL_OBJECTS = 67,                   /* OBJECTS  */
  YYSYMBOL_GOALS = 68,                     /* GOALS  */
  YYSYMBOL_EQ = 69,                        /* EQ  */
  YYSYMBOL_LENGTH = 70,                    /* LENGTH  */
  YYSYMBOL_SERIAL = 71,                    /* SERIAL  */
  YYSYMBOL_PARALLEL = 72,                  /* PARALLEL  */
  YYSYMBOL_METRIC = 73,                    /* METRIC  */
  YYSYMBOL_MINIMIZE = 74,                  /* MINIMIZE  */
  YYSYMBOL_MAXIMIZE = 75,                  /* MAXIMIZE  */
  YYSYMBOL_HASHT = 76,                     /* HASHT  */
  YYSYMBOL_DURATION_VAR = 77,              /* DURATION_VAR  */
  YYSYMBOL_TOTAL_TIME = 78,                /* TOTAL_TIME  */
  YYSYMBOL_INCREASE = 79,                  /* INCREASE  */
  YYSYMBOL_DECREASE = 80,                  /* DECREASE  */
  YYSYMBOL_SCALE_UP = 81,                  /* SCALE_UP  */
  YYSYMBOL_SCALE_DOWN = 82,                /* SCALE_DOWN  */
  YYSYMBOL_ASSIGN = 83,                    /* ASSIGN  */
  YYSYMBOL_GREATER = 84,                   /* GREATER  */
  YYSYMBOL_GREATEQ = 85,                   /* GREATEQ  */
  YYSYMBOL_LESS = 86,                      /* LESS  */
  YYSYMBOL_LESSEQ = 87,                    /* LESSEQ  */
  YYSYMBOL_Q = 88,                         /* Q  */
  YYSYMBOL_COLON = 89,                     /* COLON  */
  YYSYMBOL_NUMBER = 90,                    /* NUMBER  */
  YYSYMBOL_ALWAYS = 91,                    /* ALWAYS  */
  YYSYMBOL_SOMETIME = 92,                  /* SOMETIME  */
  YYSYMBOL_WITHIN = 93,                    /* WITHIN  */
  YYSYMBOL_ATMOSTONCE = 94,                /* ATMOSTONCE  */
  YYSYMBOL_SOMETIMEAFTER = 95,             /* SOMETIMEAFTER  */
  YYSYMBOL_SOMETIMEBEFORE = 96,            /* SOMETIMEBEFORE  */
  YYSYMBOL_ALWAYSWITHIN = 97,              /* ALWAYSWITHIN  */
  YYSYMBOL_HOLDDURING = 98,                /* HOLDDURING  */
  YYSYMBOL_HOLDAFTER = 99,                 /* HOLDAFTER  */
  YYSYMBOL_ISVIOLATED = 100,               /* ISVIOLATED  */
  YYSYMBOL_BOGUS = 101,                    /* BOGUS  */
  YYSYMBOL_NAME = 102,                     /* NAME  */
  YYSYMBOL_FUNCTION_SYMBOL = 103,          /* FUNCTION_SYMBOL  */
  YYSYMBOL_INTVAL = 104,                   /* INTVAL  */
  YYSYMBOL_FLOATVAL = 105,                 /* FLOATVAL  */
  YYSYMBOL_AT_TIME = 106,                  /* AT_TIME  */
  YYSYMBOL_HYPHEN = 107,                   /* HYPHEN  */
  YYSYMBOL_PLUS = 108,                     /* PLUS  */
  YYSYMBOL_MUL = 109,                      /* MUL  */
  YYSYMBOL_DIV = 110,                      /* DIV  */
  YYSYMBOL_UMINUS = 111,                   /* UMINUS  */
  YYSYMBOL_YYACCEPT = 112,                 /* $accept  */
  YYSYMBOL_mystartsymbol = 113,            /* mystartsymbol  */
  YYSYMBOL_c_domain = 114,                 /* c_domain  */
  YYSYMBOL_c_preamble = 115,               /* c_preamble  */
  YYSYMBOL_c_domain_name = 116,            /* c_domain_name  */
  YYSYMBOL_c_domain_require_def = 117,     /* c_domain_require_def  */
  YYSYMBOL_c_reqs = 118,                   /* c_reqs  */
  YYSYMBOL_c_pred_decls = 119,             /* c_pred_decls  */
  YYSYMBOL_c_pred_decl = 120,              /* c_pred_decl  */
  YYSYMBOL_c_new_pred_symbol = 121,        /* c_new_pred_symbol  */
  YYSYMBOL_c_pred_symbol = 122,            /* c_pred_symbol  */
  YYSYMBOL_c_init_pred_symbol = 123,       /* c_init_pred_symbol  */
  YYSYMBOL_c_func_decls = 124,             /* c_func_decls  */
  YYSYMBOL_c_func_decl = 125,              /* c_func_decl  */
  YYSYMBOL_c_ntype = 126,                  /* c_ntype  */
  YYSYMBOL_c_new_func_symbol = 127,        /* c_new_func_symbol  */
  YYSYMBOL_c_typed_var_list = 128,         /* c_typed_var_list  */
  YYSYMBOL_c_var_symbol_list = 129,        /* c_var_symbol_list  */
  YYSYMBOL_c_typed_consts = 130,           /* c_typed_consts  */
  YYSYMBOL_c_const_symbols = 131,          /* c_const_symbols  */
  YYSYMBOL_c_new_const_symbols = 132,      /* c_new_const_symbols  */
  YYSYMBOL_c_typed_types = 133,            /* c_typed_types  */
  YYSYMBOL_c_parameter_symbols = 134,      /* c_parameter_symbols  */
  YYSYMBOL_c_declaration_var_symbol = 135, /* c_declaration_var_symbol  */
  YYSYMBOL_c_var_symbol = 136,             /* c_var_symbol  */
  YYSYMBOL_c_const_symbol = 137,           /* c_const_symbol  */
  YYSYMBOL_c_new_const_symbol = 138,       /* c_new_const_symbol  */
  YYSYMBOL_c_either_type = 139,            /* c_either_type  */
  YYSYMBOL_c_new_primitive_type = 140,     /* c_new_primitive_type  */
  YYSYMBOL_c_primitive_type = 141,         /* c_primitive_type  */
  YYSYMBOL_c_new_primitive_types = 142,    /* c_new_primitive_types  */
  YYSYMBOL_c_primitive_types = 143,        /* c_primitive_types  */
  YYSYMBOL_c_init_els = 144,               /* c_init_els  */
  YYSYMBOL_c_timed_initial_literal = 145,  /* c_timed_initial_literal  */
  YYSYMBOL_c_effects = 146,                /* c_effects  */
  YYSYMBOL_c_effect = 147,                 /* c_effect  */
  YYSYMBOL_c_a_effect = 148,               /* c_a_effect  */
  YYSYMBOL_c_p_effect = 149,               /* c_p_effect  */
  YYSYMBOL_c_p_effects = 150,              /* c_p_effects  */
  YYSYMBOL_c_conj_effect = 151,            /* c_conj_effect  */
  YYSYMBOL_c_da_effect = 152,              /* c_da_effect  */
  YYSYMBOL_c_da_effects = 153,             /* c_da_effects  */
  YYSYMBOL_c_timed_effect = 154,           /* c_timed_effect  */
  YYSYMBOL_c_cts_only_timed_effect = 155,  /* c_cts_only_timed_effect  */
  YYSYMBOL_c_da_cts_only_effect = 156,     /* c_da_cts_only_effect  */
  YYSYMBOL_c_da_cts_only_effects = 157,    /* c_da_cts_only_effects  */
  YYSYMBOL_c_a_effect_da = 158,            /* c_a_effect_da  */
  YYSYMBOL_c_p_effect_da = 159,            /* c_p_effect_da  */
  YYSYMBOL_c_p_effects_da = 160,           /* c_p_effects_da  */
  YYSYMBOL_c_f_assign_da = 161,            /* c_f_assign_da  */
  YYSYMBOL_c_proc_effect = 162,            /* c_proc_effect  */
  YYSYMBOL_c_proc_effects = 163,           /* c_proc_effects  */
  YYSYMBOL_c_f_exp_da = 164,               /* c_f_exp_da  */
  YYSYMBOL_c_binary_expr_da = 165,         /* c_binary_expr_da  */
  YYSYMBOL_c_duration_constraint = 166,    /* c_duration_constraint  */
  YYSYMBOL_c_d_op = 167,                   /* c_d_op  */
  YYSYMBOL_c_d_value = 168,                /* c_d_value  */
  YYSYMBOL_c_duration_constraints = 169,   /* c_duration_constraints  */
  YYSYMBOL_c_neg_simple_effect = 170,      /* c_neg_simple_effect  */
  YYSYMBOL_c_pos_simple_effect = 171,      /* c_pos_simple_effect  */
  YYSYMBOL_c_init_neg_simple_effect = 172, /* c_init_neg_simple_effect  */
  YYSYMBOL_c_init_pos_simple_effect = 173, /* c_init_pos_simple_effect  */
  YYSYMBOL_c_forall_effect = 174,          /* c_forall_effect  */
  YYSYMBOL_c_cond_effect = 175,            /* c_cond_effect  */
  YYSYMBOL_c_assignment = 176,             /* c_assignment  */
  YYSYMBOL_c_f_exp = 177,                  /* c_f_exp  */
  YYSYMBOL_c_f_exp_t = 178,                /* c_f_exp_t  */
  YYSYMBOL_c_number = 179,                 /* c_number  */
  YYSYMBOL_c_f_head = 180,                 /* c_f_head  */
  YYSYMBOL_c_ground_f_head = 181,          /* c_ground_f_head  */
  YYSYMBOL_c_comparison_op = 182,          /* c_comparison_op  */
  YYSYMBOL_c_pre_goal_descriptor = 183,    /* c_pre_goal_descriptor  */
  YYSYMBOL_c_pref_con_goal = 184,          /* c_pref_con_goal  */
  YYSYMBOL_c_pref_goal = 185,              /* c_pref_goal  */
  YYSYMBOL_c_pref_con_goal_list = 186,     /* c_pref_con_goal_list  */
  YYSYMBOL_c_pref_goal_descriptor = 187,   /* c_pref_goal_descriptor  */
  YYSYMBOL_c_constraint_goal_list = 188,   /* c_constraint_goal_list  */
  YYSYMBOL_c_constraint_goal = 189,        /* c_constraint_goal  */
  YYSYMBOL_c_goal_descriptor = 190,        /* c_goal_descriptor  */
  YYSYMBOL_c_pre_goal_descriptor_list = 191, /* c_pre_goal_descriptor_list  */
  YYSYMBOL_c_goal_list = 192,              /* c_goal_list  */
  YYSYMBOL_c_forall = 193,                 /* c_forall  */
  YYSYMBOL_c_exists = 194,                 /* c_exists  */
  YYSYMBOL_c_proposition = 195,            /* c_proposition  */
  YYSYMBOL_c_derived_proposition = 196,    /* c_derived_proposition  */
  YYSYMBOL_c_init_proposition = 197,       /* c_init_proposition  */
  YYSYMBOL_c_predicates = 198,             /* c_predicates  */
  YYSYMBOL_c_functions_def = 199,          /* c_functions_def  */
  YYSYMBOL_c_constraints_def = 200,        /* c_constraints_def  */
  YYSYMBOL_c_constraints_probdef = 201,    /* c_constraints_probdef  */
  YYSYMBOL_c_structure_defs = 202,         /* c_structure_defs  */
  YYSYMBOL_c_structure_def = 203,          /* c_structure_def  */
  YYSYMBOL_c_rule_head = 204,              /* c_rule_head  */
  YYSYMBOL_c_derivation_rule = 205,        /* c_derivation_rule  */
  YYSYMBOL_c_action_def = 206,             /* c_action_def  */
  YYSYMBOL_c_event_def = 207,              /* c_event_def  */
  YYSYMBOL_c_process_def = 208,            /* c_process_def  */
  YYSYMBOL_c_durative_action_def = 209,    /* c_durative_action_def  */
  YYSYMBOL_c_da_def_body = 210,            /* c_da_def_body  */
  YYSYMBOL_c_da_gd = 211,                  /* c_da_gd  */
  YYSYMBOL_c_da_gds = 212,                 /* c_da_gds  */
  YYSYMBOL_c_timed_gd = 213,               /* c_timed_gd  */
  YYSYMBOL_c_args_head = 214,              /* c_args_head  */
  YYSYMBOL_c_require_key = 215,            /* c_require_key  */
  YYSYMBOL_c_domain_constants = 216,       /* c_domain_constants  */
  YYSYMBOL_c_type_names = 217,             /* c_type_names  */
  YYSYMBOL_c_problem = 218,                /* c_problem  */
  YYSYMBOL_c_problem_body = 219,           /* c_problem_body  */
  YYSYMBOL_c_objects = 220,                /* c_objects  */
  YYSYMBOL_c_initial_state = 221,          /* c_initial_state  */
  YYSYMBOL_c_goals = 222,                  /* c_goals  */
  YYSYMBOL_c_goal_spec = 223,              /* c_goal_spec  */
  YYSYMBOL_c_metric_spec = 224,            /* c_metric_spec  */
  YYSYMBOL_c_length_spec = 225,            /* c_length_spec  */
  YYSYMBOL_c_optimization = 226,           /* c_optimization  */
  YYSYMBOL_c_ground_f_exp = 227,           /* c_ground_f_exp  */
  YYSYMBOL_c_binary_ground_f_exp = 228,    /* c_binary_ground_f_exp  */
  YYSYMBOL_c_binary_ground_f_pexps = 229,  /* c_binary_ground_f_pexps  */
  YYSYMBOL_c_binary_ground_f_mexps = 230,  /* c_binary_ground_f_mexps  */
  YYSYMBOL_c_plan = 231,                   /* c_plan  */
  YYSYMBOL_c_step_t_d = 232,               /* c_step_t_d  */
  YYSYMBOL_c_step_d = 233,                 /* c_step_d  */
  YYSYMBOL_c_step = 234,                   /* c_step  */
  YYSYMBOL_c_float = 235                   /* c_float  */
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
typedef yytype_int16 yy_state_t;

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

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   928

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  112
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  124
/* YYNRULES -- Number of rules.  */
#define YYNRULES  340
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  789

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   366


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   252,   252,   253,   254,   258,   264,   271,   272,   273,
     274,   276,   278,   280,   283,   288,   295,   302,   303,   308,
     310,   315,   317,   325,   333,   335,   343,   348,   350,   354,
     356,   363,   363,   366,   379,   388,   397,   409,   411,   417,
     426,   436,   441,   442,   446,   447,   455,   462,   471,   477,
     479,   481,   488,   494,   498,   502,   506,   511,   518,   523,
     525,   529,   531,   535,   548,   550,   552,   555,   559,   565,
     566,   568,   570,   579,   580,   581,   582,   583,   587,   588,
     592,   594,   596,   603,   604,   605,   607,   611,   613,   621,
     623,   631,   636,   641,   644,   651,   652,   656,   658,   660,
     664,   668,   674,   678,   682,   688,   690,   698,   703,   709,
     710,   714,   715,   719,   721,   723,   730,   731,   732,   734,
     739,   741,   743,   745,   747,   752,   758,   764,   769,   770,
     774,   775,   777,   778,   782,   784,   786,   788,   793,   795,
     798,   801,   807,   808,   809,   817,   821,   824,   828,   833,
     840,   845,   850,   855,   860,   862,   864,   866,   868,   873,
     875,   877,   879,   881,   883,   884,   888,   890,   892,   898,
     899,   902,   905,   907,   925,   927,   929,   935,   936,   937,
     938,   939,   951,   958,   960,   964,   965,   969,   971,   973,
     975,   979,   984,   986,   988,   990,   997,   999,  1004,  1006,
    1010,  1015,  1017,  1022,  1024,  1027,  1029,  1031,  1033,  1035,
    1037,  1039,  1041,  1043,  1045,  1050,  1052,  1056,  1058,  1061,
    1064,  1067,  1070,  1076,  1078,  1083,  1085,  1095,  1102,  1109,
    1114,  1119,  1124,  1126,  1133,  1135,  1142,  1144,  1151,  1153,
    1160,  1161,  1165,  1166,  1167,  1168,  1169,  1173,  1179,  1188,
    1199,  1206,  1217,  1223,  1233,  1239,  1254,  1261,  1263,  1265,
    1269,  1271,  1276,  1279,  1283,  1285,  1287,  1289,  1294,  1299,
    1304,  1305,  1307,  1308,  1310,  1312,  1313,  1314,  1315,  1316,
    1318,  1321,  1324,  1325,  1327,  1336,  1339,  1342,  1344,  1346,
    1348,  1350,  1352,  1358,  1362,  1367,  1379,  1386,  1387,  1388,
    1389,  1390,  1392,  1393,  1394,  1397,  1400,  1403,  1406,  1410,
    1412,  1419,  1422,  1426,  1433,  1434,  1439,  1440,  1441,  1442,
    1443,  1445,  1449,  1450,  1451,  1452,  1456,  1457,  1462,  1463,
    1469,  1472,  1474,  1477,  1481,  1485,  1491,  1495,  1501,  1509,
    1510
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
  "\"end of file\"", "error", "\"invalid token\"", "OPEN_BRAC",
  "CLOSE_BRAC", "OPEN_SQ", "CLOSE_SQ", "DEFINE", "PDDLDOMAIN", "REQS",
  "EQUALITY", "STRIPS", "ADL", "NEGATIVE_PRECONDITIONS", "TYPING",
  "DISJUNCTIVE_PRECONDS", "EXT_PRECS", "UNIV_PRECS", "QUANT_PRECS",
  "COND_EFFS", "FLUENTS", "OBJECTFLUENTS", "NUMERICFLUENTS", "ACTIONCOSTS",
  "TIME", "DURATIVE_ACTIONS", "DURATION_INEQUALITIES",
  "CONTINUOUS_EFFECTS", "DERIVED_PREDICATES", "TIMED_INITIAL_LITERALS",
  "PREFERENCES", "CONSTRAINTS", "ACTION", "PROCESS", "EVENT",
  "DURATIVE_ACTION", "DERIVED", "CONSTANTS", "PREDS", "FUNCTIONS", "TYPES",
  "ARGS", "PRE", "CONDITION", "PREFERENCE", "START_PRE", "END_PRE",
  "EFFECTS", "INITIAL_EFFECT", "FINAL_EFFECT", "INVARIANT", "DURATION",
  "AT_START", "AT_END", "OVER_ALL", "AND", "OR", "EXISTS", "FORALL",
  "IMPLY", "NOT", "WHEN", "WHENEVER", "EITHER", "PROBLEM", "FORDOMAIN",
  "INITIALLY", "OBJECTS", "GOALS", "EQ", "LENGTH", "SERIAL", "PARALLEL",
  "METRIC", "MINIMIZE", "MAXIMIZE", "HASHT", "DURATION_VAR", "TOTAL_TIME",
  "INCREASE", "DECREASE", "SCALE_UP", "SCALE_DOWN", "ASSIGN", "GREATER",
  "GREATEQ", "LESS", "LESSEQ", "Q", "COLON", "NUMBER", "ALWAYS",
  "SOMETIME", "WITHIN", "ATMOSTONCE", "SOMETIMEAFTER", "SOMETIMEBEFORE",
  "ALWAYSWITHIN", "HOLDDURING", "HOLDAFTER", "ISVIOLATED", "BOGUS", "NAME",
  "FUNCTION_SYMBOL", "INTVAL", "FLOATVAL", "AT_TIME", "HYPHEN", "PLUS",
  "MUL", "DIV", "UMINUS", "$accept", "mystartsymbol", "c_domain",
  "c_preamble", "c_domain_name", "c_domain_require_def", "c_reqs",
  "c_pred_decls", "c_pred_decl", "c_new_pred_symbol", "c_pred_symbol",
  "c_init_pred_symbol", "c_func_decls", "c_func_decl", "c_ntype",
  "c_new_func_symbol", "c_typed_var_list", "c_var_symbol_list",
  "c_typed_consts", "c_const_symbols", "c_new_const_symbols",
  "c_typed_types", "c_parameter_symbols", "c_declaration_var_symbol",
  "c_var_symbol", "c_const_symbol", "c_new_const_symbol", "c_either_type",
  "c_new_primitive_type", "c_primitive_type", "c_new_primitive_types",
  "c_primitive_types", "c_init_els", "c_timed_initial_literal",
  "c_effects", "c_effect", "c_a_effect", "c_p_effect", "c_p_effects",
  "c_conj_effect", "c_da_effect", "c_da_effects", "c_timed_effect",
  "c_cts_only_timed_effect", "c_da_cts_only_effect",
  "c_da_cts_only_effects", "c_a_effect_da", "c_p_effect_da",
  "c_p_effects_da", "c_f_assign_da", "c_proc_effect", "c_proc_effects",
  "c_f_exp_da", "c_binary_expr_da", "c_duration_constraint", "c_d_op",
  "c_d_value", "c_duration_constraints", "c_neg_simple_effect",
  "c_pos_simple_effect", "c_init_neg_simple_effect",
  "c_init_pos_simple_effect", "c_forall_effect", "c_cond_effect",
  "c_assignment", "c_f_exp", "c_f_exp_t", "c_number", "c_f_head",
  "c_ground_f_head", "c_comparison_op", "c_pre_goal_descriptor",
  "c_pref_con_goal", "c_pref_goal", "c_pref_con_goal_list",
  "c_pref_goal_descriptor", "c_constraint_goal_list", "c_constraint_goal",
  "c_goal_descriptor", "c_pre_goal_descriptor_list", "c_goal_list",
  "c_forall", "c_exists", "c_proposition", "c_derived_proposition",
  "c_init_proposition", "c_predicates", "c_functions_def",
  "c_constraints_def", "c_constraints_probdef", "c_structure_defs",
  "c_structure_def", "c_rule_head", "c_derivation_rule", "c_action_def",
  "c_event_def", "c_process_def", "c_durative_action_def", "c_da_def_body",
  "c_da_gd", "c_da_gds", "c_timed_gd", "c_args_head", "c_require_key",
  "c_domain_constants", "c_type_names", "c_problem", "c_problem_body",
  "c_objects", "c_initial_state", "c_goals", "c_goal_spec",
  "c_metric_spec", "c_length_spec", "c_optimization", "c_ground_f_exp",
  "c_binary_ground_f_exp", "c_binary_ground_f_pexps",
  "c_binary_ground_f_mexps", "c_plan", "c_step_t_d", "c_step_d", "c_step",
  "c_float", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366
};
#endif

#define YYPACT_NINF (-531)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-73)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      30,   100,    39,  -531,  -531,    32,  -531,  -531,  -531,    48,
    -531,    53,   -15,    79,   -16,    48,    48,  -531,     2,  -531,
     204,    96,   154,    63,  -531,   217,   -16,  -531,  -531,   223,
    -531,   144,    52,  -531,   741,   261,   265,   265,   265,   265,
     275,  -531,  -531,  -531,  -531,  -531,  -531,   265,   265,  -531,
    -531,  -531,   280,  -531,   291,   488,   248,    64,    66,    69,
      70,  -531,   179,   338,   288,  -531,   318,  -531,  -531,  -531,
    -531,  -531,   411,  -531,  -531,  -531,  -531,   337,   347,   649,
     355,   648,   373,   377,   259,   391,   259,   393,   259,   396,
     259,  -531,   402,   317,   179,   424,    83,   437,   450,   473,
     255,   475,   -34,   -33,   527,   470,  -531,  -531,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,  -531,  -531,   527,   540,  -531,   527,   527,   211,   527,
     527,   527,   211,   211,   211,   557,  -531,  -531,  -531,   561,
    -531,   573,  -531,   574,  -531,   575,  -531,    54,  -531,  -531,
     576,  -531,   491,  -531,  -531,  -531,    95,  -531,  -531,  -531,
    -531,    54,  -531,  -531,  -531,   491,   626,   578,  -531,   483,
     591,   321,  -531,   593,   618,  -531,  -531,   527,   619,   527,
     527,   527,   211,   527,   491,   491,   491,   491,   491,   566,
    -531,   179,   179,  -531,   522,   632,   523,   633,  -531,   491,
    -531,  -531,   634,   527,   527,  -531,   527,   527,   151,  -531,
    -531,  -531,  -531,  -531,   105,   637,   640,  -531,   641,  -531,
    -531,  -531,  -531,  -531,   646,  -531,   647,   650,   527,   527,
     651,   653,   683,   684,   685,   686,  -531,  -531,  -531,  -531,
     491,  -531,    54,  -531,   689,  -531,  -531,  -531,  -531,   330,
     346,   527,   694,   191,   484,  -531,   105,  -531,  -531,   491,
     491,   696,  -531,  -531,  -531,   698,   700,  -531,   540,   602,
     610,   658,   656,    97,  -531,   491,   491,   585,  -531,  -531,
    -531,   704,  -531,  -531,   620,  -531,  -531,  -531,   105,   105,
     105,   105,   716,   717,   722,   231,   696,   696,   723,   696,
     696,   696,   696,   696,  -531,  -531,   745,   749,   527,   527,
     750,  -531,  -531,  -531,  -531,   664,  -531,  -531,  -531,  -531,
     200,   229,    46,   105,   105,   105,  -531,   527,   527,   343,
    -531,   179,  -531,   296,   189,   749,  -531,  -531,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,   352,   708,  -531,  -531,   713,
     719,   496,  -531,  -531,  -531,  -531,  -531,   779,   780,   781,
     782,   783,   784,   785,   476,   787,  -531,   371,   788,   690,
     695,   789,  -531,  -531,    60,   796,  -531,    59,   390,   798,
     799,   800,   799,   801,   802,  -531,  -531,  -531,  -531,   720,
      36,  -531,  -531,  -531,  -531,  -531,  -531,  -531,   103,   806,
     807,  -531,   297,  -531,  -531,  -531,  -531,  -531,  -531,    25,
     808,  -531,   539,  -531,  -531,  -531,  -531,   809,  -531,   527,
     810,  -531,  -531,  -531,   448,   491,   300,   811,  -531,  -531,
    -531,  -531,  -531,  -531,    -3,   812,   813,   218,   218,   456,
     734,  -531,   815,   816,   540,   817,  -531,   459,  -531,   491,
     819,    44,  -531,  -531,  -531,  -531,   721,  -531,   820,   718,
    -531,  -531,    60,    60,    60,    60,   822,  -531,   823,  -531,
    -531,  -531,   824,   431,   826,   527,   827,  -531,  -531,    44,
      44,  -531,  -531,   735,   743,  -531,  -531,   105,   310,  -531,
    -531,   403,  -531,  -531,  -531,   828,  -531,  -531,  -531,   829,
     732,   831,   368,   211,   469,   230,   832,  -531,   833,   240,
     241,    60,    60,    60,    60,  -531,  -531,   749,   834,   636,
     835,   837,  -531,  -531,  -531,   837,   837,  -531,   -33,   838,
     837,   491,   472,    14,    14,   764,   766,   840,  -531,   120,
     527,   527,   527,  -531,   841,   843,   843,  -531,   815,   527,
      44,    44,    44,    44,    44,   844,  -531,   845,  -531,   846,
    -531,  -531,  -531,  -531,  -531,  -531,  -531,    60,  -531,    60,
    -531,  -531,   847,   783,  -531,  -531,    44,    44,  -531,  -531,
    -531,  -531,  -531,   848,   849,  -531,  -531,   740,  -531,   850,
     851,   105,   105,  -531,   361,   853,   854,   855,   856,   857,
     477,  -531,   654,   858,  -531,  -531,  -531,  -531,   859,   487,
     816,   861,    72,    72,   105,   105,   105,   491,   508,   862,
    -531,  -531,  -531,  -531,   490,   105,   105,  -531,   799,   110,
    -531,  -531,   863,   864,   865,  -531,  -531,  -531,  -531,  -531,
    -531,  -531,    44,    44,    44,    44,    44,  -531,  -531,  -531,
    -531,   866,   268,  -531,   867,   518,   868,   869,   870,   871,
     872,   873,   874,   875,   121,   806,   877,  -531,   529,  -531,
    -531,  -531,  -531,   878,   105,   805,   879,   880,  -531,   492,
     138,   138,   138,   138,   138,  -531,   881,  -531,   527,    44,
      44,   883,  -531,   110,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,   816,   540,   884,   534,   491,  -531,   885,   886,  -531,
    -531,   688,  -531,  -531,  -531,  -531,   622,   814,   888,  -531,
    -531,  -531,   889,   890,   891,   892,  -531,   536,   861,    14,
      14,   491,   127,   893,   894,  -531,  -531,   895,  -531,  -531,
     138,   138,   138,   138,  -531,  -531,  -531,  -531,  -531,  -531,
    -531,  -531,   896,   897,   898,   899,  -531,  -531,   845,   138,
     138,   138,   138,  -531,  -531,  -531,   861,   900,   901,   902,
     903,   904,   905,  -531,  -531,  -531,  -531,  -531,  -531
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
     333,     0,     0,   340,   339,     0,     2,     3,     4,   333,
     335,   337,     0,     0,    43,   333,   333,     1,     0,   330,
       0,     0,     0,     0,    54,     0,    43,   332,   331,     0,
     334,     0,     0,     6,     0,     0,     0,     0,     0,     0,
      13,   241,   246,   242,   243,   244,   245,     0,     0,   338,
      42,   336,     0,   296,     0,     0,     0,     0,     0,     0,
       0,   247,    45,     0,     0,    60,     0,     5,     7,    10,
      11,    12,     0,   240,     9,     8,    14,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    41,    45,     0,     0,     0,    20,     0,
       0,     0,    48,     0,     0,     0,    16,    15,   270,   271,
     284,   273,   272,   274,   275,   276,   285,   277,   278,   282,
     283,   281,   280,   279,   286,   287,   288,   289,   290,   291,
     292,    17,   237,     0,     0,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   250,   269,     0,
     254,     0,   252,     0,   256,     0,   293,     0,    44,   233,
       0,    23,    38,   232,    19,   235,     0,   234,    27,   294,
      57,     0,    59,    24,    25,    38,     0,     0,   215,     0,
       0,     0,   202,     0,     0,   169,   170,     0,     0,     0,
       0,     0,     0,     0,    38,    38,    38,    38,    38,     0,
      58,    45,    45,    22,     0,     0,    36,     0,    33,    38,
      60,    60,     0,     0,     0,   228,     0,     0,   181,   177,
     178,   179,   180,    51,     0,     0,     0,   248,     0,   205,
     203,   201,   206,   207,     0,   209,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,    40,    39,    52,
      38,    21,     0,    30,     0,    47,    46,   230,   226,     0,
       0,     0,     0,     0,     0,   173,     0,   164,   165,    38,
      38,   304,   208,   210,   211,     0,     0,   214,     0,     0,
       0,     0,     0,     0,    37,    38,    38,    32,   217,   225,
     218,     0,   216,   229,     0,    49,    51,    51,     0,     0,
       0,     0,     0,     0,     0,     0,   304,   304,     0,   304,
     304,   304,   304,   304,   212,   213,     0,     0,     0,     0,
       0,    56,    61,    35,    34,     0,    29,   219,    53,    50,
       0,     0,     0,     0,     0,     0,   222,     0,     0,     0,
      67,    45,   307,     0,     0,     0,   297,   301,   295,   298,
     299,   300,   302,   303,   204,     0,     0,   182,   200,     0,
       0,     0,   259,    31,   172,   171,   159,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
       0,     0,   314,   315,     0,     0,   186,     0,     0,     0,
       0,     0,     0,     0,     0,   147,   144,   143,   142,     0,
       0,   161,   160,   162,   163,   220,   221,   239,     0,     0,
       0,   238,     0,   306,    66,    65,    64,   151,   305,     0,
       0,   310,     0,   319,   176,   318,   317,     0,   308,     0,
       0,   185,   224,   200,     0,    38,     0,     0,    73,    75,
      74,    77,    76,   149,     0,     0,     0,     0,     0,     0,
       0,   255,     0,     0,     0,     0,   197,     0,   191,    38,
       0,     0,    26,    67,    51,   312,     0,   313,     0,     0,
      51,    51,     0,     0,     0,     0,     0,   309,     0,   198,
     183,   223,     0,     0,     0,     0,     0,   249,   129,     0,
       0,   253,   251,     0,     0,   138,   146,     0,     0,   258,
     260,     0,   257,    93,    94,     0,   187,   189,   196,     0,
       0,     0,     0,     0,     0,     0,     0,   321,     0,     0,
       0,     0,     0,     0,     0,   316,   199,     0,     0,     0,
       0,    72,    79,    80,    81,    72,    72,    82,     0,     0,
      72,    38,     0,     0,     0,     0,     0,     0,   145,     0,
       0,     0,     0,   263,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,   188,     0,   150,     0,
      68,   231,   311,   320,   175,   174,   323,   326,   322,   328,
     324,   325,     0,     0,    88,    86,     0,     0,    87,    69,
      71,    70,   148,     0,     0,   127,   128,     0,   168,     0,
       0,     0,     0,   139,     0,     0,     0,     0,     0,     0,
       0,   101,     0,     0,   112,   115,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
      63,   327,   329,   184,     0,     0,     0,   153,     0,     0,
     125,   126,     0,     0,     0,   268,   264,   265,   266,   261,
     262,   119,     0,     0,     0,     0,     0,    97,    98,    89,
      95,     0,     0,   108,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   190,     0,    78,
      83,    84,    85,     0,     0,     0,     0,     0,   267,     0,
       0,     0,     0,     0,     0,    91,     0,   110,     0,     0,
       0,     0,    92,     0,   155,    99,   156,   100,   157,   158,
     154,     0,     0,     0,     0,    38,   152,     0,     0,   140,
     141,     0,   111,   118,   116,   117,     0,     0,     0,   130,
     132,   133,     0,     0,     0,     0,   104,     0,     0,     0,
       0,    38,     0,     0,     0,   192,   194,     0,   166,   167,
       0,     0,     0,     0,   131,   121,   122,   123,   124,   120,
     105,   109,     0,     0,     0,     0,    90,   193,     0,     0,
       0,     0,     0,   107,   102,   103,     0,     0,     0,     0,
       0,     0,     0,   195,   135,   134,   136,   137,   106
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -531,  -531,  -531,   485,  -531,   759,  -531,   767,  -531,  -531,
     754,  -531,  -531,  -531,  -531,  -531,  -153,   660,  -181,   887,
     793,   277,  -270,  -531,  -531,   224,  -531,  -110,  -531,  -152,
    -531,  -531,   449,  -531,  -109,  -378,  -531,  -531,  -531,  -531,
    -474,  -531,  -531,  -531,  -510,  -531,   358,  -531,  -531,   222,
     374,  -531,  -225,  -531,   466,    94,   -43,  -531,  -382,  -367,
    -531,  -531,  -381,  -377,  -441,  -206,  -520,  -137,  -380,  -531,
    -531,  -329,  -335,   149,   243,  -531,  -531,   -56,  -102,  -531,
     705,   -78,  -531,  -344,  -531,   460,  -531,  -531,  -531,  -531,
    -531,   882,  -531,  -531,  -531,  -531,  -531,  -531,  -531,  -530,
    -531,  -325,   292,  -531,  -531,  -531,  -531,   452,  -531,  -531,
    -531,  -531,  -531,  -531,  -531,  -354,  -531,   344,   345,   239,
    -531,   906,  -531,   908
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     5,     6,    35,    23,   306,    79,    97,    98,   162,
     223,   464,   100,   168,   326,   209,   205,   206,    92,    25,
      93,   101,   263,   250,   329,   295,    94,   201,   172,   202,
     102,   283,   377,   414,   530,   437,   531,   532,   634,   438,
     502,   619,   503,   663,   664,   737,   613,   614,   689,   615,
     445,   542,   728,   729,   362,   399,   547,   449,   533,   534,
     415,   416,   535,   536,   537,   548,   599,   267,   268,   426,
     224,   356,   456,   629,   457,   357,   181,   316,   358,   434,
     259,   486,   226,   178,   104,   417,    37,    38,    39,   307,
      40,    41,    66,    42,    43,    44,    45,    46,   400,   499,
     610,   500,   149,   131,    47,    48,     7,   308,   309,   310,
     345,   311,   312,   313,   384,   577,   476,   578,   580,     8,
       9,    10,    11,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   187,   177,   145,   375,   191,   192,   193,   439,   441,
     439,   441,   504,   442,   446,   442,   385,   597,   266,   211,
     247,   248,   212,   440,   600,   440,   330,   331,   620,   465,
     427,   180,    17,     1,   183,   184,   173,   188,   189,   190,
     451,   241,   242,   243,   244,   245,   443,   512,   443,   264,
     366,    18,   488,    53,     2,   239,   254,   199,    20,   432,
     302,   210,   176,   422,    33,    83,    34,    85,   170,   174,
      87,    89,     2,   171,    21,   665,   489,   490,   182,   452,
     650,   513,    22,   453,   160,   234,    24,   236,   237,   238,
     598,   240,   332,   333,   334,   335,   207,   466,   225,    18,
     286,   321,   667,   669,    14,   481,    81,    13,   264,   543,
     544,   258,   258,   264,   261,   262,   303,   304,   521,   522,
     523,   524,   508,   604,    81,   231,   367,   368,   369,   370,
     264,   322,   323,   324,     3,     4,   275,   276,   423,   443,
     539,   726,   285,    15,    16,   660,   661,   265,   598,   265,
     185,   186,     3,     4,    54,   -24,   200,   289,   289,   291,
     378,   429,    31,   424,   185,   186,    84,   576,    86,   579,
     581,    88,    90,   616,   616,   265,   185,   186,   504,   504,
     622,   623,   624,   625,   626,   161,   684,   443,   617,   617,
     381,   443,   443,   682,   515,   293,   443,   208,   582,   200,
     519,   520,    14,   718,   364,   454,   635,   636,   265,   185,
     186,   443,   443,   265,   185,   186,   359,   360,    32,   763,
     764,    49,   605,   712,   606,   579,   727,   761,   762,    51,
     265,   185,   186,   365,   571,   371,   372,   743,    26,   -24,
      55,   265,   185,   186,   574,   575,    52,   425,    19,    80,
      26,    81,   680,   -24,    27,    28,   439,   441,   166,   167,
     683,   442,   339,   382,   383,    67,   782,   681,    34,   696,
     504,   440,   690,   691,   692,   693,   694,   389,    72,   294,
     644,    91,   482,   376,    76,   430,   433,   396,   294,    99,
     443,   -28,   -28,    24,   443,    77,   410,   340,   341,   342,
     148,   343,    24,   397,   344,   398,   509,   724,     3,     4,
     731,   731,   731,   731,   731,   185,   186,   294,   294,   739,
     740,   103,   725,   697,    81,   230,   135,   478,   294,   294,
     698,    24,    24,   176,   288,   425,   425,   425,   425,    95,
     105,    96,    24,    24,   373,   443,   374,   699,   700,   176,
     290,   106,   455,   458,   549,   483,   386,   460,   135,   132,
     484,   485,   550,   551,   552,   553,   461,   379,   380,   173,
     731,   731,   731,   731,   412,   413,   569,   146,   151,   508,
     153,   147,   155,   540,   425,   425,   425,   425,   594,   731,
     731,   731,   731,   355,   431,   150,   387,   152,   505,   462,
     154,   376,   174,   463,   554,   549,   156,   388,   214,   215,
     135,   216,   217,   550,   551,   552,   666,   668,   670,   671,
     672,   218,   589,   565,   157,   583,   590,   591,   159,   666,
     668,   593,   528,   685,   529,   -72,   219,   220,   221,   222,
     425,   163,   425,    57,    58,    59,    60,    61,   607,   608,
     609,   355,   480,    96,   174,   555,   556,   621,   557,   361,
     495,   135,   374,   507,   558,   559,   732,   733,   734,   735,
     296,   297,   412,   570,   673,   444,   595,   165,   717,   169,
     498,   649,   560,   561,   562,   563,   564,   255,   256,    78,
     501,   659,   -18,   678,   679,   721,   722,   742,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,   -18,
     408,    68,    69,    70,    71,   769,   770,   771,   772,   133,
     176,   409,    74,    75,   135,   179,   369,   374,   746,   662,
     760,   493,   494,    81,   778,   779,   780,   781,   393,   394,
     676,   395,   674,   730,   730,   730,   730,   730,   642,   643,
     194,   133,   747,   675,   195,   396,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   196,   197,   198,   204,
     203,   397,   227,   398,   701,   228,   296,   297,   765,   484,
     -18,   298,   299,   300,   301,   229,   738,   232,   173,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   586,   587,
     562,   563,   564,   730,   730,   730,   730,   468,   713,   458,
     296,   297,   233,   235,   249,   298,   299,   703,   301,   246,
     252,   174,   730,   730,   730,   730,   251,   253,   257,   469,
     269,   470,   471,   270,   317,   271,   472,   473,   474,   475,
     272,   273,   318,   107,   274,   277,   744,   278,   376,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   213,   214,   215,   135,   216,   217,   279,   280,   281,
     282,   585,   325,   287,   135,   218,   484,   485,   292,   305,
     319,   133,   314,   134,   315,   173,   135,   320,   327,   651,
     219,   220,   221,   222,   484,   586,   587,   562,   563,   564,
     336,   337,   328,   173,   296,   297,   338,   348,   174,   750,
     751,   752,   753,   652,   653,   654,   655,   656,   174,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   484,   354,
      55,   130,   355,   361,   363,   390,   174,   173,   346,   347,
     391,   349,   350,   351,   352,   353,   392,   652,   653,   654,
     655,   656,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    36,   401,   402,   403,   404,   405,   406,   407,
     174,   411,   418,   421,   419,    36,    36,    36,    36,   420,
     428,   435,   436,   444,   447,   448,    36,    36,   450,   374,
     459,   497,   467,   477,   479,   487,   491,   492,   498,   501,
     518,   506,   510,   545,   517,   516,   525,   526,   527,   538,
     541,   546,   566,   567,   462,   568,   572,   573,   584,   588,
     529,   601,   592,   602,   603,   611,   612,   627,   628,   639,
     630,   633,   637,   638,   640,   641,   604,   175,   645,   646,
     647,   648,   657,   658,   662,   164,   677,   686,   687,   688,
     695,   702,   704,   705,   706,   707,   708,   709,   710,   711,
     715,   718,   716,   719,   720,   736,   741,   158,   745,   748,
     749,   754,   755,   756,   757,   758,   759,   766,   767,   768,
     773,   774,   775,   776,   783,   784,   785,   786,   787,   788,
     284,   723,   514,    50,   618,   496,   596,   777,   714,   260,
     511,   631,    73,     0,   632,     0,     0,    30,    29
};

static const yytype_int16 yycheck[] =
{
      56,   138,   104,    81,   339,   142,   143,   144,   390,   390,
     392,   392,   453,   390,   392,   392,   345,     3,   224,   171,
     201,   202,   175,   390,   544,   392,   296,   297,   558,     4,
     384,   133,     0,     3,   136,   137,    69,   139,   140,   141,
       4,   194,   195,   196,   197,   198,   390,     3,   392,     3,
       4,     3,    55,     1,    24,   192,   209,     3,     5,   388,
     266,   171,     3,     3,     1,     1,     3,     1,   102,   102,
       1,     1,    24,   107,    89,     3,    79,    80,   134,    43,
     610,   461,     3,    47,     1,   187,   102,   189,   190,   191,
      76,   193,   298,   299,   300,   301,     1,    72,   176,     3,
     252,     4,   622,   623,   102,   434,     3,     7,     3,   489,
     490,   213,   214,     3,   216,   217,   269,   270,   472,   473,
     474,   475,   457,     3,     3,   181,   332,   333,   334,   335,
       3,   283,   285,   286,   104,   105,   238,   239,    78,   483,
     484,     3,   252,   104,   105,   619,   620,   103,    76,   103,
     104,   105,   104,   105,   102,     4,   102,   259,   260,   261,
     341,   102,     8,   103,   104,   105,   102,   521,   102,   523,
     524,   102,   102,   555,   556,   103,   104,   105,   619,   620,
     560,   561,   562,   563,   564,   102,    76,   531,   555,   556,
       1,   535,   536,   634,   464,     4,   540,   102,   527,   102,
     470,   471,   102,    76,     4,   102,   586,   587,   103,   104,
     105,   555,   556,   103,   104,   105,   318,   319,    64,   739,
     740,     4,   102,   102,   549,   579,    88,   737,   738,     6,
     103,   104,   105,     4,     4,   337,   338,   711,    14,    88,
       9,   103,   104,   105,     4,     4,   102,   384,     9,     1,
      26,     3,   634,   102,    15,    16,   638,   638,     3,     4,
     638,   638,    31,    74,    75,     4,   776,   634,     3,     1,
     711,   638,   652,   653,   654,   655,   656,   355,     3,    88,
     605,   102,   435,   339,     4,   387,   388,    69,    88,     1,
     634,     3,     4,   102,   638,     4,   374,    66,    67,    68,
      41,    70,   102,    85,    73,    87,   459,   689,   104,   105,
     690,   691,   692,   693,   694,   104,   105,    88,    88,   699,
     700,     3,   689,    55,     3,     4,    58,   429,    88,    88,
      62,   102,   102,     3,     4,   472,   473,   474,   475,     1,
       3,     3,   102,   102,     1,   689,     3,    79,    80,     3,
       4,     4,   408,   409,    44,    55,     4,    60,    58,     4,
      60,    61,    52,    53,    54,    55,    69,    71,    72,    69,
     750,   751,   752,   753,     3,     4,   513,     4,    86,   714,
      88,     4,    90,   485,   521,   522,   523,   524,   541,   769,
     770,   771,   772,     3,     4,     4,    44,     4,   454,   102,
       4,   457,   102,   106,     1,    44,     4,    55,    56,    57,
      58,    59,    60,    52,    53,    54,   622,   623,   624,   625,
     626,    69,   531,   501,   107,   527,   535,   536,     4,   635,
     636,   540,     1,   639,     3,     4,    84,    85,    86,    87,
     577,     4,   579,    32,    33,    34,    35,    36,   550,   551,
     552,     3,     4,     3,   102,    52,    53,   559,    55,     3,
       4,    58,     3,     4,    61,    62,   691,   692,   693,   694,
     102,   103,     3,     4,   627,     3,     4,     4,   684,     4,
       3,     4,    79,    80,    81,    82,    83,   210,   211,     1,
       3,     4,     4,     3,     4,     3,     4,   703,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      44,    36,    37,    38,    39,   750,   751,   752,   753,    53,
       3,    55,    47,    48,    58,    65,   742,     3,     4,     3,
       4,   447,   448,     3,   769,   770,   771,   772,    52,    53,
     628,    55,    44,   690,   691,   692,   693,   694,   601,   602,
       3,    53,   715,    55,     3,    69,    58,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     3,     3,     3,    88,
       4,    85,     4,    87,   662,   102,   102,   103,   741,    60,
     102,   107,   108,   109,   110,     4,   698,     4,    69,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    79,    80,
      81,    82,    83,   750,   751,   752,   753,    78,   674,   675,
     102,   103,     4,     4,   102,   107,   108,   109,   110,    63,
     107,   102,   769,   770,   771,   772,     4,     4,     4,   100,
       3,   102,   103,     3,    42,     4,   107,   108,   109,   110,
       4,     4,    42,     4,     4,     4,   712,     4,   714,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    55,    56,    57,    58,    59,    60,     4,     4,     4,
       4,    55,   107,     4,    58,    69,    60,    61,     4,     3,
      42,    53,     4,    55,     4,    69,    58,    51,     4,    55,
      84,    85,    86,    87,    60,    79,    80,    81,    82,    83,
       4,     4,   102,    69,   102,   103,     4,     4,   102,   107,
     108,   109,   110,    79,    80,    81,    82,    83,   102,    91,
      92,    93,    94,    95,    96,    97,    98,    99,    60,     4,
       9,   102,     3,     3,    90,    47,   102,    69,   306,   307,
      47,   309,   310,   311,   312,   313,    47,    79,    80,    81,
      82,    83,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    23,     4,     4,     4,     4,     4,     4,     4,
     102,     4,     4,     4,   104,    36,    37,    38,    39,   104,
       4,     3,     3,     3,     3,     3,    47,    48,    88,     3,
       3,    77,     4,     4,     4,     4,     4,     4,     3,     3,
     102,     4,     3,    88,     4,   104,     4,     4,     4,     3,
       3,    88,     4,     4,   102,     4,     4,     4,     4,     4,
       3,    77,     4,    77,     4,     4,     3,     3,     3,   109,
       4,     4,     4,     4,     4,     4,     3,   103,     4,     4,
       4,     4,     4,     4,     3,    98,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,    76,     4,     4,     4,     4,     3,    94,     4,     4,
       4,    77,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
     250,   689,   463,    26,   556,   449,   542,   768,   675,   214,
     460,   577,    40,    -1,   579,    -1,    -1,    21,    20
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,   104,   105,   113,   114,   218,   231,   232,
     233,   234,   235,     7,   102,   104,   105,     0,     3,   231,
       5,    89,     3,   116,   102,   131,   137,   231,   231,   235,
     233,     8,    64,     1,     3,   115,   117,   198,   199,   200,
     202,   203,   205,   206,   207,   208,   209,   216,   217,     4,
     131,     6,   102,     1,   102,     9,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,   204,     4,   115,   115,
     115,   115,     3,   203,   115,   115,     4,     4,     1,   118,
       1,     3,   189,     1,   102,     1,   102,     1,   102,     1,
     102,   102,   130,   132,   138,     1,     3,   119,   120,     1,
     124,   133,   142,     3,   196,     3,     4,     4,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
     102,   215,     4,    53,    55,    58,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   193,     4,     4,    41,   214,
       4,   214,     4,   214,     4,   214,     4,   107,   132,     4,
       1,   102,   121,     4,   119,     4,     3,     4,   125,     4,
     102,   107,   140,    69,   102,   122,     3,   190,   195,    65,
     190,   188,   189,   190,   190,   104,   105,   179,   190,   190,
     190,   179,   179,   179,     3,     3,     3,     3,     3,     3,
     102,   139,   141,     4,    88,   128,   129,     1,   102,   127,
     139,   141,   128,    55,    56,    57,    59,    60,    69,    84,
      85,    86,    87,   122,   182,   193,   194,     4,   102,     4,
       4,   189,     4,     4,   190,     4,   190,   190,   190,   179,
     190,   128,   128,   128,   128,   128,    63,   130,   130,   102,
     135,     4,   107,     4,   128,   133,   133,     4,   190,   192,
     192,   190,   190,   134,     3,   103,   177,   179,   180,     3,
       3,     4,     4,     4,     4,   190,   190,     4,     4,     4,
       4,     4,     4,   143,   129,   139,   141,     4,     4,   190,
       4,   190,     4,     4,    88,   137,   102,   103,   107,   108,
     109,   110,   177,   128,   128,     3,   117,   201,   219,   220,
     221,   223,   224,   225,     4,     4,   189,    42,    42,    42,
      51,     4,   141,   128,   128,   107,   126,     4,   102,   136,
     134,   134,   177,   177,   177,   177,     4,     4,     4,    31,
      66,    67,    68,    70,    73,   222,   219,   219,     4,   219,
     219,   219,   219,   219,     4,     3,   183,   187,   190,   190,
     190,     3,   166,    90,     4,     4,     4,   177,   177,   177,
     177,   190,   190,     1,     3,   184,   189,   144,   130,    71,
      72,     1,    74,    75,   226,   183,     4,    44,    55,   193,
      47,    47,    47,    52,    53,    55,    69,    85,    87,   167,
     210,     4,     4,     4,     4,     4,     4,     4,    44,    55,
     193,     4,     3,     4,   145,   172,   173,   197,     4,   104,
     104,     4,     3,    78,   103,   179,   181,   227,     4,   102,
     190,     4,   183,   190,   191,     3,     3,   147,   151,   170,
     171,   174,   175,   195,     3,   162,   147,     3,     3,   169,
      88,     4,    43,    47,   102,   189,   184,   186,   189,     3,
      60,    69,   102,   106,   123,     4,    72,     4,    78,   100,
     102,   103,   107,   108,   109,   110,   228,     4,   190,     4,
       4,   183,   128,    55,    60,    61,   193,     4,    55,    79,
      80,     4,     4,   167,   167,     4,   166,    77,     3,   211,
     213,     3,   152,   154,   176,   189,     4,     4,   184,   128,
       3,   197,     3,   180,   144,   134,   104,     4,   102,   134,
     134,   227,   227,   227,   227,     4,     4,     4,     1,     3,
     146,   148,   149,   170,   171,   174,   175,   176,     3,   195,
     190,     3,   163,   180,   180,    88,    88,   168,   177,    44,
      52,    53,    54,    55,     1,    52,    53,    55,    61,    62,
      79,    80,    81,    82,    83,   193,     4,     4,     4,   179,
       4,     4,     4,     4,     4,     4,   227,   227,   229,   227,
     230,   227,   183,   190,     4,    55,    79,    80,     4,   146,
     146,   146,     4,   146,   128,     4,   162,     3,    76,   178,
     178,    77,    77,     4,     3,   102,   213,   190,   190,   190,
     212,     4,     3,   158,   159,   161,   170,   171,   158,   153,
     211,   190,   180,   180,   180,   180,   180,     3,     3,   185,
       4,   229,   230,     4,   150,   180,   180,     4,     4,   109,
       4,     4,   168,   168,   213,     4,     4,     4,     4,     4,
     211,    55,    79,    80,    81,    82,    83,     4,     4,     4,
     152,   152,     3,   155,   156,     3,   177,   178,   177,   178,
     177,   177,   177,   128,    44,    55,   193,     4,     3,     4,
     170,   171,   176,   147,    76,   177,     4,     4,     4,   160,
     180,   180,   180,   180,   180,     4,     1,    55,    62,    79,
      80,   193,     4,   109,     4,     4,     4,     4,     4,     4,
       4,     4,   102,   189,   186,     3,     4,   177,    76,     4,
       4,     3,     4,   161,   170,   171,     3,    88,   164,   165,
     179,   180,   164,   164,   164,   164,     4,   157,   190,   180,
     180,     3,   177,   152,   189,     4,     4,   128,     4,     4,
     107,   108,   109,   110,    77,     4,     4,     4,     4,     4,
       4,   156,   156,   178,   178,   128,     4,     4,     4,   164,
     164,   164,   164,     4,     4,     4,     4,   185,   164,   164,
     164,   164,   156,     4,     4,     4,     4,     4,     4
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   112,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   116,   117,   117,   118,   118,   119,
     119,   120,   120,   121,   122,   122,   123,   124,   124,   125,
     125,   126,   126,   127,   128,   128,   128,   129,   129,   130,
     130,   130,   131,   131,   132,   132,   133,   133,   133,   134,
     134,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     142,   143,   143,   144,   144,   144,   144,   144,   145,   146,
     146,   146,   146,   147,   147,   147,   147,   147,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   151,   151,   152,
     152,   152,   152,   152,   152,   153,   153,   154,   154,   154,
     154,   154,   155,   155,   155,   156,   156,   156,   156,   157,
     157,   158,   158,   159,   159,   159,   160,   160,   160,   160,
     161,   161,   161,   161,   161,   162,   162,   162,   163,   163,
     164,   164,   164,   164,   165,   165,   165,   165,   166,   166,
     166,   166,   167,   167,   167,   168,   169,   169,   170,   171,
     172,   173,   174,   175,   176,   176,   176,   176,   176,   177,
     177,   177,   177,   177,   177,   177,   178,   178,   178,   179,
     179,   180,   180,   180,   181,   181,   181,   182,   182,   182,
     182,   182,   183,   183,   183,   183,   183,   184,   184,   184,
     184,   184,   185,   185,   185,   185,   186,   186,   187,   187,
     187,   188,   188,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   190,   190,   190,   190,   190,
     190,   190,   190,   191,   191,   192,   192,   193,   194,   195,
     196,   197,   198,   198,   199,   199,   200,   200,   201,   201,
     202,   202,   203,   203,   203,   203,   203,   204,   205,   206,
     206,   207,   207,   208,   208,   209,   209,   210,   210,   210,
     211,   211,   212,   212,   213,   213,   213,   213,   213,   214,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   215,   215,   215,   215,   215,   215,   215,
     215,   215,   215,   216,   217,   218,   218,   219,   219,   219,
     219,   219,   219,   219,   219,   220,   221,   222,   223,   224,
     224,   225,   225,   225,   226,   226,   227,   227,   227,   227,
     227,   227,   228,   228,   228,   228,   229,   229,   230,   230,
     231,   231,   231,   231,   232,   232,   233,   233,   234,   235,
     235
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     5,     4,     2,     2,     2,
       2,     2,     2,     1,     4,     4,     4,     2,     0,     2,
       1,     4,     3,     1,     1,     1,     1,     2,     0,     5,
       3,     2,     0,     1,     4,     4,     1,     3,     0,     4,
       4,     1,     2,     0,     2,     0,     4,     4,     1,     2,
       3,     0,     1,     1,     1,     1,     4,     1,     1,     2,
       0,     2,     0,     6,     2,     2,     2,     0,     4,     2,
       2,     2,     0,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     2,     2,     2,     0,     4,     4,     4,
       7,     5,     5,     1,     1,     2,     0,     4,     4,     5,
       5,     3,     5,     5,     3,     4,     7,     5,     1,     2,
       0,     4,     1,     1,     1,     1,     2,     2,     2,     0,
       5,     5,     5,     5,     5,     5,     5,     4,     2,     0,
       1,     2,     1,     1,     5,     5,     5,     5,     4,     6,
       9,     9,     1,     1,     1,     1,     2,     0,     4,     1,
       4,     1,     7,     5,     5,     5,     5,     5,     5,     4,
       5,     5,     5,     5,     1,     1,     5,     5,     1,     1,
       1,     4,     4,     1,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     7,     3,     2,     4,     5,     4,
       7,     1,     4,     5,     4,     7,     2,     1,     4,     5,
       1,     2,     1,     4,     7,     4,     4,     4,     5,     4,
       5,     5,     6,     6,     5,     1,     4,     4,     4,     5,
       7,     7,     5,     2,     1,     2,     1,     1,     1,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     5,    12,
       4,    12,     4,    12,     4,    11,     4,     3,     3,     0,
       1,     4,     2,     0,     4,     4,     4,     5,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,    12,     5,     2,     2,     2,
       2,     2,     2,     2,     0,     4,     4,     1,     4,     5,
       4,     7,     5,     5,     1,     1,     3,     1,     1,     1,
       4,     3,     3,     3,     3,     3,     1,     2,     1,     2,
       2,     3,     3,     0,     3,     1,     4,     1,     4,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* This macro is provided for backward compatibility. */
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


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
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
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
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
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
  case 2: /* mystartsymbol: c_domain  */
#line 252 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              {top_thing= (yyvsp[0].t_domain); current_analysis->the_domain= (yyvsp[0].t_domain);}
#line 2187 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 3: /* mystartsymbol: c_problem  */
#line 253 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              {top_thing= (yyvsp[0].t_problem); current_analysis->the_problem= (yyvsp[0].t_problem);}
#line 2193 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 4: /* mystartsymbol: c_plan  */
#line 254 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              {top_thing= (yyvsp[0].t_plan); }
#line 2199 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 5: /* c_domain: OPEN_BRAC DEFINE c_domain_name c_preamble CLOSE_BRAC  */
#line 259 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_domain)= (yyvsp[-1].t_domain); (yyval.t_domain)->name= (yyvsp[-2].cp);delete [] (yyvsp[-2].cp);
	if (types_used && !types_defined) {
		yyerrok; log_error(E_FATAL,"Syntax error in domain - no :types section, but types used in definitions."); 
	}
	}
#line 2209 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 6: /* c_domain: OPEN_BRAC DEFINE c_domain_name error  */
#line 265 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; (yyval.t_domain)=static_cast<domain*>(NULL);
       	log_error(E_FATAL,"Syntax error in domain"); }
#line 2216 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 7: /* c_preamble: c_domain_require_def c_preamble  */
#line 271 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                      {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 2222 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 8: /* c_preamble: c_type_names c_preamble  */
#line 272 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                      {types_defined = true; (yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->types= (yyvsp[-1].t_type_list);}
#line 2228 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 9: /* c_preamble: c_domain_constants c_preamble  */
#line 273 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                      {(yyval.t_domain)= (yyvsp[0].t_domain); (yyval.t_domain)->constants= (yyvsp[-1].t_const_symbol_list);}
#line 2234 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 10: /* c_preamble: c_predicates c_preamble  */
#line 274 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                      {(yyval.t_domain)= (yyvsp[0].t_domain); 
                                       (yyval.t_domain)->predicates= (yyvsp[-1].t_pred_decl_list); }
#line 2241 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 11: /* c_preamble: c_functions_def c_preamble  */
#line 276 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                      {(yyval.t_domain)= (yyvsp[0].t_domain); 
                                       (yyval.t_domain)->functions= (yyvsp[-1].t_func_decl_list); }
#line 2248 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 12: /* c_preamble: c_constraints_def c_preamble  */
#line 278 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                      {(yyval.t_domain)= (yyvsp[0].t_domain);
   										(yyval.t_domain)->constraints = (yyvsp[-1].t_con_goal);}
#line 2255 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 13: /* c_preamble: c_structure_defs  */
#line 280 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                      {(yyval.t_domain)= new domain((yyvsp[0].t_structure_store)); }
#line 2261 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 14: /* c_domain_name: OPEN_BRAC PDDLDOMAIN NAME CLOSE_BRAC  */
#line 283 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                                     {(yyval.cp)=(yyvsp[-1].cp);}
#line 2267 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 15: /* c_domain_require_def: OPEN_BRAC REQS c_reqs CLOSE_BRAC  */
#line 289 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    {
	// Stash in analysis object --- we need to refer to it during parse
	//   but domain object is not created yet,
	current_analysis->req |= (yyvsp[-1].t_pddl_req_flag);
	(yyval.t_pddl_req_flag)=(yyvsp[-1].t_pddl_req_flag);
    }
#line 2278 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 16: /* c_domain_require_def: OPEN_BRAC REQS error CLOSE_BRAC  */
#line 296 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
      {yyerrok; 
       log_error(E_FATAL,"Syntax error in requirements declaration.");
       (yyval.t_pddl_req_flag)= 0; }
#line 2286 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 17: /* c_reqs: c_reqs c_require_key  */
#line 302 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                         { (yyval.t_pddl_req_flag)= (yyvsp[-1].t_pddl_req_flag) | (yyvsp[0].t_pddl_req_flag); }
#line 2292 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 18: /* c_reqs: %empty  */
#line 303 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                         { (yyval.t_pddl_req_flag)= 0; }
#line 2298 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 19: /* c_pred_decls: c_pred_decl c_pred_decls  */
#line 309 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
           {(yyval.t_pred_decl_list)=(yyvsp[0].t_pred_decl_list); (yyval.t_pred_decl_list)->push_front((yyvsp[-1].t_pred_decl));}
#line 2304 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 20: /* c_pred_decls: c_pred_decl  */
#line 311 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {  (yyval.t_pred_decl_list)=new pred_decl_list;
           (yyval.t_pred_decl_list)->push_front((yyvsp[0].t_pred_decl)); }
#line 2311 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 21: /* c_pred_decl: OPEN_BRAC c_new_pred_symbol c_typed_var_list CLOSE_BRAC  */
#line 316 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_pred_decl)= new pred_decl((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2317 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 22: /* c_pred_decl: OPEN_BRAC error CLOSE_BRAC  */
#line 318 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {yyerrok; 
        // hope someone makes this error someday
        log_error(E_FATAL,"Syntax error in predicate declaration.");
	(yyval.t_pred_decl)= NULL; }
#line 2326 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 23: /* c_new_pred_symbol: NAME  */
#line 326 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           				current_analysis->buildPredTab());
           delete [] (yyvsp[0].cp); }
#line 2335 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 24: /* c_pred_symbol: EQ  */
#line 333 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_ref("="); 
	      requires(E_EQUALITY); }
#line 2342 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 25: /* c_pred_symbol: NAME  */
#line 335 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2348 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 26: /* c_init_pred_symbol: NAME  */
#line 343 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_pred_symbol)=current_analysis->pred_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2354 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 27: /* c_func_decls: c_func_decls c_func_decl  */
#line 349 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
           {(yyval.t_func_decl_list)=(yyvsp[-1].t_func_decl_list); (yyval.t_func_decl_list)->push_back((yyvsp[0].t_func_decl));}
#line 2360 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 28: /* c_func_decls: %empty  */
#line 350 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 { (yyval.t_func_decl_list)=new func_decl_list; }
#line 2366 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 29: /* c_func_decl: OPEN_BRAC c_new_func_symbol c_typed_var_list CLOSE_BRAC c_ntype  */
#line 355 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_func_decl)= new func_decl((yyvsp[-3].t_func_symbol),(yyvsp[-2].t_var_symbol_list),current_analysis->var_tab_stack.pop());}
#line 2372 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 30: /* c_func_decl: OPEN_BRAC error CLOSE_BRAC  */
#line 357 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; 
	 log_error(E_FATAL,"Syntax error in functor declaration.");
	 (yyval.t_func_decl)= NULL; }
#line 2380 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 31: /* c_ntype: HYPHEN NUMBER  */
#line 363 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                  {(yyval.t_dummy) = NULL;}
#line 2386 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 32: /* c_ntype: %empty  */
#line 363 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                            {(yyval.t_dummy)=NULL;}
#line 2392 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 33: /* c_new_func_symbol: NAME  */
#line 367 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_func_symbol)=current_analysis->func_tab.symbol_put((yyvsp[0].cp));
           current_analysis->var_tab_stack.push(
           		current_analysis->buildFuncTab()); 
           delete [] (yyvsp[0].cp); }
#line 2401 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 34: /* c_typed_var_list: c_var_symbol_list HYPHEN c_primitive_type c_typed_var_list  */
#line 380 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   {  
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */ 
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2414 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 35: /* c_typed_var_list: c_var_symbol_list HYPHEN c_either_type c_typed_var_list  */
#line 389 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   {  
      (yyval.t_var_symbol_list)= (yyvsp[-3].t_var_symbol_list);
      (yyval.t_var_symbol_list)->set_either_types((yyvsp[-1].t_type_list));    /* Set types for variables */
      (yyval.t_var_symbol_list)->splice((yyval.t_var_symbol_list)->end(),*(yyvsp[0].t_var_symbol_list));   /* Join lists */ 
      delete (yyvsp[0].t_var_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2427 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 36: /* c_typed_var_list: c_var_symbol_list  */
#line 398 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   {
       (yyval.t_var_symbol_list)= (yyvsp[0].t_var_symbol_list);
   }
#line 2435 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 37: /* c_var_symbol_list: Q c_declaration_var_symbol c_var_symbol_list  */
#line 410 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     {(yyval.t_var_symbol_list)=(yyvsp[0].t_var_symbol_list); (yyvsp[0].t_var_symbol_list)->push_front((yyvsp[-1].t_var_symbol)); }
#line 2441 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 38: /* c_var_symbol_list: %empty  */
#line 411 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              {(yyval.t_var_symbol_list)= new var_symbol_list; }
#line 2447 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 39: /* c_typed_consts: c_new_const_symbols HYPHEN c_primitive_type c_typed_consts  */
#line 418 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   {  
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list)); /* Join lists */ 
      delete (yyvsp[0].t_const_symbol_list);                   /* Delete (now empty) list */
      requires(E_TYPING);
      types_used = true;
   }
#line 2460 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 40: /* c_typed_consts: c_new_const_symbols HYPHEN c_either_type c_typed_consts  */
#line 427 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   {  
      (yyval.t_const_symbol_list)= (yyvsp[-3].t_const_symbol_list);
      (yyvsp[-3].t_const_symbol_list)->set_either_types((yyvsp[-1].t_type_list));
      (yyvsp[-3].t_const_symbol_list)->splice((yyvsp[-3].t_const_symbol_list)->end(),*(yyvsp[0].t_const_symbol_list));
      delete (yyvsp[0].t_const_symbol_list);
      requires(E_TYPING);
      types_used = true;
   }
#line 2473 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 41: /* c_typed_consts: c_new_const_symbols  */
#line 436 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                        {(yyval.t_const_symbol_list)= (yyvsp[0].t_const_symbol_list);}
#line 2479 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 42: /* c_const_symbols: c_const_symbol c_const_symbols  */
#line 441 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                  {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2485 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 43: /* c_const_symbols: %empty  */
#line 442 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2491 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 44: /* c_new_const_symbols: c_new_const_symbol c_new_const_symbols  */
#line 446 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                          {(yyval.t_const_symbol_list)=(yyvsp[0].t_const_symbol_list); (yyvsp[0].t_const_symbol_list)->push_front((yyvsp[-1].t_const_symbol));}
#line 2497 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 45: /* c_new_const_symbols: %empty  */
#line 447 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               {(yyval.t_const_symbol_list)=new const_symbol_list;}
#line 2503 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 46: /* c_typed_types: c_new_primitive_types HYPHEN c_primitive_type c_typed_types  */
#line 456 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   {  
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_types((yyvsp[-1].t_type));           /* Set types for constants */
       (yyval.t_type_list)->splice((yyval.t_type_list)->end(),*(yyvsp[0].t_type_list)); /* Join lists */ 
       delete (yyvsp[0].t_type_list);                   /* Delete (now empty) list */
   }
#line 2514 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 47: /* c_typed_types: c_new_primitive_types HYPHEN c_either_type c_typed_types  */
#line 463 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   {  
   // This parse needs to be excluded, we think (DPL&MF: 6/9/01)
       (yyval.t_type_list)= (yyvsp[-3].t_type_list);
       (yyval.t_type_list)->set_either_types((yyvsp[-1].t_type_list));
       (yyval.t_type_list)->splice((yyvsp[-3].t_type_list)->end(),*(yyvsp[0].t_type_list));
       delete (yyvsp[0].t_type_list);
   }
#line 2526 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 48: /* c_typed_types: c_new_primitive_types  */
#line 472 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
      { (yyval.t_type_list)= (yyvsp[0].t_type_list); }
#line 2532 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 49: /* c_parameter_symbols: c_parameter_symbols c_const_symbol  */
#line 478 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         {(yyval.t_parameter_symbol_list)=(yyvsp[-1].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_const_symbol)); }
#line 2538 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 50: /* c_parameter_symbols: c_parameter_symbols Q c_var_symbol  */
#line 480 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         {(yyval.t_parameter_symbol_list)=(yyvsp[-2].t_parameter_symbol_list); (yyval.t_parameter_symbol_list)->push_back((yyvsp[0].t_var_symbol)); }
#line 2544 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 51: /* c_parameter_symbols: %empty  */
#line 481 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_parameter_symbol_list)= new parameter_symbol_list;}
#line 2550 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 52: /* c_declaration_var_symbol: NAME  */
#line 488 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_var_symbol)= current_analysis->var_tab_stack.top()->symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2556 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 53: /* c_var_symbol: NAME  */
#line 494 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_var_symbol)= current_analysis->var_tab_stack.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2562 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 54: /* c_const_symbol: NAME  */
#line 498 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_get((yyvsp[0].cp)); delete [] (yyvsp[0].cp); }
#line 2568 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 55: /* c_new_const_symbol: NAME  */
#line 502 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         { (yyval.t_const_symbol)= current_analysis->const_tab.symbol_put((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2574 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 56: /* c_either_type: OPEN_BRAC EITHER c_primitive_types CLOSE_BRAC  */
#line 507 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_type_list)= (yyvsp[-1].t_type_list); }
#line 2580 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 57: /* c_new_primitive_type: NAME  */
#line 512 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2586 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 58: /* c_primitive_type: NAME  */
#line 519 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_type)= current_analysis->pddl_type_tab.symbol_ref((yyvsp[0].cp)); delete [] (yyvsp[0].cp);}
#line 2592 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 59: /* c_new_primitive_types: c_new_primitive_types c_new_primitive_type  */
#line 524 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2598 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 60: /* c_new_primitive_types: %empty  */
#line 525 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_type_list)= new pddl_type_list;}
#line 2604 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 61: /* c_primitive_types: c_primitive_types c_primitive_type  */
#line 530 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_type_list)= (yyvsp[-1].t_type_list); (yyval.t_type_list)->push_back((yyvsp[0].t_type));}
#line 2610 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 62: /* c_primitive_types: %empty  */
#line 531 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_type_list)= new pddl_type_list;}
#line 2616 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 63: /* c_init_els: c_init_els OPEN_BRAC EQ c_f_head c_number CLOSE_BRAC  */
#line 536 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=(yyvsp[-5].t_effect_lists);
	  (yyval.t_effect_lists)->assign_effects.push_back(new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_num_expression)));  
          if((yyvsp[-2].t_func_term)->getFunction()->getName()=="total-cost")
          {
          	requires(E_ACTIONCOSTS); 
          	// Should also check that $5 is 0...
		  }
          else
          {
          	requires(E_NFLUENTS); 
          }
	}
#line 2633 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 64: /* c_init_els: c_init_els c_init_pos_simple_effect  */
#line 549 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2639 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 65: /* c_init_els: c_init_els c_init_neg_simple_effect  */
#line 551 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect)); }
#line 2645 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 66: /* c_init_els: c_init_els c_timed_initial_literal  */
#line 553 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2651 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 67: /* c_init_els: %empty  */
#line 555 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)= new effect_lists;}
#line 2657 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 68: /* c_timed_initial_literal: OPEN_BRAC AT_TIME c_init_els CLOSE_BRAC  */
#line 560 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
   { requires(E_TIMED_INITIAL_LITERALS); 
   		(yyval.t_timed_effect)=new timed_initial_literal((yyvsp[-1].t_effect_lists),(yyvsp[-2].fval));}
#line 2664 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 69: /* c_effects: c_a_effect c_effects  */
#line 565 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                  {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->append_effects((yyvsp[-1].t_effect_lists)); delete (yyvsp[-1].t_effect_lists);}
#line 2670 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 70: /* c_effects: c_cond_effect c_effects  */
#line 566 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                  {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[-1].t_cond_effect)); 
                                      requires(E_COND_EFFS);}
#line 2677 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 71: /* c_effects: c_forall_effect c_effects  */
#line 568 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                  {(yyval.t_effect_lists)=(yyvsp[0].t_effect_lists); (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[-1].t_forall_effect));
                                      requires(E_COND_EFFS);}
#line 2684 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 72: /* c_effects: %empty  */
#line 570 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                  {(yyval.t_effect_lists)=new effect_lists(); }
#line 2690 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 73: /* c_effect: c_conj_effect  */
#line 579 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                        {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2696 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 74: /* c_effect: c_pos_simple_effect  */
#line 580 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2702 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 75: /* c_effect: c_neg_simple_effect  */
#line 581 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2708 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 76: /* c_effect: c_cond_effect  */
#line 582 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->cond_effects.push_front((yyvsp[0].t_cond_effect));}
#line 2714 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 77: /* c_effect: c_forall_effect  */
#line 583 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->forall_effects.push_front((yyvsp[0].t_forall_effect));}
#line 2720 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 78: /* c_a_effect: OPEN_BRAC AND c_p_effects CLOSE_BRAC  */
#line 587 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                         {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2726 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 79: /* c_a_effect: c_p_effect  */
#line 588 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                      {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2732 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 80: /* c_p_effect: c_neg_simple_effect  */
#line 593 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2738 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 81: /* c_p_effect: c_pos_simple_effect  */
#line 595 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2744 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 82: /* c_p_effect: c_assignment  */
#line 597 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2751 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 83: /* c_p_effects: c_p_effects c_neg_simple_effect  */
#line 603 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2757 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 84: /* c_p_effects: c_p_effects c_pos_simple_effect  */
#line 604 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2763 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 85: /* c_p_effects: c_p_effects c_assignment  */
#line 605 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 2770 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 86: /* c_p_effects: %empty  */
#line 607 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 { (yyval.t_effect_lists)= new effect_lists; }
#line 2776 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 87: /* c_conj_effect: OPEN_BRAC AND c_effects CLOSE_BRAC  */
#line 612 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2782 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 88: /* c_conj_effect: OPEN_BRAC AND error CLOSE_BRAC  */
#line 614 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; (yyval.t_effect_lists)=NULL;
	 log_error(E_FATAL,"Syntax error in (and ...)");
	}
#line 2790 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 89: /* c_da_effect: OPEN_BRAC AND c_da_effects CLOSE_BRAC  */
#line 622 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2796 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 90: /* c_da_effect: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_da_effect CLOSE_BRAC  */
#line 627 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)= new effect_lists; 
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop())); 
          requires(E_COND_EFFS);}
#line 2805 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 91: /* c_da_effect: OPEN_BRAC WHEN c_da_gd c_da_effect CLOSE_BRAC  */
#line 632 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2814 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 92: /* c_da_effect: OPEN_BRAC WHENEVER c_goal_descriptor c_da_cts_only_effect CLOSE_BRAC  */
#line 637 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2823 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 93: /* c_da_effect: c_timed_effect  */
#line 642 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2830 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 94: /* c_da_effect: c_assignment  */
#line 645 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
          requires(E_NFLUENTS); }
#line 2838 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 95: /* c_da_effects: c_da_effects c_da_effect  */
#line 651 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                             { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2844 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 96: /* c_da_effects: %empty  */
#line 652 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                { (yyval.t_effect_lists)= new effect_lists; }
#line 2850 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 97: /* c_timed_effect: OPEN_BRAC AT_START c_a_effect_da CLOSE_BRAC  */
#line 657 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_START);}
#line 2856 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 98: /* c_timed_effect: OPEN_BRAC AT_END c_a_effect_da CLOSE_BRAC  */
#line 659 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_timed_effect)=new timed_effect((yyvsp[-1].t_effect_lists),E_AT_END);}
#line 2862 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 99: /* c_timed_effect: OPEN_BRAC INCREASE c_f_head c_f_exp_t CLOSE_BRAC  */
#line 661 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2870 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 100: /* c_timed_effect: OPEN_BRAC DECREASE c_f_head c_f_exp_t CLOSE_BRAC  */
#line 665 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2878 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 101: /* c_timed_effect: OPEN_BRAC error CLOSE_BRAC  */
#line 669 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in timed effect"); }
#line 2885 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 102: /* c_cts_only_timed_effect: OPEN_BRAC INCREASE c_f_head c_f_exp_t CLOSE_BRAC  */
#line 675 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 2893 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 103: /* c_cts_only_timed_effect: OPEN_BRAC DECREASE c_f_head c_f_exp_t CLOSE_BRAC  */
#line 679 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_timed_effect)=new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_timed_effect)->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 2901 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 104: /* c_cts_only_timed_effect: OPEN_BRAC error CLOSE_BRAC  */
#line 683 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; (yyval.t_timed_effect)=NULL;
	log_error(E_FATAL,"Syntax error in conditional continuous effect"); }
#line 2908 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 105: /* c_da_cts_only_effect: OPEN_BRAC AND c_da_cts_only_effects CLOSE_BRAC  */
#line 689 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); }
#line 2914 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 106: /* c_da_cts_only_effect: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_da_cts_only_effect CLOSE_BRAC  */
#line 694 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)= new effect_lists; 
          (yyval.t_effect_lists)->forall_effects.push_back(
	       new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop())); 
          requires(E_COND_EFFS);}
#line 2923 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 107: /* c_da_cts_only_effect: OPEN_BRAC WHENEVER c_goal_descriptor c_da_cts_only_effect CLOSE_BRAC  */
#line 699 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)= new effect_lists;
	  (yyval.t_effect_lists)->cond_assign_effects.push_back(
	       new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)));
          requires(E_COND_EFFS); }
#line 2932 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 108: /* c_da_cts_only_effect: c_cts_only_timed_effect  */
#line 704 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_effect_lists)=new effect_lists;
          (yyval.t_effect_lists)->timed_effects.push_back((yyvsp[0].t_timed_effect)); }
#line 2939 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 109: /* c_da_cts_only_effects: c_da_cts_only_effects c_da_cts_only_effect  */
#line 709 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                               { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 2945 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 110: /* c_da_cts_only_effects: %empty  */
#line 710 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                { (yyval.t_effect_lists)= new effect_lists; }
#line 2951 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 111: /* c_a_effect_da: OPEN_BRAC AND c_p_effects_da CLOSE_BRAC  */
#line 714 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                            {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists);}
#line 2957 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 112: /* c_a_effect_da: c_p_effect_da  */
#line 715 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                         {(yyval.t_effect_lists)= (yyvsp[0].t_effect_lists);}
#line 2963 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 113: /* c_p_effect_da: c_neg_simple_effect  */
#line 720 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->del_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2969 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 114: /* c_p_effect_da: c_pos_simple_effect  */
#line 722 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->add_effects.push_front((yyvsp[0].t_simple_effect));}
#line 2975 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 115: /* c_p_effect_da: c_f_assign_da  */
#line 724 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; (yyval.t_effect_lists)->assign_effects.push_front((yyvsp[0].t_assignment));
         requires(E_NFLUENTS);}
#line 2982 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 116: /* c_p_effects_da: c_p_effects_da c_neg_simple_effect  */
#line 730 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                       {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->del_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2988 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 117: /* c_p_effects_da: c_p_effects_da c_pos_simple_effect  */
#line 731 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                       {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->add_effects.push_back((yyvsp[0].t_simple_effect));}
#line 2994 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 118: /* c_p_effects_da: c_p_effects_da c_f_assign_da  */
#line 732 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                       {(yyval.t_effect_lists)= (yyvsp[-1].t_effect_lists); (yyval.t_effect_lists)->assign_effects.push_back((yyvsp[0].t_assignment));
                                     requires(E_NFLUENTS); }
#line 3001 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 119: /* c_p_effects_da: %empty  */
#line 734 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 { (yyval.t_effect_lists)= new effect_lists; }
#line 3007 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 120: /* c_f_assign_da: OPEN_BRAC ASSIGN c_f_head c_f_exp_da CLOSE_BRAC  */
#line 740 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 3013 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 121: /* c_f_assign_da: OPEN_BRAC INCREASE c_f_head c_f_exp_da CLOSE_BRAC  */
#line 742 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 3019 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 122: /* c_f_assign_da: OPEN_BRAC DECREASE c_f_head c_f_exp_da CLOSE_BRAC  */
#line 744 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 3025 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 123: /* c_f_assign_da: OPEN_BRAC SCALE_UP c_f_head c_f_exp_da CLOSE_BRAC  */
#line 746 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 3031 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 124: /* c_f_assign_da: OPEN_BRAC SCALE_DOWN c_f_head c_f_exp_da CLOSE_BRAC  */
#line 748 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 3037 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 125: /* c_proc_effect: OPEN_BRAC INCREASE c_f_head c_f_exp_t CLOSE_BRAC  */
#line 753 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; 
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression))); }
#line 3047 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 126: /* c_proc_effect: OPEN_BRAC DECREASE c_f_head c_f_exp_t CLOSE_BRAC  */
#line 759 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_effect_lists)=new effect_lists; 
         timed_effect * te = new timed_effect(new effect_lists,E_CONTINUOUS);
         (yyval.t_effect_lists)->timed_effects.push_front(te);
         te->effs->assign_effects.push_front(
	     new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression))); }
#line 3057 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 127: /* c_proc_effect: OPEN_BRAC AND c_proc_effects CLOSE_BRAC  */
#line 765 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_effect_lists) = (yyvsp[-1].t_effect_lists);}
#line 3063 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 128: /* c_proc_effects: c_proc_effects c_proc_effect  */
#line 769 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                               { (yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists); (yyvsp[-1].t_effect_lists)->append_effects((yyvsp[0].t_effect_lists)); delete (yyvsp[0].t_effect_lists); }
#line 3069 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 129: /* c_proc_effects: %empty  */
#line 770 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                { (yyval.t_effect_lists)= new effect_lists; }
#line 3075 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 130: /* c_f_exp_da: c_binary_expr_da  */
#line 774 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                     {(yyval.t_expression)= (yyvsp[0].t_expression);}
#line 3081 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 131: /* c_f_exp_da: Q DURATION_VAR  */
#line 775 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                   {(yyval.t_expression)= new special_val_expr(E_DURATION_VAR);
                    requires( E_DURATION_INEQUALITIES );}
#line 3088 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 132: /* c_f_exp_da: c_number  */
#line 777 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3094 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 133: /* c_f_exp_da: c_f_head  */
#line 778 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              { (yyval.t_expression)= (yyvsp[0].t_func_term); }
#line 3100 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 134: /* c_binary_expr_da: OPEN_BRAC PLUS c_f_exp_da c_f_exp_da CLOSE_BRAC  */
#line 783 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3106 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 135: /* c_binary_expr_da: OPEN_BRAC HYPHEN c_f_exp_da c_f_exp_da CLOSE_BRAC  */
#line 785 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3112 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 136: /* c_binary_expr_da: OPEN_BRAC MUL c_f_exp_da c_f_exp_da CLOSE_BRAC  */
#line 787 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3118 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 137: /* c_binary_expr_da: OPEN_BRAC DIV c_f_exp_da c_f_exp_da CLOSE_BRAC  */
#line 789 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); }
#line 3124 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 138: /* c_duration_constraint: OPEN_BRAC AND c_duration_constraints CLOSE_BRAC  */
#line 794 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 3130 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 139: /* c_duration_constraint: OPEN_BRAC c_d_op Q DURATION_VAR c_d_value CLOSE_BRAC  */
#line 796 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_goal)= new timed_goal(new comparison((yyvsp[-4].t_comparison_op),
        			new special_val_expr(E_DURATION_VAR),(yyvsp[-1].t_expression)),E_AT_START); }
#line 3137 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 140: /* c_duration_constraint: OPEN_BRAC AT_START OPEN_BRAC c_d_op Q DURATION_VAR c_d_value CLOSE_BRAC CLOSE_BRAC  */
#line 799 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_START);}
#line 3144 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 141: /* c_duration_constraint: OPEN_BRAC AT_END OPEN_BRAC c_d_op Q DURATION_VAR c_d_value CLOSE_BRAC CLOSE_BRAC  */
#line 802 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                { (yyval.t_goal) = new timed_goal(new comparison((yyvsp[-5].t_comparison_op),
					new special_val_expr(E_DURATION_VAR),(yyvsp[-2].t_expression)),E_AT_END);}
#line 3151 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 142: /* c_d_op: LESSEQ  */
#line 807 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             {(yyval.t_comparison_op)= E_LESSEQ; requires(E_DURATION_INEQUALITIES);}
#line 3157 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 143: /* c_d_op: GREATEQ  */
#line 808 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             {(yyval.t_comparison_op)= E_GREATEQ; requires(E_DURATION_INEQUALITIES);}
#line 3163 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 144: /* c_d_op: EQ  */
#line 809 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             {(yyval.t_comparison_op)= E_EQUALS; }
#line 3169 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 145: /* c_d_value: c_f_exp  */
#line 817 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             {(yyval.t_expression)= (yyvsp[0].t_expression); }
#line 3175 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 146: /* c_duration_constraints: c_duration_constraints c_duration_constraint  */
#line 822 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 3181 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 147: /* c_duration_constraints: %empty  */
#line 824 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_goal_list)= new goal_list; }
#line 3187 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 148: /* c_neg_simple_effect: OPEN_BRAC NOT c_proposition CLOSE_BRAC  */
#line 829 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3193 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 149: /* c_pos_simple_effect: c_proposition  */
#line 834 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3199 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 150: /* c_init_neg_simple_effect: OPEN_BRAC NOT c_init_proposition CLOSE_BRAC  */
#line 841 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_simple_effect)= new simple_effect((yyvsp[-1].t_proposition)); }
#line 3205 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 151: /* c_init_pos_simple_effect: c_init_proposition  */
#line 846 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_simple_effect)= new simple_effect((yyvsp[0].t_proposition)); }
#line 3211 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 152: /* c_forall_effect: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_effect CLOSE_BRAC  */
#line 851 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_forall_effect)= new forall_effect((yyvsp[-1].t_effect_lists), (yyvsp[-3].t_var_symbol_list), current_analysis->var_tab_stack.pop());}
#line 3217 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 153: /* c_cond_effect: OPEN_BRAC WHEN c_goal_descriptor c_effects CLOSE_BRAC  */
#line 856 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_cond_effect)= new cond_effect((yyvsp[-2].t_goal),(yyvsp[-1].t_effect_lists)); }
#line 3223 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 154: /* c_assignment: OPEN_BRAC ASSIGN c_f_head c_f_exp CLOSE_BRAC  */
#line 861 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_ASSIGN,(yyvsp[-1].t_expression)); }
#line 3229 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 155: /* c_assignment: OPEN_BRAC INCREASE c_f_head c_f_exp CLOSE_BRAC  */
#line 863 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_INCREASE,(yyvsp[-1].t_expression)); }
#line 3235 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 156: /* c_assignment: OPEN_BRAC DECREASE c_f_head c_f_exp CLOSE_BRAC  */
#line 865 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_DECREASE,(yyvsp[-1].t_expression)); }
#line 3241 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 157: /* c_assignment: OPEN_BRAC SCALE_UP c_f_head c_f_exp CLOSE_BRAC  */
#line 867 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_UP,(yyvsp[-1].t_expression)); }
#line 3247 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 158: /* c_assignment: OPEN_BRAC SCALE_DOWN c_f_head c_f_exp CLOSE_BRAC  */
#line 869 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
     { (yyval.t_assignment)= new assignment((yyvsp[-2].t_func_term),E_SCALE_DOWN,(yyvsp[-1].t_expression)); }
#line 3253 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 159: /* c_f_exp: OPEN_BRAC HYPHEN c_f_exp CLOSE_BRAC  */
#line 874 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new uminus_expression((yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3259 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 160: /* c_f_exp: OPEN_BRAC PLUS c_f_exp c_f_exp CLOSE_BRAC  */
#line 876 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new plus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3265 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 161: /* c_f_exp: OPEN_BRAC HYPHEN c_f_exp c_f_exp CLOSE_BRAC  */
#line 878 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new minus_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3271 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 162: /* c_f_exp: OPEN_BRAC MUL c_f_exp c_f_exp CLOSE_BRAC  */
#line 880 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3277 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 163: /* c_f_exp: OPEN_BRAC DIV c_f_exp c_f_exp CLOSE_BRAC  */
#line 882 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_expression)= new div_expression((yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); requires(E_NFLUENTS); }
#line 3283 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 164: /* c_f_exp: c_number  */
#line 883 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             { (yyval.t_expression)=(yyvsp[0].t_num_expression); }
#line 3289 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 165: /* c_f_exp: c_f_head  */
#line 884 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              { (yyval.t_expression)= (yyvsp[0].t_func_term); requires(E_NFLUENTS); }
#line 3295 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 166: /* c_f_exp_t: OPEN_BRAC MUL HASHT c_f_exp CLOSE_BRAC  */
#line 889 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_expression)= new mul_expression(new special_val_expr(E_HASHT),(yyvsp[-1].t_expression)); }
#line 3301 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 167: /* c_f_exp_t: OPEN_BRAC MUL c_f_exp HASHT CLOSE_BRAC  */
#line 891 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_expression)= new mul_expression((yyvsp[-2].t_expression), new special_val_expr(E_HASHT)); }
#line 3307 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 168: /* c_f_exp_t: HASHT  */
#line 893 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_expression)= new special_val_expr(E_HASHT); }
#line 3313 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 169: /* c_number: INTVAL  */
#line 898 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              { (yyval.t_num_expression)=new int_expression((yyvsp[0].ival));   }
#line 3319 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 170: /* c_number: FLOATVAL  */
#line 899 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
              { (yyval.t_num_expression)=new float_expression((yyvsp[0].fval)); }
#line 3325 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 171: /* c_f_head: OPEN_BRAC FUNCTION_SYMBOL c_parameter_symbols CLOSE_BRAC  */
#line 903 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3331 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 172: /* c_f_head: OPEN_BRAC NAME c_parameter_symbols CLOSE_BRAC  */
#line 906 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3337 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 173: /* c_f_head: FUNCTION_SYMBOL  */
#line 908 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3344 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 174: /* c_ground_f_head: OPEN_BRAC FUNCTION_SYMBOL c_parameter_symbols CLOSE_BRAC  */
#line 926 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3350 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 175: /* c_ground_f_head: OPEN_BRAC NAME c_parameter_symbols CLOSE_BRAC  */
#line 928 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[-2].cp)), (yyvsp[-1].t_parameter_symbol_list)); delete [] (yyvsp[-2].cp); }
#line 3356 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 176: /* c_ground_f_head: FUNCTION_SYMBOL  */
#line 930 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        { (yyval.t_func_term)=new func_term( current_analysis->func_tab.symbol_get((yyvsp[0].cp)),
                            new parameter_symbol_list); delete [] (yyvsp[0].cp);}
#line 3363 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 177: /* c_comparison_op: GREATER  */
#line 935 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               { (yyval.t_comparison_op)= E_GREATER; }
#line 3369 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 178: /* c_comparison_op: GREATEQ  */
#line 936 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               { (yyval.t_comparison_op)= E_GREATEQ; }
#line 3375 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 179: /* c_comparison_op: LESS  */
#line 937 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               { (yyval.t_comparison_op)= E_LESS; }
#line 3381 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 180: /* c_comparison_op: LESSEQ  */
#line 938 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               { (yyval.t_comparison_op)= E_LESSEQ; }
#line 3387 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 181: /* c_comparison_op: EQ  */
#line 939 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               { (yyval.t_comparison_op)= E_EQUALS; }
#line 3393 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 182: /* c_pre_goal_descriptor: c_pref_goal_descriptor  */
#line 952 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_goal)= (yyvsp[0].t_goal);}
#line 3399 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 183: /* c_pre_goal_descriptor: OPEN_BRAC AND c_pre_goal_descriptor_list CLOSE_BRAC  */
#line 959 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3405 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 184: /* c_pre_goal_descriptor: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_pre_goal_descriptor CLOSE_BRAC  */
#line 962 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3412 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 185: /* c_pre_goal_descriptor: OPEN_BRAC AND CLOSE_BRAC  */
#line 964 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                            {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3418 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 186: /* c_pre_goal_descriptor: OPEN_BRAC CLOSE_BRAC  */
#line 965 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                        {(yyval.t_goal) = new conj_goal(new goal_list);}
#line 3424 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 187: /* c_pref_con_goal: OPEN_BRAC PREFERENCE c_constraint_goal CLOSE_BRAC  */
#line 970 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3430 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 188: /* c_pref_con_goal: OPEN_BRAC PREFERENCE NAME c_constraint_goal CLOSE_BRAC  */
#line 972 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3436 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 189: /* c_pref_con_goal: OPEN_BRAC AND c_pref_con_goal_list CLOSE_BRAC  */
#line 974 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3442 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 190: /* c_pref_con_goal: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_pref_goal CLOSE_BRAC  */
#line 977 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3449 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 191: /* c_pref_con_goal: c_constraint_goal  */
#line 980 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_con_goal) = (yyvsp[0].t_con_goal);}
#line 3455 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 192: /* c_pref_goal: OPEN_BRAC PREFERENCE c_constraint_goal CLOSE_BRAC  */
#line 985 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new preference((yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3461 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 193: /* c_pref_goal: OPEN_BRAC PREFERENCE NAME c_constraint_goal CLOSE_BRAC  */
#line 987 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new preference((yyvsp[-2].cp),(yyvsp[-1].t_con_goal));requires(E_PREFERENCES);}
#line 3467 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 194: /* c_pref_goal: OPEN_BRAC AND c_pref_con_goal_list CLOSE_BRAC  */
#line 989 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new conj_goal((yyvsp[-1].t_goal_list));}
#line 3473 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 195: /* c_pref_goal: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_pref_goal CLOSE_BRAC  */
#line 992 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_con_goal)= new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
                requires(E_UNIV_PRECS);}
#line 3480 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 196: /* c_pref_con_goal_list: c_pref_con_goal_list c_pref_con_goal  */
#line 998 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3486 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 197: /* c_pref_con_goal_list: c_pref_con_goal  */
#line 1000 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3492 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 198: /* c_pref_goal_descriptor: OPEN_BRAC PREFERENCE c_goal_descriptor CLOSE_BRAC  */
#line 1005 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal)= new preference((yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3498 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 199: /* c_pref_goal_descriptor: OPEN_BRAC PREFERENCE NAME c_goal_descriptor CLOSE_BRAC  */
#line 1007 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal)= new preference((yyvsp[-2].cp),(yyvsp[-1].t_goal)); requires(E_PREFERENCES);}
#line 3504 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 200: /* c_pref_goal_descriptor: c_goal_descriptor  */
#line 1011 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal)=(yyvsp[0].t_goal);}
#line 3510 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 201: /* c_constraint_goal_list: c_constraint_goal_list c_constraint_goal  */
#line 1016 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal_list) = (yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3516 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 202: /* c_constraint_goal_list: c_constraint_goal  */
#line 1018 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal_list) = new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_con_goal));}
#line 3522 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 203: /* c_constraint_goal: OPEN_BRAC AND c_constraint_goal_list CLOSE_BRAC  */
#line 1023 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3528 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 204: /* c_constraint_goal: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_constraint_goal CLOSE_BRAC  */
#line 1025 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new qfied_goal(E_FORALL,(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_con_goal),current_analysis->var_tab_stack.pop());
        requires(E_UNIV_PRECS);}
#line 3535 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 205: /* c_constraint_goal: OPEN_BRAC AT_END c_goal_descriptor CLOSE_BRAC  */
#line 1028 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_ATEND,(yyvsp[-1].t_goal));}
#line 3541 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 206: /* c_constraint_goal: OPEN_BRAC ALWAYS c_goal_descriptor CLOSE_BRAC  */
#line 1030 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_ALWAYS,(yyvsp[-1].t_goal));}
#line 3547 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 207: /* c_constraint_goal: OPEN_BRAC SOMETIME c_goal_descriptor CLOSE_BRAC  */
#line 1032 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_SOMETIME,(yyvsp[-1].t_goal));}
#line 3553 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 208: /* c_constraint_goal: OPEN_BRAC WITHIN c_number c_goal_descriptor CLOSE_BRAC  */
#line 1034 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_WITHIN,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),0.0);delete (yyvsp[-2].t_num_expression);}
#line 3559 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 209: /* c_constraint_goal: OPEN_BRAC ATMOSTONCE c_goal_descriptor CLOSE_BRAC  */
#line 1036 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_ATMOSTONCE,(yyvsp[-1].t_goal));}
#line 3565 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 210: /* c_constraint_goal: OPEN_BRAC SOMETIMEAFTER c_goal_descriptor c_goal_descriptor CLOSE_BRAC  */
#line 1038 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEAFTER,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3571 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 211: /* c_constraint_goal: OPEN_BRAC SOMETIMEBEFORE c_goal_descriptor c_goal_descriptor CLOSE_BRAC  */
#line 1040 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_SOMETIMEBEFORE,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal));}
#line 3577 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 212: /* c_constraint_goal: OPEN_BRAC ALWAYSWITHIN c_number c_goal_descriptor c_goal_descriptor CLOSE_BRAC  */
#line 1042 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_ALWAYSWITHIN,(yyvsp[-1].t_goal),(yyvsp[-2].t_goal),(yyvsp[-3].t_num_expression)->double_value(),0.0);delete (yyvsp[-3].t_num_expression);}
#line 3583 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 213: /* c_constraint_goal: OPEN_BRAC HOLDDURING c_number c_number c_goal_descriptor CLOSE_BRAC  */
#line 1044 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_HOLDDURING,(yyvsp[-1].t_goal),NULL,(yyvsp[-2].t_num_expression)->double_value(),(yyvsp[-3].t_num_expression)->double_value());delete (yyvsp[-3].t_num_expression);delete (yyvsp[-2].t_num_expression);}
#line 3589 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 214: /* c_constraint_goal: OPEN_BRAC HOLDAFTER c_number c_goal_descriptor CLOSE_BRAC  */
#line 1046 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = new constraint_goal(E_HOLDAFTER,(yyvsp[-1].t_goal),NULL,0.0,(yyvsp[-2].t_num_expression)->double_value());delete (yyvsp[-2].t_num_expression);}
#line 3595 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 215: /* c_goal_descriptor: c_proposition  */
#line 1051 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new simple_goal((yyvsp[0].t_proposition),E_POS);}
#line 3601 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 216: /* c_goal_descriptor: OPEN_BRAC NOT c_goal_descriptor CLOSE_BRAC  */
#line 1053 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new neg_goal((yyvsp[-1].t_goal));simple_goal * s = dynamic_cast<simple_goal *>((yyvsp[-1].t_goal));
       if(s && s->getProp()->head->getName()=="=") {requires(E_EQUALITY);} 
       else{requires(E_NEGATIVE_PRECONDITIONS);};}
#line 3609 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 217: /* c_goal_descriptor: OPEN_BRAC AND c_goal_list CLOSE_BRAC  */
#line 1057 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list));}
#line 3615 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 218: /* c_goal_descriptor: OPEN_BRAC OR c_goal_list CLOSE_BRAC  */
#line 1059 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new disj_goal((yyvsp[-1].t_goal_list));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3622 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 219: /* c_goal_descriptor: OPEN_BRAC IMPLY c_goal_descriptor c_goal_descriptor CLOSE_BRAC  */
#line 1062 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new imply_goal((yyvsp[-2].t_goal),(yyvsp[-1].t_goal));
        requires(E_DISJUNCTIVE_PRECONDS);}
#line 3629 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 220: /* c_goal_descriptor: OPEN_BRAC c_forall OPEN_BRAC c_typed_var_list CLOSE_BRAC c_goal_descriptor CLOSE_BRAC  */
#line 1066 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3635 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 221: /* c_goal_descriptor: OPEN_BRAC c_exists OPEN_BRAC c_typed_var_list CLOSE_BRAC c_goal_descriptor CLOSE_BRAC  */
#line 1069 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new qfied_goal((yyvsp[-5].t_quantifier),(yyvsp[-3].t_var_symbol_list),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3641 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 222: /* c_goal_descriptor: OPEN_BRAC c_comparison_op c_f_exp c_f_exp CLOSE_BRAC  */
#line 1071 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_goal)= new comparison((yyvsp[-3].t_comparison_op),(yyvsp[-2].t_expression),(yyvsp[-1].t_expression)); 
        requires(E_NFLUENTS);}
#line 3648 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 223: /* c_pre_goal_descriptor_list: c_pre_goal_descriptor_list c_pre_goal_descriptor  */
#line 1077 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3654 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 224: /* c_pre_goal_descriptor_list: c_pre_goal_descriptor  */
#line 1079 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3660 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 225: /* c_goal_list: c_goal_list c_goal_descriptor  */
#line 1084 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyvsp[-1].t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3666 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 226: /* c_goal_list: c_goal_descriptor  */
#line 1086 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal_list)= new goal_list; (yyval.t_goal_list)->push_back((yyvsp[0].t_goal));}
#line 3672 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 227: /* c_forall: FORALL  */
#line 1096 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_quantifier)=E_FORALL; 
        current_analysis->var_tab_stack.push(
        		current_analysis->buildForallTab());}
#line 3680 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 228: /* c_exists: EXISTS  */
#line 1103 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_quantifier)=E_EXISTS;
        current_analysis->var_tab_stack.push(
        	current_analysis->buildExistsTab());}
#line 3688 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 229: /* c_proposition: OPEN_BRAC c_pred_symbol c_parameter_symbols CLOSE_BRAC  */
#line 1110 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3694 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 230: /* c_derived_proposition: OPEN_BRAC c_pred_symbol c_typed_var_list CLOSE_BRAC  */
#line 1115 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         {(yyval.t_proposition) = new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_var_symbol_list));}
#line 3700 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 231: /* c_init_proposition: OPEN_BRAC c_init_pred_symbol c_parameter_symbols CLOSE_BRAC  */
#line 1120 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_proposition)=new proposition((yyvsp[-2].t_pred_symbol),(yyvsp[-1].t_parameter_symbol_list));}
#line 3706 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 232: /* c_predicates: OPEN_BRAC PREDS c_pred_decls CLOSE_BRAC  */
#line 1125 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_pred_decl_list)= (yyvsp[-1].t_pred_decl_list);}
#line 3712 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 233: /* c_predicates: OPEN_BRAC PREDS error CLOSE_BRAC  */
#line 1127 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; (yyval.t_pred_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:predicates ...)");
	}
#line 3720 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 234: /* c_functions_def: OPEN_BRAC FUNCTIONS c_func_decls CLOSE_BRAC  */
#line 1134 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_func_decl_list)= (yyvsp[-1].t_func_decl_list);}
#line 3726 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 235: /* c_functions_def: OPEN_BRAC FUNCTIONS error CLOSE_BRAC  */
#line 1136 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; (yyval.t_func_decl_list)=NULL;
	 log_error(E_FATAL,"Syntax error in (:functions ...)");
	}
#line 3734 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 236: /* c_constraints_def: OPEN_BRAC CONSTRAINTS c_constraint_goal CLOSE_BRAC  */
#line 1143 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3740 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 237: /* c_constraints_def: OPEN_BRAC CONSTRAINTS error CLOSE_BRAC  */
#line 1145 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3748 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 238: /* c_constraints_probdef: OPEN_BRAC CONSTRAINTS c_pref_con_goal CLOSE_BRAC  */
#line 1152 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_con_goal) = (yyvsp[-1].t_con_goal);}
#line 3754 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 239: /* c_constraints_probdef: OPEN_BRAC CONSTRAINTS error CLOSE_BRAC  */
#line 1154 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         {yyerrok; (yyval.t_con_goal)=NULL;
      log_error(E_FATAL,"Syntax error in (:constraints ...)");
      }
#line 3762 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 240: /* c_structure_defs: c_structure_defs c_structure_def  */
#line 1160 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                     { (yyval.t_structure_store)=(yyvsp[-1].t_structure_store); (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3768 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 241: /* c_structure_defs: c_structure_def  */
#line 1161 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                     { (yyval.t_structure_store)= new structure_store; (yyval.t_structure_store)->push_back((yyvsp[0].t_structure_def)); }
#line 3774 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 242: /* c_structure_def: c_action_def  */
#line 1165 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                          { (yyval.t_structure_def)= (yyvsp[0].t_action_def); }
#line 3780 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 243: /* c_structure_def: c_event_def  */
#line 1166 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                          { (yyval.t_structure_def)= (yyvsp[0].t_event_def); requires(E_TIME); }
#line 3786 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 244: /* c_structure_def: c_process_def  */
#line 1167 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                          { (yyval.t_structure_def)= (yyvsp[0].t_process_def); requires(E_TIME); }
#line 3792 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 245: /* c_structure_def: c_durative_action_def  */
#line 1168 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                          { (yyval.t_structure_def)= (yyvsp[0].t_durative_action_def); requires(E_DURATIVE_ACTIONS); }
#line 3798 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 246: /* c_structure_def: c_derivation_rule  */
#line 1169 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                          { (yyval.t_structure_def)= (yyvsp[0].t_derivation_rule); requires(E_DERIVED_PREDICATES);}
#line 3804 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 247: /* c_rule_head: DERIVED  */
#line 1173 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
            {(yyval.t_dummy)= 0; 
    	current_analysis->var_tab_stack.push(
    					current_analysis->buildRuleTab());}
#line 3812 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 248: /* c_derivation_rule: OPEN_BRAC c_rule_head c_derived_proposition c_goal_descriptor CLOSE_BRAC  */
#line 1184 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_derivation_rule) = new derivation_rule((yyvsp[-2].t_proposition),(yyvsp[-1].t_goal),current_analysis->var_tab_stack.pop());}
#line 3818 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 249: /* c_action_def: OPEN_BRAC ACTION NAME c_args_head OPEN_BRAC c_typed_var_list CLOSE_BRAC PRE c_pre_goal_descriptor EFFECTS c_effect CLOSE_BRAC  */
#line 1196 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    { (yyval.t_action_def)= current_analysis->buildAction(current_analysis->op_tab.symbol_put((yyvsp[-9].cp)),
			(yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
			current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp); }
#line 3826 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 250: /* c_action_def: OPEN_BRAC ACTION error CLOSE_BRAC  */
#line 1200 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; 
	 log_error(E_FATAL,"Syntax error in action declaration.");
	 (yyval.t_action_def)= NULL; }
#line 3834 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 251: /* c_event_def: OPEN_BRAC EVENT NAME c_args_head OPEN_BRAC c_typed_var_list CLOSE_BRAC PRE c_goal_descriptor EFFECTS c_effect CLOSE_BRAC  */
#line 1213 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    {(yyval.t_event_def)= current_analysis->buildEvent(current_analysis->op_tab.symbol_put((yyvsp[-9].cp)),
		   (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
		   current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3842 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 252: /* c_event_def: OPEN_BRAC EVENT error CLOSE_BRAC  */
#line 1218 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; 
	 log_error(E_FATAL,"Syntax error in event declaration.");
	 (yyval.t_event_def)= NULL; }
#line 3850 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 253: /* c_process_def: OPEN_BRAC PROCESS NAME c_args_head OPEN_BRAC c_typed_var_list CLOSE_BRAC PRE c_goal_descriptor EFFECTS c_proc_effect CLOSE_BRAC  */
#line 1230 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    {(yyval.t_process_def)= current_analysis->buildProcess(current_analysis->op_tab.symbol_put((yyvsp[-9].cp)),
		     (yyvsp[-6].t_var_symbol_list),(yyvsp[-3].t_goal),(yyvsp[-1].t_effect_lists),
                     current_analysis->var_tab_stack.pop()); delete [] (yyvsp[-9].cp);}
#line 3858 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 254: /* c_process_def: OPEN_BRAC PROCESS error CLOSE_BRAC  */
#line 1234 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; 
	 log_error(E_FATAL,"Syntax error in process declaration.");
	 (yyval.t_process_def)= NULL; }
#line 3866 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 255: /* c_durative_action_def: OPEN_BRAC DURATIVE_ACTION NAME c_args_head OPEN_BRAC c_typed_var_list CLOSE_BRAC DURATION c_duration_constraint c_da_def_body CLOSE_BRAC  */
#line 1246 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    { (yyval.t_durative_action_def)= (yyvsp[-1].t_durative_action_def);
      (yyval.t_durative_action_def)->name= current_analysis->op_tab.symbol_put((yyvsp[-8].cp));
      (yyval.t_durative_action_def)->symtab= current_analysis->var_tab_stack.pop();
      (yyval.t_durative_action_def)->parameters= (yyvsp[-5].t_var_symbol_list);
      (yyval.t_durative_action_def)->dur_constraint= (yyvsp[-2].t_goal); 
      delete [] (yyvsp[-8].cp);
    }
#line 3878 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 256: /* c_durative_action_def: OPEN_BRAC DURATIVE_ACTION error CLOSE_BRAC  */
#line 1255 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; 
	 log_error(E_FATAL,"Syntax error in durative-action declaration.");
	 (yyval.t_durative_action_def)= NULL; }
#line 3886 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 257: /* c_da_def_body: c_da_def_body EFFECTS c_da_effect  */
#line 1262 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->effects=(yyvsp[0].t_effect_lists);}
#line 3892 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 258: /* c_da_def_body: c_da_def_body CONDITION c_da_gd  */
#line 1264 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_durative_action_def)=(yyvsp[-2].t_durative_action_def); (yyval.t_durative_action_def)->precondition=(yyvsp[0].t_goal);}
#line 3898 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 259: /* c_da_def_body: %empty  */
#line 1265 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_durative_action_def)= current_analysis->buildDurativeAction();}
#line 3904 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 260: /* c_da_gd: c_timed_gd  */
#line 1270 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_goal)=(yyvsp[0].t_goal); }
#line 3910 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 261: /* c_da_gd: OPEN_BRAC AND c_da_gds CLOSE_BRAC  */
#line 1272 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_goal)= new conj_goal((yyvsp[-1].t_goal_list)); }
#line 3916 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 262: /* c_da_gds: c_da_gds c_da_gd  */
#line 1277 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_goal_list)=(yyvsp[-1].t_goal_list); (yyval.t_goal_list)->push_back((yyvsp[0].t_goal)); }
#line 3922 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 263: /* c_da_gds: %empty  */
#line 1279 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_goal_list)= new goal_list; }
#line 3928 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 264: /* c_timed_gd: OPEN_BRAC AT_START c_goal_descriptor CLOSE_BRAC  */
#line 1284 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_START);}
#line 3934 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 265: /* c_timed_gd: OPEN_BRAC AT_END c_goal_descriptor CLOSE_BRAC  */
#line 1286 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_AT_END);}
#line 3940 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 266: /* c_timed_gd: OPEN_BRAC OVER_ALL c_goal_descriptor CLOSE_BRAC  */
#line 1288 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal)= new timed_goal((yyvsp[-1].t_goal),E_OVER_ALL);}
#line 3946 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 267: /* c_timed_gd: OPEN_BRAC PREFERENCE NAME c_timed_gd CLOSE_BRAC  */
#line 1290 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {timed_goal * tg = dynamic_cast<timed_goal *>((yyvsp[-1].t_goal));
		(yyval.t_goal) = new timed_goal(new preference((yyvsp[-2].cp),tg->clearGoal()),tg->getTime());
			delete tg;
			requires(E_PREFERENCES);}
#line 3955 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 268: /* c_timed_gd: OPEN_BRAC PREFERENCE c_timed_gd CLOSE_BRAC  */
#line 1295 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_goal) = new preference((yyvsp[-1].t_goal));requires(E_PREFERENCES);}
#line 3961 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 269: /* c_args_head: ARGS  */
#line 1299 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
         {(yyval.t_dummy)= 0; current_analysis->var_tab_stack.push(
    				current_analysis->buildOpTab());}
#line 3968 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 270: /* c_require_key: EQUALITY  */
#line 1304 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_EQUALITY;}
#line 3974 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 271: /* c_require_key: STRIPS  */
#line 1305 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_STRIPS;}
#line 3980 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 272: /* c_require_key: TYPING  */
#line 1307 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_TYPING;}
#line 3986 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 273: /* c_require_key: NEGATIVE_PRECONDITIONS  */
#line 1309 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                 {(yyval.t_pddl_req_flag)= E_NEGATIVE_PRECONDITIONS;}
#line 3992 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 274: /* c_require_key: DISJUNCTIVE_PRECONDS  */
#line 1311 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_DISJUNCTIVE_PRECONDS;}
#line 3998 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 275: /* c_require_key: EXT_PRECS  */
#line 1312 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_EXT_PRECS;}
#line 4004 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 276: /* c_require_key: UNIV_PRECS  */
#line 1313 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_UNIV_PRECS;}
#line 4010 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 277: /* c_require_key: COND_EFFS  */
#line 1314 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_COND_EFFS;}
#line 4016 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 278: /* c_require_key: FLUENTS  */
#line 1315 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_NFLUENTS | E_OFLUENTS;}
#line 4022 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 279: /* c_require_key: DURATIVE_ACTIONS  */
#line 1317 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_DURATIVE_ACTIONS;}
#line 4028 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 280: /* c_require_key: TIME  */
#line 1318 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_TIME |
                      E_NFLUENTS |
                      E_DURATIVE_ACTIONS; }
#line 4036 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 281: /* c_require_key: ACTIONCOSTS  */
#line 1321 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)=E_ACTIONCOSTS | E_NFLUENTS;}
#line 4042 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 282: /* c_require_key: OBJECTFLUENTS  */
#line 1324 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                   {(yyval.t_pddl_req_flag)=E_OFLUENTS;}
#line 4048 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 283: /* c_require_key: NUMERICFLUENTS  */
#line 1325 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                    {(yyval.t_pddl_req_flag)=E_NFLUENTS;}
#line 4054 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 284: /* c_require_key: ADL  */
#line 1327 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_STRIPS |
		      E_TYPING | 
		      E_NEGATIVE_PRECONDITIONS |
		      E_DISJUNCTIVE_PRECONDS |
		      E_EQUALITY |
		      E_EXT_PRECS |
		      E_UNIV_PRECS |
		      E_COND_EFFS;}
#line 4067 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 285: /* c_require_key: QUANT_PRECS  */
#line 1336 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_EXT_PRECS |
		      E_UNIV_PRECS;}
#line 4074 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 286: /* c_require_key: DURATION_INEQUALITIES  */
#line 1340 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_DURATION_INEQUALITIES;}
#line 4080 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 287: /* c_require_key: CONTINUOUS_EFFECTS  */
#line 1343 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                 {(yyval.t_pddl_req_flag)= E_CONTINUOUS_EFFECTS;}
#line 4086 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 288: /* c_require_key: DERIVED_PREDICATES  */
#line 1345 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                 {(yyval.t_pddl_req_flag) = E_DERIVED_PREDICATES;}
#line 4092 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 289: /* c_require_key: TIMED_INITIAL_LITERALS  */
#line 1347 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                {(yyval.t_pddl_req_flag) = E_TIMED_INITIAL_LITERALS;}
#line 4098 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 290: /* c_require_key: PREFERENCES  */
#line 1349 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                {(yyval.t_pddl_req_flag) = E_PREFERENCES;}
#line 4104 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 291: /* c_require_key: CONSTRAINTS  */
#line 1351 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_pddl_req_flag) = E_CONSTRAINTS;}
#line 4110 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 292: /* c_require_key: NAME  */
#line 1353 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
      {log_error(E_WARNING,"Unrecognised requirements declaration ");
       (yyval.t_pddl_req_flag)= 0; delete [] (yyvsp[0].cp);}
#line 4117 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 293: /* c_domain_constants: OPEN_BRAC CONSTANTS c_typed_consts CLOSE_BRAC  */
#line 1359 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4123 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 294: /* c_type_names: OPEN_BRAC TYPES c_typed_types CLOSE_BRAC  */
#line 1363 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
    {(yyval.t_type_list)=(yyvsp[-1].t_type_list); requires(E_TYPING);}
#line 4129 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 295: /* c_problem: OPEN_BRAC DEFINE OPEN_BRAC PROBLEM NAME CLOSE_BRAC OPEN_BRAC FORDOMAIN NAME CLOSE_BRAC c_problem_body CLOSE_BRAC  */
#line 1373 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
            {(yyval.t_problem)=(yyvsp[-1].t_problem); (yyval.t_problem)->name = (yyvsp[-7].cp); (yyval.t_problem)->domain_name = (yyvsp[-3].cp);
		if (types_used && !types_defined) {
			yyerrok; log_error(E_FATAL,"Syntax error in problem file - types used, but no :types section in domain file."); 
		}

	}
#line 4140 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 296: /* c_problem: OPEN_BRAC DEFINE OPEN_BRAC PROBLEM error  */
#line 1380 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {yyerrok; (yyval.t_problem)=NULL;
       	log_error(E_FATAL,"Syntax error in problem definition."); }
#line 4147 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 297: /* c_problem_body: c_domain_require_def c_problem_body  */
#line 1386 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                         {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->req= (yyvsp[-1].t_pddl_req_flag);}
#line 4153 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 298: /* c_problem_body: c_objects c_problem_body  */
#line 1387 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->objects= (yyvsp[-1].t_const_symbol_list);}
#line 4159 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 299: /* c_problem_body: c_initial_state c_problem_body  */
#line 1388 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->initial_state= (yyvsp[-1].t_effect_lists);}
#line 4165 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 300: /* c_problem_body: c_goal_spec c_problem_body  */
#line 1389 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->the_goal= (yyvsp[-1].t_goal);}
#line 4171 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 301: /* c_problem_body: c_constraints_probdef c_problem_body  */
#line 1391 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                                                        {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->constraints = (yyvsp[-1].t_con_goal);}
#line 4177 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 302: /* c_problem_body: c_metric_spec c_problem_body  */
#line 1392 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->metric= (yyvsp[-1].t_metric);}
#line 4183 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 303: /* c_problem_body: c_length_spec c_problem_body  */
#line 1393 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_problem)=(yyvsp[0].t_problem); (yyval.t_problem)->length= (yyvsp[-1].t_length_spec);}
#line 4189 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 304: /* c_problem_body: %empty  */
#line 1394 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                    {(yyval.t_problem)=new problem;}
#line 4195 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 305: /* c_objects: OPEN_BRAC OBJECTS c_typed_consts CLOSE_BRAC  */
#line 1397 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                                        {(yyval.t_const_symbol_list)=(yyvsp[-1].t_const_symbol_list);}
#line 4201 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 306: /* c_initial_state: OPEN_BRAC INITIALLY c_init_els CLOSE_BRAC  */
#line 1400 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                                            {(yyval.t_effect_lists)=(yyvsp[-1].t_effect_lists);}
#line 4207 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 307: /* c_goals: GOALS  */
#line 1403 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.vtab) = current_analysis->buildOpTab();}
#line 4213 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 308: /* c_goal_spec: OPEN_BRAC c_goals c_pre_goal_descriptor CLOSE_BRAC  */
#line 1406 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                                                 {(yyval.t_goal)=(yyvsp[-1].t_goal);delete (yyvsp[-2].vtab);}
#line 4219 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 309: /* c_metric_spec: OPEN_BRAC METRIC c_optimization c_ground_f_exp CLOSE_BRAC  */
#line 1411 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       { (yyval.t_metric)= new metric_spec((yyvsp[-2].t_optimization),(yyvsp[-1].t_expression)); }
#line 4225 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 310: /* c_metric_spec: OPEN_BRAC METRIC error CLOSE_BRAC  */
#line 1413 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {yyerrok; 
        log_error(E_FATAL,"Syntax error in metric declaration.");
        (yyval.t_metric)= NULL; }
#line 4233 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 311: /* c_length_spec: OPEN_BRAC LENGTH SERIAL INTVAL PARALLEL INTVAL CLOSE_BRAC  */
#line 1420 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
       {(yyval.t_length_spec)= new length_spec(E_BOTH,(yyvsp[-3].ival),(yyvsp[-1].ival));}
#line 4239 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 312: /* c_length_spec: OPEN_BRAC LENGTH SERIAL INTVAL CLOSE_BRAC  */
#line 1423 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_length_spec) = new length_spec(E_SERIAL,(yyvsp[-1].ival));}
#line 4245 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 313: /* c_length_spec: OPEN_BRAC LENGTH PARALLEL INTVAL CLOSE_BRAC  */
#line 1427 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_length_spec) = new length_spec(E_PARALLEL,(yyvsp[-1].ival));}
#line 4251 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 314: /* c_optimization: MINIMIZE  */
#line 1433 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
            {(yyval.t_optimization)= E_MINIMIZE;}
#line 4257 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 315: /* c_optimization: MAXIMIZE  */
#line 1434 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
            {(yyval.t_optimization)= E_MAXIMIZE;}
#line 4263 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 316: /* c_ground_f_exp: OPEN_BRAC c_binary_ground_f_exp CLOSE_BRAC  */
#line 1439 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                               {(yyval.t_expression)= (yyvsp[-1].t_expression);}
#line 4269 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 317: /* c_ground_f_exp: c_ground_f_head  */
#line 1440 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                    {(yyval.t_expression)= (yyvsp[0].t_func_term);}
#line 4275 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 318: /* c_ground_f_exp: c_number  */
#line 1441 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             {(yyval.t_expression)= (yyvsp[0].t_num_expression);}
#line 4281 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 319: /* c_ground_f_exp: TOTAL_TIME  */
#line 1442 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
               { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4287 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 320: /* c_ground_f_exp: OPEN_BRAC ISVIOLATED NAME CLOSE_BRAC  */
#line 1444 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_expression) = new violation_term((yyvsp[-1].cp));}
#line 4293 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 321: /* c_ground_f_exp: OPEN_BRAC TOTAL_TIME CLOSE_BRAC  */
#line 1445 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                   { (yyval.t_expression)= new special_val_expr(E_TOTAL_TIME); }
#line 4299 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 322: /* c_binary_ground_f_exp: PLUS c_ground_f_exp c_binary_ground_f_pexps  */
#line 1449 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                                  { (yyval.t_expression)= new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4305 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 323: /* c_binary_ground_f_exp: HYPHEN c_ground_f_exp c_ground_f_exp  */
#line 1450 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                         { (yyval.t_expression)= new minus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4311 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 324: /* c_binary_ground_f_exp: MUL c_ground_f_exp c_binary_ground_f_mexps  */
#line 1451 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                                  { (yyval.t_expression)= new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4317 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 325: /* c_binary_ground_f_exp: DIV c_ground_f_exp c_ground_f_exp  */
#line 1452 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                                         { (yyval.t_expression)= new div_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression)); }
#line 4323 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 326: /* c_binary_ground_f_pexps: c_ground_f_exp  */
#line 1456 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                       {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4329 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 327: /* c_binary_ground_f_pexps: c_ground_f_exp c_binary_ground_f_pexps  */
#line 1458 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_expression) = new plus_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4335 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 328: /* c_binary_ground_f_mexps: c_ground_f_exp  */
#line 1462 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                       {(yyval.t_expression) = (yyvsp[0].t_expression);}
#line 4341 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 329: /* c_binary_ground_f_mexps: c_ground_f_exp c_binary_ground_f_mexps  */
#line 1464 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_expression) = new mul_expression((yyvsp[-1].t_expression),(yyvsp[0].t_expression));}
#line 4347 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 330: /* c_plan: c_step_t_d c_plan  */
#line 1470 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_plan)= (yyvsp[0].t_plan); 
         (yyval.t_plan)->push_front((yyvsp[-1].t_step)); }
#line 4354 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 331: /* c_plan: TIME FLOATVAL c_plan  */
#line 1473 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].fval));}
#line 4360 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 332: /* c_plan: TIME INTVAL c_plan  */
#line 1475 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
                {(yyval.t_plan) = (yyvsp[0].t_plan);(yyval.t_plan)->insertTime((yyvsp[-1].ival));}
#line 4366 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 333: /* c_plan: %empty  */
#line 1477 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_plan)= new plan;}
#line 4372 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 334: /* c_step_t_d: c_float COLON c_step_d  */
#line 1482 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_step)=(yyvsp[0].t_step); 
         (yyval.t_step)->start_time_given=1; 
         (yyval.t_step)->start_time=(yyvsp[-2].fval);}
#line 4380 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 335: /* c_step_t_d: c_step_d  */
#line 1486 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_step)=(yyvsp[0].t_step);
	 (yyval.t_step)->start_time_given=0;}
#line 4387 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 336: /* c_step_d: c_step OPEN_SQ c_float CLOSE_SQ  */
#line 1492 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_step)= (yyvsp[-3].t_step); 
	 (yyval.t_step)->duration_given=1;
         (yyval.t_step)->duration= (yyvsp[-1].fval);}
#line 4395 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 337: /* c_step_d: c_step  */
#line 1496 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
        {(yyval.t_step)= (yyvsp[0].t_step);
         (yyval.t_step)->duration_given=0;}
#line 4402 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 338: /* c_step: OPEN_BRAC NAME c_const_symbols CLOSE_BRAC  */
#line 1502 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
      {(yyval.t_step)= new plan_step( 
              current_analysis->op_tab.symbol_get((yyvsp[-2].cp)), 
	      (yyvsp[-1].t_const_symbol_list)); delete [] (yyvsp[-2].cp);
      }
#line 4411 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 339: /* c_float: FLOATVAL  */
#line 1509 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             {(yyval.fval)= (yyvsp[0].fval);}
#line 4417 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;

  case 340: /* c_float: INTVAL  */
#line 1510 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"
             {(yyval.fval)= (float) (yyvsp[0].ival);}
#line 4423 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"
    break;


#line 4427 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/compile/VALfiles/parsing/pddl+.cpp"

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
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
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

#line 1513 "/home/runner/aiplanning/PDDL/Solvers/POPF_2/src/VALfiles/parsing/pddl+.yacc"


#include <cstdio>
#include <iostream>
int line_no= 1;
using std::istream;
#include "lex.yy.cc"

namespace VAL {
extern yyFlexLexer* yfl;
};


int yyerror(const char * s)
{
    return 0;
}

int yylex()
{
    return yfl->yylex();
}
#include "fixyywrap.h"

