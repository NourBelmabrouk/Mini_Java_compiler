#ifndef CODEGENERATOR_H
#define CODEGENERATOR_H

#include "stdio.h"
#include <stdlib.h>
#include <string.h>

typedef struct{
    char* code_op;
    int operande;
    char* nomFct;
} ENTREE_CODE;


void creerTabCodeInt();
void genCode(char *code_op, int operande, char *nomFct);
void display();
void addAffectation(char *code_op, char *operande, char *nomFct);
void getOperatorCode(char* operator);

#endif