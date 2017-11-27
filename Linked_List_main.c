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

	printf("입력된 자료의 개수 %d\n", numofNODE);

	//역순으로 출력
	printf("역순으로 출력: ");
	reverseprintNODE(head,numofNODE);

	//중간값출력
	printf("\n중간값 출력: ");
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

	//입력순으로출력
	printNODE(head);

	//홀수번째 자료 삭제
	head = head->next;
	curnode = head;
	int cur = 2;

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

	printf("\n남은것출력: ");
	printNODE(head);



	return 0;
}
