#include "semantic.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

TABLE_NOUED table, table_local, table_class;

NOEUD g_noeud, g_noeudFonc, g_noeudClass;

// variable helpers , g-type indique le type , giffonc indique qu'il s'agit d'une fonction ,g_IfFoncParameters indique si la fonction contient des parametres ,g_IfClass indique qu'il s'agit d'une classe , g_nbParam indique le nombre de parametres
TYPE_IDENTIFIER g_type;
int g_IfFonc;
int g_IfFoncParameters;
int g_IfClass;
int g_nbParam;

NOEUD creer (const char* nom, TYPE_IDENTIFIER type, CLASS classs, NOEUD suivant){
    NOEUD noeud = (NOEUD)malloc(sizeof(struct NOEUD));
    noeud->nom = (char *)malloc(strlen(nom)+2);
    strcpy(noeud->nom, nom);
    noeud->type = type;
    noeud->isUsed = 0;
    noeud->isInit = 0;
    noeud->classs = classs;
    noeud->suivant = suivant;
    return noeud;
}

NOEUD insert (NOEUD noeud, TABLE_NOUED table) {
    if( !table ) {
        return noeud;
    }
    else {
        NOEUD last = table;
        while( last->suivant ) {
            last = last->suivant;
        }
        last->suivant = noeud;
        return table;
    }
}

NOEUD chercher (const char* nom, TABLE_NOUED table) {
    if( !table )
        return NULL;
    NOEUD noeud = table;
    while( noeud ){
        if (strcmp(nom, noeud->nom) == 0){
            return noeud;
        }
        noeud = noeud->suivant;
    }
    return NULL;
}

void destructSymbolsTable( TABLE_NOUED table )
{
    if( !table )
        return;
    NOEUD noeud = table;
    while( noeud )
    {
        free(noeud->nom);
        free(noeud);
        noeud = noeud->suivant;
    }
}


void DisplaySymbolsTable( TABLE_NOUED SymbolsTable ){
    if( !SymbolsTable )
        return;
    NOEUD Node = SymbolsTable;
    while( Node )
    {
        switch( Node->type )
        {
            case tInt :
                printf("int ");
                break;

            case tBoolean :
                printf("boolean ");
                break;

            case tString :
                printf("string ");
                break;

            case tVoid :
                printf("void ");
                break;

            case NODE_TYPE_UNKNOWN :
                switch (Node->classs)
                {
                    case classs:
                        printf("class ");
                        break;

                    default:
                        break;
                }
                break;

            default :
                printf("Unknown ");
        }

        switch (Node->classs)
        {
            case variable:
                printf("variable ");
                break;

            case parametre:
                printf("parametre ");
                break;

            case fonction:
                printf("fonction ");
                break;
            case attribute:
                printf("attribute ");
                break;
            default:
                break;
        }

        printf("%s %d %d", Node->nom, Node->isUsed, Node->isInit);
        printf("\n");

        Node = Node->suivant;
    }
}

// check that an identifier of a variable is declared only once, so do not repeat identifiers
void verifierVarID (char* nom){
    CLASS classs;
    if (g_IfFonc){
        if (g_IfFoncParameters){
            classs = parametre;
            g_nbParam ++;
        }else{
            classs = variable;
        }
        if(chercher(nom, table_local) ){
            semanticerror(concat("variable  already defined: ", nom));
        }else{
            NOEUD noeud = creer(nom, g_type, classs, NULL);
            table_local = insert(noeud, table_local);

        }
    }
    else{
        if(chercher(nom, table) ){
            semanticerror(concat("attribute  already defined: ", nom));
        }else{
            NOEUD noeud = creer(nom, g_type, attribute, NULL);
            table = insert(noeud, table);
        }
    }
}

// check that a function identifier is declared only once, so do not repeat identifiers
void verifierFoncID (char* nom){
         if( chercher(nom, table) ){
                                semanticerror(concat("fonction already defined: ", nom));
                            }else{
                                g_noeudFonc = creer(nom, g_type, fonction, NULL);
                                table = insert(g_noeudFonc, table);
                            }
                            g_IfFonc = 1;
                            g_IfFoncParameters = 1;
}

