%{
    #include "semantic.c"
    #include "codeGenerator.c"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    int num;
    int indice;
    char nom[256];
    char oper[10];
    char name[256];
    int trackIf;
    int while1;
    int while2;
	int yylex(void);
	extern int yylineno;
	extern int i;
    extern int j;
	void yyerror(const char *str);
	void syntaxerror (const char *str);
    void BeginCodeGen();
    void EndCodeGen();
	void Begin();
    void End();
%}

%token IDENTIFIER
%token TYPE_INT
%token TYPE_BOOLEAN
%token TYPE_STRING

%token BOOLEAN_LITERAL
%token INTEGER_LITERAL
%token STRING_LITERAL

%token KEYWORD_CLASS
%token KEYWORD_PUBLIC
%token KEYWORD_MAIN
%token KEYWORD_EXTENDS
%token KEYWORD_RETURN
%token KEYWORD_IF
%token KEYWORD_ELSE
%token KEYWORD_WHILE
%token KEYWORD_PRINT
%token KEYWORD_LENGTH
%token KEYWORD_THIS
%token KEYWORD_NEW

%token PARENTHESE_OPEN
%token PARENTHESE_CLOSE
%token BRACKET_OPEN
%token BRACKET_CLOSE
%token BRACE_OPEN
%token BRACE_CLOSE

%token OP_AFFECT
%token OP_AND
%token OP_LESS
%token OP_ADD
%token OP_SUBSTRACT
%token OP_MULTIPLY
%token OP_NOT

%token SEMI_COLON
%token DOT
%token COMMA

%start Program

%%

Program		           : MainClass ClassDeclarationS
                       | error ClassDeclarationS {syntaxerror ("main class missing"); }
                       | error MainClass ClassDeclarationS {syntaxerror ("code out of class"); }
                       | MainClass error ClassDeclarationS {syntaxerror ("code out of class"); }
                       | MainClass ClassDeclarationS error {syntaxerror ("code out of class"); }
                       ;
MainClass              : MainHead MainBody
                       ;
MainHead               : ClassHead BRACE_OPEN KEYWORD_PUBLIC KEYWORD_MAIN{ g_type = tVoid; verifierFoncID("main"); } PARENTHESE_OPEN TYPE_STRING {g_type = tString;}BRACKET_OPEN BRACKET_CLOSE
                       | ClassHead BRACE_OPEN error KEYWORD_PUBLIC KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE {syntaxerror ("public keyword missing");}
                       | ClassHead BRACE_OPEN error KEYWORD_MAIN PARENTHESE_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE {syntaxerror ("public keyword missing");}
                       ;
MainBody               : IDENTIFIER{ verifierVarID(nom);} PARENTHESE_CLOSE { foncDecEnd(); } BRACE_OPEN StatementS  BRACE_CLOSE {finFonction(); genCode("SORTIE",-1,NULL);} MethodDeclarationS BRACE_CLOSE {finClass();}
                       ;
ClassDeclarationS	   : ClassDeclaration ClassDeclarationS
                       |
                       | ClassDeclaration error ClassDeclarationS {syntaxerror ("code out of class"); }
                       ;
ClassDeclaration       : ClassHead KEYWORD_EXTENDS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {finClass();}
                       | ClassHead KEYWORD_EXTENDS error BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {syntaxerror ("parent class identifier missing"); }
                       | ClassHead KEYWORD_EXTENDS Identifier BRACE_OPEN VarDeclarationS MethodDeclarationS error {syntaxerror ("closing brace missing"); }
                       | ClassHead BRACE_OPEN VarDeclarationS MethodDeclarationS BRACE_CLOSE {finClass();}
                       | ClassHead BRACE_OPEN VarDeclarationS MethodDeclarationS error {syntaxerror ("closing brace missing"); }
                       ;
ClassHead              : KEYWORD_CLASS Identifier {verifierClassID(nom);}
                       | error Identifier {syntaxerror ("class keyword missing"); }
                       ;
VarDeclarationS        : VarDeclaration VarDeclarationS
                       |
                       ;
VarDeclaration         : Variable {verifierVarID(nom);} SEMI_COLON
                       | Variable error {syntaxerror ("semicolon missing"); }
                       ;
VariableS              : Variable {verifierVarID(nom);} COMMA VariableS
                       | Variable {verifierVarID(nom);}
                       |
                       | Variable error VariableS {syntaxerror ("comma missing"); }
                       ;
Variable               : Type Identifier
                       | error Identifier {syntaxerror ("invalid type"); }
                       | Type error {syntaxerror ("invalid identifier"); }
                       ;
