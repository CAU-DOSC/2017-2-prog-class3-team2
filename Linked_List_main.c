#include "Linked_List_Head.h"

int main()
{
	LINK head;
	LINK curnode;
	char str[11];

	//prompt sentence
	printf("Please input values(ctrl+z to end):");
	
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
	printf("\n\nprint only even node values: ");
	Removeoddprint(head, numofNODE);
	puts("");
	return 0;
}
