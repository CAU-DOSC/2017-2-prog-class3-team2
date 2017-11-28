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

	printf("입력된 자료의 개수: %d\n", numofNODE);

	//역순으로 출력
	printf("입력된 자료를 역순으로 출력: ");
	reverseprintNODE(head, curnode, numofNODE);

	//중간값출력
	printf("\n입력자료의 중간위치에 있는 자료의 값 출력: ");
	MidValueprint(head, curnode, numofNODE);


	//입력순으로출력
	printf("입력자료를 입력 순으로 출력: ");
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

	printf("\n입력자료에서 홀수번째 자료를 모두 삭제 후 순서대로 출력: ");
	printNODE(head);
	puts("");
	return 0;
}
