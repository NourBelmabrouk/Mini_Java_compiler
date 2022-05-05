#include "codeGenerator.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define TAB_LENGTH 100

ENTREE_CODE *tabCodeInt;

extern int indice ;

void creerTabCodeInt (){
    indice=0;
    tabCodeInt = (ENTREE_CODE *)malloc(TAB_LENGTH * sizeof(ENTREE_CODE));
}

void genCode(char *code_op, int operande, char *nomFct){
    tabCodeInt[indice].code_op=(char *)malloc(strlen(code_op)+2);
    strcpy(tabCodeInt[indice].code_op,code_op);
    tabCodeInt[indice].operande=operande;
    tabCodeInt[indice].nomFct=nomFct;
    indice++;
}

void display(){
    FILE *f;
    f=fopen("result.txt","w");
    if(f==NULL){
        printf("Error while opening file");
        exit(1);
    }
    for(int i=0; i<indice;i++){
        fprintf(f,"%s ",tabCodeInt[i].code_op);
        if (tabCodeInt[i].operande != -1){
            fprintf(f,"%d ",tabCodeInt[i].operande);
        }
        fprintf(f,"\n");
    }
    fclose(f);
}