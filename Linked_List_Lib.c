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
void reverseprintNODE(int last)
{
	while (last > 0)
	{
		curnode = head;
		for (int i = 0; i < last - 1; i++)
			curnode = curnode->next;
		printf("%d ", curnode->value);
		last--;
	}
}
