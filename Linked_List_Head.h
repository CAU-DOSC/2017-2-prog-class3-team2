#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable: 4996)

//구조체 정의
struct node
{
	int value;
	struct node *next;
};

//NODE, LINK 사용자 정의 자료형 선언
typedef struct node NODE;
typedef NODE* LINK;

//함수 프로토타입
LINK createNODE(int num);
LINK appendNODE(LINK head, LINK cur);
void printNODE(LINK head);