MethodDeclarationS     : MethodDeclaration MethodDeclarationS
                       |
                       | MethodDeclaration error MethodDeclarationS {syntaxerror ("code out of method"); }
                       | MethodDeclaration MethodDeclarationS error {syntaxerror ("code out of method"); }
                       ;
MethodDeclaration      : KEYWORD_PUBLIC Variable { verifierFoncID(nom); }PARENTHESE_OPEN VariableS PARENTHESE_CLOSE {foncDecEnd();} BRACE_OPEN {genCode("ENTREE",-1,NULL);} StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {finFonction();}
                       | error KEYWORD_PUBLIC Variable PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("public keyword missing"); }
                       | KEYWORD_PUBLIC error Identifier PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("type missing"); }
                       | KEYWORD_PUBLIC Type error PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS  KEYWORD_RETURN Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("method name missing"); }
                       //| KEYWORD_PUBLIC Type Identifier PARENTHESE_OPEN VariableS PARENTHESE_CLOSE BRACE_OPEN StatementS error Expression SEMI_COLON BRACE_CLOSE {syntaxerror ("return keyword missing"); }
                       ;

Type                   : TYPE_INT BRACKET_OPEN BRACKET_CLOSE { g_type = tInt; }
                       | TYPE_BOOLEAN { g_type = tBoolean; }
                       | TYPE_INT { g_type = tInt; }
                       | TYPE_STRING{ g_type = tString; }
                       | TYPE_INT BRACKET_OPEN error {syntaxerror ("closing bracket missing"); }
                       | error BRACKET_OPEN BRACKET_CLOSE {syntaxerror ("invalid array type"); }
                       | TYPE_INT error BRACKET_CLOSE {syntaxerror ("opening bracket missing"); }
                       ;
StatementS             : Statement StatementS
                       | Statement
                       |
                       ;
