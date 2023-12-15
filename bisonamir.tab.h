/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_BISONAMIR_TAB_H_INCLUDED
# define YY_YY_BISONAMIR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "bisonamir.y"

    
    #include <stdbool.h>

    typedef enum {
        INT_TYPE,
        FLOAT_TYPE,
        BOOL_TYPE
    } TypeTag;
    
    typedef union Valeur{
        double entier;
        int boolean;
        char charactere;
        char* string;
    } Valeur;

    typedef struct Variable {
        TypeTag typeVariable;
        Valeur valeurVariable;
    }Variable;


#line 73 "bisonamir.tab.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ERROR = 258,                   /* ERROR  */
    IDF = 259,                     /* IDF  */
    BEGIN_ = 260,                  /* BEGIN_  */
    END_ = 261,                    /* END_  */
    RETURN_ = 262,                 /* RETURN_  */
    CONST = 263,                   /* CONST  */
    BOOL = 264,                    /* BOOL  */
    INTEGER = 265,                 /* INTEGER  */
    FLOAT = 266,                   /* FLOAT  */
    IF = 267,                      /* IF  */
    ELIF = 268,                    /* ELIF  */
    ELSE = 269,                    /* ELSE  */
    FOR = 270,                     /* FOR  */
    DO = 271,                      /* DO  */
    WHILE = 272,                   /* WHILE  */
    AFFECTATION = 273,             /* AFFECTATION  */
    SEPERATOR = 274,               /* SEPERATOR  */
    LEFT_PARANTHESIS = 275,        /* LEFT_PARANTHESIS  */
    RIGHT_PARANTHESIS = 276,       /* RIGHT_PARANTHESIS  */
    LEFT_CURLY_BRACKET = 277,      /* LEFT_CURLY_BRACKET  */
    RIGHT_CURLY_BRACKET = 278,     /* RIGHT_CURLY_BRACKET  */
    END_OP = 279,                  /* END_OP  */
    PLUS = 280,                    /* PLUS  */
    MINUS = 281,                   /* MINUS  */
    MULT = 282,                    /* MULT  */
    DIV = 283,                     /* DIV  */
    UMINUS = 284,                  /* UMINUS  */
    LESS_THAN = 285,               /* LESS_THAN  */
    LESS_OR_EQUAL = 286,           /* LESS_OR_EQUAL  */
    GREATER_THAN = 287,            /* GREATER_THAN  */
    GREATER_OR_EQUAL = 288,        /* GREATER_OR_EQUAL  */
    DIFFERENT = 289,               /* DIFFERENT  */
    EQUAL = 290,                   /* EQUAL  */
    AND = 291,                     /* AND  */
    OR = 292,                      /* OR  */
    BOOL_TRUE = 293,               /* BOOL_TRUE  */
    BOOL_FALSE = 294,              /* BOOL_FALSE  */
    NBR_INT = 295,                 /* NBR_INT  */
    NBR_REEL = 296                 /* NBR_REEL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 57 "bisonamir.y"

    Valeur valeur;

#line 135 "bisonamir.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISONAMIR_TAB_H_INCLUDED  */
