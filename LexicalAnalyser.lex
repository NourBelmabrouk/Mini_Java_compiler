%{	
 
#include <stdio.h>	
#include <stdlib.h>	          
#include <string.h>
#include <math.h>	
#include "SyntaxicAnalyser.tab.h"	

int line =1;
%}

%option yylineno


delim     [ \t]
bl        {delim}+
chiffre   [0-9]
lettre    [a-zA-Z]
string    \"[^\"]*\"
id        ({lettre}|_|$)({lettre}|{chiffre}|_|$)*
integer    {chiffre}+
boolean   true|false
nb        ("-")?{chiffre}+("."{chiffre}+)?(("E"|"e")"-"?{chiffre}+)?
iderrone  {chiffre}({lettre}|{chiffre})*
parenth_ouvrante  (\()
parenth_fermante  (\))
acc_ouvrante  (\{)
acc_fermante  (\})
c_ouvrante  (\[)
c_fermante  (\])
point_virgule   (";")
virgule     (",")
point       (".")
type      (int|int\[\]|boolean|boolean\[\]|String|String\[\])
COMMENT_BLOCK_ERROR    \/\*([^(\*\/)]|\n)*
COMMENT_LINE        \/\/
COMMENT_BLOCK        (\/\*)([^\*\/]|\n)*(\*\/)


%%

{bl}                                                                                 /* pas d'actions */
"\n" 			                                                                   line++;
"class"                                                                            return(CLASS);
"extends"                                                                          return(EXTENDS);
"public"                                                                           return(PUBLIC);
"private"                                                                          return(PRIVATE);
"static"                                                                           return(STATIC);
"main"                                                                             return(MAIN);
"return"                                                                           return(RETURN);
"this"                                                                             return(THIS);
"while"                                                                            return(WHILE);
"if"                                                                               return(IF);
"else"                                                                             return(ELSE);
"protected"                                                                        return(PROTECTED);
"System.out.println"                                                               return(SYSTEM_OUT_PRINTLN);
"interface"                                                                        return(INTERFACE);
"for"                                                                              return(FOR);
"continue"                                                                         return(CONTINUE);
"break"                                                                            return(BREAK);
"null"                                                                             return(NUL);
"new"                                                                              return(NEW);
"length"                                                                           return(LENGTH);


"String"                                                                           return(STR);
"void"                                                                             return(VOID);


{COMMENT_BLOCK}                                                             
{parenth_ouvrante}                                                                 return(P_OUVRANTE);
{parenth_fermante}                                                                 return(P_FERMANTE);
{c_ouvrante}                                                                       return(C_OUVRANTE);
{c_fermante}                                                                       return(C_FERMANTE);
{acc_ouvrante}                                                                     return(BLOCK_START);
{acc_fermante}                                                                     return(BLOCK_END);

{integer}                                                                          return(INTEGER_LITERAL);
{boolean}                                                                          return(BOOLEAN_LITERAL);
{string}                                                                           return(STRING);
{virgule}                                                                          return(VIRGULE);
{point_virgule}                                                                    return(POINT_VIRGULE);
{point}                                                                            return(POINT);
"boolean"									     								   return BOOLEAN;
"int"										     								   return INT;


"="	                                                                               return(OPPAFFECT);
"=="                                                                               return(OPPEQUALITY);
"!="                                                                               return(OPPINEQUALITY);
">="                                                                               return(OPPSUPEQUALITY);
"<="                                                                               return(OPPINFEQUALITY);
"<"                                                                                return(OPPINF);
">"                                                                                return(OPPSUP); 
"&&"                                                                               return(OPPAND); 
"||"                                                                               return(OPPOR);
"+"                                                                                return(OPPADD);
"-"                                                                                return(OPPSUB); 
"*"                                                                                return(OPPMULTIPLY);
"/"                                                                                return(OPPDIV);  
"!"                                                                                return(NOT);

{id}                                                                               return(ID);

{COMMENT_BLOCK_ERROR}                                        {fprintf(stderr,"comment block error :%d",yylineno);}

{iderrone}              {fprintf(stderr,"illegal identifier \'%s\' on line :%d\n",yytext,yylineno);}
	

%%


int yywrap(void)
{
	return(1);
}