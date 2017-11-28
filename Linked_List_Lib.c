#include "Linked_List_Head.h"

//노드 생성 함수
LINK createNODE(int num)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	cur->value = num;
	cur->next = NULL;
	return cur;
}
//노드 추가 함수
LINK appendNODE(LINK head, LINK cur)
{
	LINK nextnode = head;
	if (head == NULL)
	{
		head = cur;
		return head;
	}
	while (nextnode->next != NULL)
		nextnode = nextnode->next;
	nextnode->next = cur;
	return head;
}
//노드 출력 함수
void printNODE(LINK head)
{
	LINK nextnode = head;
	while (nextnode != NULL)
	{
		printf("%d ", nextnode->value);
		nextnode = nextnode->next;
	}
}
//역순으로 출력 함수
void reverseprintNODE(LINK head, LINK nextnode, int num)
{
	for (int a = num - 1;a >= 0;a--)
	{
		for (int b = 0; b<a; b++)
			nextnode = nextnode->next;
		printf("%d ", nextnode->value);
		nextnode = head;
	}
}
//중간 노드값 출력 함수
void MidValueprint(LINK head,LINK curnode,int numofNODE)
{
	curnode = head;
	int mid = 0;
	while (mid < numofNODE / 2)
	{
		if (numofNODE % 2 == 0 && mid == numofNODE / 2 - 1)
			printf("%d ", curnode->value);
		curnode = curnode->next;
		mid++;
	}
	printf("%d\n", curnode->value);
}
//짝수 노드 제거후 출력 수
void Removeoddprint(LINK head, int numofNODE)
{
	int n = 1; 
	LINK nextNODE = head;
	
	while(n < numofNODE){
		
		if(n % 2 == 1){
			nextNODE = nextNODE -> next;
			n++;
		}
	
		printf("%d ", nextNODE->value);
		nextNODE = nextNODE -> next;
		n++;
	}
}
