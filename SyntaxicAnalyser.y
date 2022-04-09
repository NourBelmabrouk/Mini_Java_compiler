%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;

int yyerror(char const * msg);	
int yylex(void);

%}

%token PROGRAM 
%token CLASS
%token EXTENDS
%token PUBLIC
%token PRIVATE
%token STATIC
%token MAIN
%token RETURN
%token THIS
%token WHILE
%token IF
%token ELSE
%token PROTECTED
%token SYSTEM_OUT_PRINTLN
%token INTERFACE
%token FOR
%token CONTINUE
%token BREAK
%token NUL
%token NEW
%token STR
%token INT
%token BOOLEAN
%token VOID
%token P_OUVRANTE
%token P_FERMANTE
%token C_OUVRANTE
%token C_FERMANTE
%token BLOCK_START
%token BLOCK_END
%token INTEGER_LITERAL
%token BOOLEAN_LITERAL
%token STRING
%token LENGTH
%token VIRGULE
%token POINT_VIRGULE
%token POINT
%token OPPAFFECT
%token OPPEQUALITY
%token OPPINEQUALITY
%token OPPSUPEQUALITY
%token OPPINFEQUALITY
%token OPPINF
%token OPPSUP
%token OPPAND
%token OPPOR
%token OPPADD
%token OPPSUB
%token OPPMULTIPLY
%token OPPDIV
%token NOT
%token ID

%start programme

%%

programme 				: MainClass  ClassDeclarations	
                        | MainClass
                        | ClassDeclarations
						;
