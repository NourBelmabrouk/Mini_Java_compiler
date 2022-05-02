%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylineno;

int yyerror(char const * msg);	
int yylex(void);

%}

%error-verbose
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
                        ;
ClassDeclarations       : ClassDeclaration ClassDeclarations                      
                        | epsilon
                        ;
ClassDeclaration        : CLASS ID EXTENDSID BLOCK_START VarDeclarations MethodDeclarations BLOCK_END
                        ;
EXTENDSID		        : EXTENDS ID
                        | epsilon
                        ;
VarDeclarations         : VarDeclaration VarDeclarations
                        | epsilon
                        ;
MethodDeclarations      : MethodDeclaration MethodDeclarations
                        | epsilon
                        ;
VarDeclaration          : type ID POINT_VIRGULE
                        ;
MethodDeclaration       : PUBLIC type ID P_OUVRANTE argDeclarations P_FERMANTE BLOCK_START VarDeclarations Statements RETURN expression POINT_VIRGULE BLOCK_END
                        ;
argDeclarations         : argDeclaration VIRGULE argDeclarations
                        | argDeclaration
                        | epsilon
                        ;
argDeclaration          : type ID 
                        ;
type                    : INT C_OUVRANTE C_FERMANTE
                        | INT
                        | BOOLEAN
                        | ID
                        ;
Statements              : Statement Statements
                        | epsilon
                        ;
Statement               : Statements
                        | IF P_OUVRANTE expression P_FERMANTE Statement ELSE Statement
                        
                        | WHILE P_OUVRANTE expression P_FERMANTE Statement
                        
                        | SYSTEM_OUT_PRINTLN P_OUVRANTE expression P_FERMANTE POINT_VIRGULE
                        
                        | ID OPPAFFECT expression POINT_VIRGULE
                        
                        | ID C_OUVRANTE expression C_FERMANTE OPPAFFECT expression POINT_VIRGULE
                        ;  
expression              : INTEGER_LITERAL expressionComp
                        | BOOLEAN_LITERAL expressionComp
                        | ID expressionComp
                        | THIS expressionComp

                        | NEW INT C_OUVRANTE expression C_FERMANTE 
                        
                        | NEW ID P_OUVRANTE P_FERMANTE 
                        
                        | NOT expression 

                        | P_OUVRANTE expression P_FERMANTE expressionComp
                        
                        | STRING expressionComp
                        | epsilon
                        ;
expressionComp          :C_OUVRANTE expression C_FERMANTE expression expressionComp
						
						| POINT LENGTH expression expressionComp
                        

						| POINT ID P_OUVRANTE expressions P_FERMANTE expression expressionComp
                        
                        | OPPAND expression expressionComp
					    | OPPOR expression expressionComp
						| OPPSUP expression expressionComp
						| OPPINF expression expressionComp
						| OPPADD expression expressionComp
						| OPPSUB expression expressionComp
						| OPPMULTIPLY expression expressionComp
                        
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