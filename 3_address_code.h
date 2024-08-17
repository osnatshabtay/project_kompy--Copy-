#ifndef THREE_AC_HEADER
#define THREE_AC_HEADER

#include <stddef.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "semantic.h"

void addVar(node* node, char* var);
void addCode(node* node, char* code);
void print3AC(node* node);
void generateNewVar(node* node);
void generateIfAs3AC(node* node);
void generateIfElseAs3AC(node* node);
void generateWhileAs3AC(node* node);
void generateDoWhileAs3AC(node* node);
void generateForAs3AC(node* node);
void generateFunctionCallAs3AC(node* node, int flag);
void generateFunctionAs3AC(node* node, char* buffer, int flag);
void genStringAssign3AC(node* node);
void generatePointerAs3AC(node* node);
void StringAssignStringAs3AC(node* n);
void generateAssignmentAs3AC(node* node);
void generateExpressionAs3AC(node* node, int from_assignment);
void removeStringFromCode(char* str, const char* to_remove);

char* generateNewLabel();
char* extractCondition(const char* input);
char* removeLeadingAndTralingSpaces(const char* str);

int calculateTotalVarSize(node* args);
int isBooleanOperator(node* node);

#endif 