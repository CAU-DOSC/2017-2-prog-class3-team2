#include "Linked_List_Head.h"

int main()
{
	LINK head;
	LINK curnode;
	char str[11];

	head = createNODE(atoi(gets(str)));
	curnode = head;
	
	int numofNODE = 1;

	while (gets(str))
	{
		appendNODE(head, createNODE(atoi(str)));
		numofNODE++;
	}

	printf("number of input value: %d\n\n", numofNODE);

	//역순으로 출력
	printf("print input value in reverse: ");
	reverseprintNODE(head, curnode, numofNODE);

	//중간값출력
	printf("\n\nprint mid located value: ");
	MidValueprint(head, curnode, numofNODE);


	//입력순으로출력
	printf("\nprint value in order: ");
	printNODE(head);

	//홀수번째 자료 삭제
	head = head->next;
	curnode = head;
	int cur = 2;
	int last;
	if (numofNODE % 2 == 0)
		last = numofNODE;
	else
		last = numofNODE - 1;

	while (cur < last)
	{
		curnode->next = curnode->next->next;
		curnode = curnode->next;
		cur += 2;
	}
	curnode->next = NULL;

	printf("\n\nprint only even node values: ");
	printNODE(head);
	puts("");
	return 0;
}