Statement              : BRACE_OPEN StatementS BRACE_CLOSE
                       | VarDeclaration
                       | KEYWORD_IF PARENTHESE_OPEN Expression PARENTHESE_CLOSE {genCode("SIFAUX",-1,NULL); trackIf=indice;} BRACE_OPEN StatementS BRACE_CLOSE { genCode("SAUT",-1,NULL); tabCodeInt[trackIf-1].operande=indice+1; trackIf=indice-1;}
                       KEYWORD_ELSE BRACE_OPEN StatementS BRACE_CLOSE {tabCodeInt[trackIf].operande=indice+1;}
                       | KEYWORD_IF error Expression PARENTHESE_CLOSE StatementS KEYWORD_ELSE StatementS {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_IF PARENTHESE_OPEN Expression error Statement KEYWORD_ELSE StatementS {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_IF error StatementS KEYWORD_ELSE StatementS {syntaxerror ("if condition missing"); }
                       /*| KEYWORD_IF PARENTHESE_OPEN Expression PARENTHESE_CLOSE StatementS
                       | KEYWORD_IF PARENTHESE_OPEN Expression error StatementS {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_IF error StatementS {syntaxerror ("if condition missing"); } */


                       | KEYWORD_WHILE {while1=indice;} PARENTHESE_OPEN Expression PARENTHESE_CLOSE {genCode("TANTQUEFAUX",-1,NULL); while2=indice-1;}
                        BRACE_OPEN StatementS BRACE_CLOSE {genCode("TANTQUE",while1+1,NULL); tabCodeInt[while2].operande=indice+1;}


                       | KEYWORD_PRINT PARENTHESE_OPEN Expression PARENTHESE_CLOSE SEMI_COLON
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression PARENTHESE_CLOSE error {syntaxerror ("semicolon missing"); }
                       | KEYWORD_PRINT PARENTHESE_OPEN Expression error SEMI_COLON {syntaxerror ("closing parentheses missing"); }
                       | Identifieraff OP_AFFECT Expression SEMI_COLON { genCode("STORE", getAdress(name,table_local)-1,NULL);}
                       | Identifieraff OP_AFFECT Expression error {syntaxerror ("semicolon missing"); }
                       | Identifieraff OP_AFFECT error SEMI_COLON {syntaxerror ("second expression missing"); }
                       | Identifieraff error Expression SEMI_COLON{syntaxerror ("'=' expected"); }
                       | Identifieraff BRACKET_OPEN Expression BRACKET_CLOSE OP_AFFECT Expression SEMI_COLON
                       | Identifieraff error Expression BRACKET_CLOSE OP_AFFECT Expression SEMI_COLON {syntaxerror ("opening bracket missing"); }
                       | Identifieraff BRACKET_OPEN Expression error OP_AFFECT Expression SEMI_COLON {syntaxerror ("closing bracket missing"); }
                       | Identifieraff BRACKET_OPEN Expression BRACKET_CLOSE error Expression SEMI_COLON {syntaxerror ("'=' expected"); }
                       | Identifieraff BRACKET_OPEN Expression BRACKET_CLOSE OP_AFFECT Expression error {syntaxerror ("semicolon missing"); }
                       ;
Expression             : INTEGER_LITERAL { genCode("LDC",$1,NULL); } ExpressionComp
                       | BOOLEAN_LITERAL ExpressionComp
                       | STRING_LITERAL ExpressionComp
                       | Identifierexp ExpressionComp
                       | KEYWORD_THIS ExpressionComp
                       | KEYWORD_NEW TYPE_INT BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp
                       | KEYWORD_NEW TYPE_INT error Expression BRACKET_CLOSE ExpressionComp {syntaxerror ("opening bracket missing"); }
                       | KEYWORD_NEW error BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp {syntaxerror ("invalid array type"); }
                       | KEYWORD_NEW TYPE_INT BRACKET_OPEN Expression error ExpressionComp {syntaxerror ("closing bracket missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp
                       | KEYWORD_NEW error PARENTHESE_OPEN PARENTHESE_CLOSE ExpressionComp {syntaxerror ("invalid identifier"); }
                       | KEYWORD_NEW Identifier error PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp
                       | KEYWORD_NEW error PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror ("invalid identifier"); }
                       | KEYWORD_NEW Identifier error ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | KEYWORD_NEW Identifier PARENTHESE_OPEN ExpressionS error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       | OP_NOT Expression ExpressionComp
                       | PARENTHESE_OPEN Expression PARENTHESE_CLOSE ExpressionComp
                       | error Expression PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | PARENTHESE_OPEN Expression error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       ;
ExpressionComp         : Operator Expression {genCode(oper,-1,NULL);} ExpressionComp
                       | BRACKET_OPEN Expression BRACKET_CLOSE ExpressionComp
                       | BRACKET_OPEN Expression error ExpressionComp  {syntaxerror ("closing bracket missing"); }
                       | DOT KEYWORD_LENGTH ExpressionComp
                       | DOT error KEYWORD_LENGTH ExpressionComp {syntaxerror ("invalid .length"); }
                       | MethodCall PARENTHESE_OPEN ExpressionS PARENTHESE_CLOSE{foncCallEnd();} ExpressionComp
                       | MethodCall error ExpressionS PARENTHESE_CLOSE ExpressionComp {syntaxerror("opening parentheses missing"); }
                       | MethodCall PARENTHESE_OPEN ExpressionS error ExpressionComp {syntaxerror("closing parentheses missing"); }
                       | MethodCall PARENTHESE_OPEN PARENTHESE_CLOSE {g_nbParam = 0;foncCallEnd();} ExpressionComp
                       | MethodCall error PARENTHESE_CLOSE ExpressionComp {syntaxerror ("opening parentheses missing"); }
                       | MethodCall PARENTHESE_OPEN error ExpressionComp {syntaxerror ("closing parentheses missing"); }
                       |
                       ;
MethodCall             : DOT Identifier {verifierFoncIDDeclare(nom);}
                       ;
ExpressionS            : Expression {g_nbParam ++;} COMMA ExpressionS
                       | Expression {g_nbParam ++;}
                       | Expression error ExpressionS {syntaxerror ("comma missing"); }
                       ;
Operator               : OP_ADD {strcpy(oper, "ADD");}
                       | OP_AND
                       | OP_LESS {strcpy(oper, "INF");}
                       | OP_MULTIPLY {strcpy(oper, "MUL");}
                       | OP_SUBSTRACT {strcpy(oper, "SUB");}
                       ;
Identifier             : IDENTIFIER
                       ;
Identifierexp          : IDENTIFIER {checkID(nom); genCode("LDV",getAdress(nom,table_local)-1,NULL);}
                       ;
Identifieraff          : IDENTIFIER {checkIDOnInit(nom);  strcpy(name, nom);}
                       ;



%%


extern FILE *yyin;

int main(int argc, char **argv){
    yyin = fopen(argv[1], "r");
    Begin();
    BeginCodeGen();
    yyparse();
    EndCodeGen();
    End();
    return 1;
}

void BeginCodeGen(){
    creerTabCodeInt();
}

void EndCodeGen(){
    display();
}

void Begin(){
	table = NULL;
	table_local = NULL;
	table_class = NULL;

	g_type = NODE_TYPE_UNKNOWN;

	g_nbParam = 0;

	g_IfFonc = 0 ;
    g_IfFoncParameters = 0 ;
    g_IfClass = 0 ;
}

void End(){
    fclose(yyin);
    destructSymbolsTable(table_local);
	destructSymbolsTable(table);
	destructSymbolsTable(table_class);
	exit(0);
}
