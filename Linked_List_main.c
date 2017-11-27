#include "Linked_List_Head.h"

int main()
{
	NODE* head;
	NODE* curnode;
	char str[11];

	head = createNODE(atoi(gets(str)));
	curnode = head;
	
	int numofNODE = 1;

	while (gets(str))
	{
		appendNODE(head, createNODE(atoi(str)));
		numofNODE++;
	}

	printf("�Էµ� �ڷ��� ���� %d\n", numofNODE);

	//�������� ���
	printf("�������� ���: ");
	reverseprintNODE(numofNODE);

	//�߰������
	printf("\n�߰��� ���: ");
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

	//�Է¼��������
	printNODE(head);

	//Ȧ����° �ڷ� ����
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

	printf("\n���������: ");
	printNODE(head);



	return 0;
}