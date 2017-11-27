#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

//구조체
struct node
{
	int value;
	struct node *next;
};
//NODE 선언
typedef struct node NODE;
typedef NODE* LINK;

//함수 선언
LINK createNODE(int num);
LINK appendNODE(LINK head, LINK cur);
void printNODE(LINK head);
