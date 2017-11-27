#include "Linked_List_Head.h"

//노드생성함수
LINK createNODE(int num)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	cur->value = num;
	cur->next = NULL;
	return cur;
}
//노드추가함수
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
//노드출력함수
void printNODE(LINK head)
{
	LINK nextnode = head;
	while (nextnode != NULL)
	{
		printf("%d ", nextnode->value);
		nextnode = nextnode->next;
	}
}
//역순으로 출력
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