MainClass               : CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END
                        | CLASS error BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : class name not found"); }
                        | CLASS ID error PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror ("declaration invalid : '{' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN error STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror ("declaration invalid : '(' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID error P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : class main not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE error ID P_FERMANTE BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : ']' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID error BLOCK_START Statement BLOCK_END BLOCK_END {yyerror (" invalid declaration : ')' expected but not found"); }
                        | CLASS ID BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement error BLOCK_END {yyerror (" invalid declaration : '}' expected but not found"); }
                        | CLASS error BLOCK_START PUBLIC STATIC VOID MAIN P_OUVRANTE STR C_OUVRANTE C_FERMANTE ID P_FERMANTE BLOCK_START Statement BLOCK_END error {yyerror (" invalid declaration :'}' expected but not found"); }
                        ;
ClassDeclarations       : ClassDeclaration ClassDeclarations                      
                        | epsilon
                        ;
ClassDeclaration        : CLASS ID EXTENDSID BLOCK_START VarDeclarations MethodDeclarations BLOCK_END
                        | CLASS error EXTENDSID BLOCK_START VarDeclarations MethodDeclarations BLOCK_END {yyerror ("declaration invalid : Keyword invalid"); }
                        | CLASS ID EXTENDSID error VarDeclarations MethodDeclarations BLOCK_END {yyerror ("declaration invalid : '{' expect but not found"); }
                        | CLASS ID EXTENDSID BLOCK_START VarDeclarations MethodDeclarations error {yyerror ("declaration invalid : '}' expect but not found "); }
                        | error ID EXTENDSID BLOCK_START VarDeclarations MethodDeclarations BLOCK_END {yyerror ("declaration invalid : keyword CLASS not found "); }
                        ;
EXTENDSID		        : EXTENDS ID
                        | epsilon
                        | error ID  {yyerror ("declaration invalid : keyword EXTENDS not found");}
                        ;
VarDeclarations         : VarDeclaration VarDeclarations
                        | epsilon
                        ;
MethodDeclarations      : MethodDeclaration MethodDeclarations
                        | epsilon
                        ;
VarDeclaration          : type ID POINT_VIRGULE
                        | type error POINT_VIRGULE {yyerror ("invalid identifier");}
                        | type ID error {yyerror ("declaration invalid : ';' expect but not found"); }
                        ;
MethodDeclaration       : PUBLIC type ID P_OUVRANTE argDeclarations P_FERMANTE BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END
                        | error type ID P_OUVRANTE argDeclarations P_FERMANTE BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END    {yyerror ("declaration invalid : PUBLIC missing");}
                        | PUBLIC type error P_OUVRANTE argDeclarations P_FERMANTE BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END      {yyerror ("invalid identifier"); } 
                        | PUBLIC type ID error argDeclarations P_FERMANTE BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END      {yyerror ("declaration invalid : '(' expected but not found"); } 
                        | PUBLIC type ID P_OUVRANTE argDeclarations error BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END     {yyerror ("declaration invalid : ')' expected but not found"); }
                        | PUBLIC type ID P_OUVRANTE argDeclarations P_FERMANTE  error VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END     {yyerror ("declaration invalid : '{' expected but not found"); }
                        | PUBLIC type ID P_OUVRANTE argDeclarations P_FERMANTE  BLOCK_START VarDeclarations Statements error expression POINT_VIRGULE BLOCK_END     {yyerror ("RETURN missing"); }
                        | PUBLIC type ID P_OUVRANTE argDeclarations P_FERMANTE  BLOCK_START VarDeclarations Statements RETURN expression error BLOCK_END     {yyerror ("declaration invalid : ';' expected but not found"); }
                        | PUBLIC type ID P_OUVRANTE argDeclarations P_FERMANTE  BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE error     {yyerror ("declaration invalid : '}' expected but not found"); }
                        ;
argDeclarations         : argDeclaration VIRGULE argDeclarations
                        | argDeclaration error argDeclarations {yyerror ("declaration invalid : ',' expected but not found");}
                        | argDeclaration VIRGULE error {yyerror ("declaration invalid : ',' unexpected but found");}
                        | argDeclaration
                        | epsilon
                        ;
argDeclaration          : type ID 
                        | type error      {yyerror ("invalid identifier");} 
                        ;
type                    : INT C_OUVRANTE C_FERMANTE
                        | INT error C_FERMANTE                 {yyerror ("declaration invalid : '[' expected but not found"); } 
			            | INT C_OUVRANTE error                 {yyerror ("declaration invalid : ']' expected but not found");} 
                        | INT
                        | BOOLEAN
                        | ID
                        | error                                  {yyerror ("error in type");} 
                        ;
Statements              : Statement Statements
                        | epsilon
                        ;
Statement               : Statements
                        | IF P_OUVRANTE expression P_FERMANTE Statement ELSE Statement
                        | error P_OUVRANTE expression P_FERMANTE  Statement ELSE  Statement            {yyerror ("missing keyword IF");}
                        | IF error expression P_FERMANTE  Statement  ELSE  Statement                   {yyerror (" declaration invalid : '(' expected but not found"); }
                        | IF P_OUVRANTE expression error  Statement   ELSE  Statement                  {yyerror (" declaration invalid : ')' expected but not found "); }
                        | IF P_OUVRANTE expression P_FERMANTE  Statement  error  Statement             {yyerror ("missing keyword ELSE ");}

                        | WHILE P_OUVRANTE expression P_FERMANTE Statement
                        | error P_OUVRANTE expression P_FERMANTE  Statement                             {yyerror ("missing keyword WHILE");}
                        | WHILE error expression P_FERMANTE  Statement                                  {yyerror (" declaration invalid : '(' expected but not found ");}
                        | WHILE P_OUVRANTE expression error  Statement                                  {yyerror ("declaration invalid : ')' expected but not found");}

                        | SYSTEM_OUT_PRINTLN P_OUVRANTE expression P_FERMANTE POINT_VIRGULE
                        | error P_OUVRANTE expression P_FERMANTE  POINT_VIRGULE                       {yyerror ("missing keyword  SYSTEM_OUT_PRINTLN");}
                        | SYSTEM_OUT_PRINTLN error expression P_FERMANTE  POINT_VIRGULE                 {yyerror ("declaration invalid : '(' expected but not found");}
                        | SYSTEM_OUT_PRINTLN P_OUVRANTE expression error  POINT_VIRGULE                 {yyerror (" declaration invalid : ')' expected but not found");}
                        | SYSTEM_OUT_PRINTLN P_OUVRANTE expression P_FERMANTE  error                    {yyerror ("declaration invalid : ';' expected but not found");}

                        | ID OPPAFFECT expression POINT_VIRGULE
                        | error OPPAFFECT expression POINT_VIRGULE                                      {yyerror ("invalid identifier ");}
                        | ID error expression POINT_VIRGULE                                             {yyerror ("AFFECTATION missing");}
                        | ID OPPAFFECT expression error                                                 {yyerror ("declaration invalid : ';' expected but not found");}

                        | ID C_OUVRANTE expression C_FERMANTE OPPAFFECT expression POINT_VIRGULE
                        | error C_OUVRANTE expression C_FERMANTE OPPAFFECT expression POINT_VIRGULE     {yyerror ("invalid identifier ");}
                        | ID error expression C_FERMANTE OPPAFFECT expression POINT_VIRGULE             {yyerror ("declaration invalid : '[' expected but not found ");}
                        | ID C_OUVRANTE expression error OPPAFFECT expression POINT_VIRGULE             {yyerror ("declaration invalid : ']' expected but not found ");}
                        | ID C_OUVRANTE expression C_FERMANTE error expression POINT_VIRGULE            {yyerror ("AFFECTATION missing")}
                        | ID C_OUVRANTE expression C_FERMANTE OPPAFFECT expression error                {yyerror ("declaration invalid : ';' expected but not found");}
                        ;  
expression              : INTEGER_LITERAL expressionComp
                        | BOOLEAN_LITERAL expressionComp
                        | ID expressionComp
                        | THIS expressionComp
                        | error expressionComp                                                          {yyerror ("Expression error");}

                        | NEW INT C_OUVRANTE expression C_FERMANTE 
                        | error INT C_OUVRANTE expression C_FERMANTE                        {yyerror (" keyword NEW missing ");}
                        | NEW error C_OUVRANTE expression C_FERMANTE                                    {yyerror (" keyword INT missing  ");}
                        | NEW INT error expression C_FERMANTE                               {yyerror ("declaration invalid : '[' expected but not found ");}
                        | NEW INT C_OUVRANTE expression error                               {yyerror (" declaration invalid : ']' expected but not found  ");}

                        | NEW ID P_OUVRANTE P_FERMANTE 
                        | error ID P_OUVRANTE P_FERMANTE                                                {yyerror (" keyword NEW missing");}
                        | NEW error P_OUVRANTE P_FERMANTE                                               {yyerror (" invalid identifie ");}
                        | NEW ID error P_FERMANTE                                                       {yyerror ("declaration invalid : '(' expected but not found");} 
                        | NEW ID P_OUVRANTE error                                                       {yyerror ("declaration invalid : ')' expected but not found");} 

                        | NOT expression 
                        | error expression                                                {yyerror ("expression error");} 

                        | P_OUVRANTE expression P_FERMANTE expressionComp
                        | error expression P_FERMANTE expressionComp                                    {yyerror ("declaration invalid : '(' expected but not found");}  
                        | P_OUVRANTE expression error expressionComp                                    {yyerror ("declaration invalid : ')' expected but not found");}

                        | STRING expressionComp
                        | epsilon
                        ;
expressionComp          :C_OUVRANTE expression C_FERMANTE expression expressionComp
						| error expression C_FERMANTE expression expressionComp                                        {yyerror ("declaration invalid : '[' expected but not found");}
						| C_OUVRANTE expression error expression expressionComp                                        {yyerror ("declaration invalid : ']' expected but not found");}

						| POINT LENGTH expression expressionComp
                        | error LENGTH expression expressionComp                                       {yyerror ("declaration invalid : '.' expected but not found");}
                        | POINT error expression expressionComp                                        {yyerror ("declaration invalid : 'LENGTH' expected but not found");}


						| POINT ID P_OUVRANTE expressions P_FERMANTE expression expressionComp
                        | error ID P_OUVRANTE expressions P_FERMANTE expression expressionComp                                      {yyerror ("declaration invalid : '.' expected but not found");}
                        | POINT error P_OUVRANTE expressions P_FERMANTE expression expressionComp                                   {yyerror ("invalid indentifier");}
                        | POINT ID error expressions P_FERMANTE expression expressionComp                                      {yyerror ("declaration invalid : '(' expected but not found");}
                        | POINT ID P_OUVRANTE expressions error expression expressionComp                                      {yyerror ("declaration invalid : ')' expected but not found");}
						
                        | OPPAND expression expressionComp
					    | OPPOR expression expressionComp
						| OPPSUP expression expressionComp
						| OPPINF expression expressionComp
						| OPPADD expression expressionComp
						| OPPSUB expression expressionComp
						| OPPMULTIPLY expression expressionComp
                        | error expression expressionComp                                                              {yyerror ("Missing orperator");}

                        | epsilon
						;
expressions             : expression VIRGULE expressions
                        | expression 
                        ;   

epsilon			:

%%


int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
}