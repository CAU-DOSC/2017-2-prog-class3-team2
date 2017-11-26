#include "Linked_List_Head.h"

LINK createNODE(int num)
{
	LINK cur;
	cur = (LINK)malloc(sizeof(NODE));
	cur->value = num;
	cur->next = NULL;
	return cur;
}

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

void printNODE(LINK head)
{
	LINK nextnode = head;
	while (nextnode != NULL)
	{
		printf("%d ", nextnode->value);
		nextnode = nextnode->next;
	}
}
