#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

//����ü
struct node
{
	int value;
	struct node *next;
};
//NODE ����
typedef struct node NODE;
typedef NODE* LINK;

//�Լ� ����
LINK createNODE(int num);
LINK appendNODE(LINK head, LINK cur);
void printNODE(LINK head);