// check that an identifier of a class is declared only once, so do not repeat identifiers
void verifierClassID (char* nom){
         if( chercher(nom, table_class) ){
                                semanticerror(concat("class already defined: ", nom));
                            }else{
                                g_noeudClass = creer(nom, NODE_TYPE_UNKNOWN, classs, NULL);
                                table_class = insert(g_noeudClass, table_class);
                            }
                            g_IfClass = 1;
}

// function indicating the end of the function therefore reinitializing the necessary helper variables
void foncDecEnd(){
    if(!g_noeudFonc)
        return;
    g_noeudFonc->nbParam = g_nbParam;
    g_nbParam = 0;
    g_IfFoncParameters = 0;
}

// check if the number of parameters of a function is correct as well as the end of a function call, therefore reinitialize the helper variables
void foncCallEnd(){
    if(!g_noeudFonc)
        return;
    if ( g_noeudFonc->nbParam != g_nbParam)
		semanticerror(concat("wrong number of parameters in method call: ", g_noeudFonc->nom));
    g_nbParam = 0;
}

// check that a variable used is declared
int verifierIDDeclare (char* nom){
    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
            if( !noeud ){
                semanticerror(concat("variable undeclared: ", nom));
                End();
                return 0;
            }else
            {
                noeud->isUsed = 1;
            }
        }else
        {
            noeud->isUsed = 1;
        }
    }else{
        noeud = chercher(nom, table);
        if( !noeud ){
            semanticerror(concat("variable undeclared: ", nom));
            End();
            return 0;
        }else
        {
            noeud->isUsed = 1;
        }
    }
    return 1;
}

// check that a variable used is declared
int verifierIDDeclareOnInit (char* nom){

    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
            if( !noeud ){
                semanticerror(concat("variable undeclared: ", nom));
                End();
                return 0;
            }
        }
    }else{
        noeud = chercher(nom, table);
        if( !noeud ){
            semanticerror(concat("variable undeclared: ", nom));
            End();
            return 0;
        }
    }
    return 1;
}

// initialize a variable
void initVar (char* nom){
    NOEUD noeud;
    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);
        }
    }else{
        noeud = chercher(nom, table);
    }
    noeud->isInit = 1;
}

// check a declared variable is initialized
void verifierVarInitialise (char* nom){

    NOEUD noeud;

    if (g_IfFonc){
        noeud = chercher(nom, table_local);
        if ( !noeud ){
            noeud = chercher(nom, table);}
    }else{
        noeud = chercher(nom, table);
    }
    if(noeud && noeud->classs == variable && !noeud->isInit)
        semanticerror(concat("variable not initialised: ", nom));
    if(noeud && noeud->classs == attribute && !noeud->isInit)
        semanticerror(concat("attribute not initialised: ", nom));
}

// this function indicates the end of the function, therefore the reinitialization of the local array of variables
void finFonction()
{
    NOEUD tmp_table;
    if (g_IfFonc == 1){
        g_IfFonc = 0;
        tmp_table = table_local;
        table_local = NULL;
    }
    while( tmp_table!=NULL ){
        if (tmp_table->classs == variable && !tmp_table->isUsed)
        {
            semanticwarning(tmp_table->nom);
        }
        tmp_table = tmp_table->suivant;
    }
}

// end of class and reinitialization of local array
void finClass()
{
    if (g_IfClass == 1){
        g_IfClass = 0;
        table = NULL;
    }
}


// check if an id is declared then initialized
void checkID(char* nom){
    if(verifierIDDeclare(nom)) {
        verifierVarInitialise(nom);
    }
}

// check if a function is declared
void verifierFoncIDDeclare(char* nom){
    NOEUD noeud;
        noeud = chercher(nom, table);
        if( !noeud ){
            semanticerror(concat("fonction not declared: ", nom));
            g_noeudFonc=NULL;
        }else
        {
            g_noeudFonc=noeud;
        }
}


// check if the variable is declared before initializing it
void checkIDOnInit(char* nom){
    if(verifierIDDeclareOnInit(nom)) {
        initVar(nom);
    }
}

// concatenation
char* concat(const char* s1, char* s2){
    char* message;
    message = malloc(strlen(s1)+ strlen(s2)+2);
    strcpy(message, s1);
    strcat(message, s2);
    return message;
}