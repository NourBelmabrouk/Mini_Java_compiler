
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


