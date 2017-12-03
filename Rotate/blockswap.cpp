
//#include "Stringsort_Head"
//0 < d < strlen(str)�̾�߸� �մϴ�


//str1�� �ּҰ��� str2�� �ּҰ����� ���� d��ŭ�� ���� ������
void strswap(char *str1, char *str2, int d)
{
	char temp;
	for (int i = 0; i < d; i++)
	{
		temp = *(str1 + i);
		*(str1 + i) = *(str2 + i);
		*(str2 + i) = temp;
	}
	return;
}

//str�� �� ���ڿ� �� ���� �ּҰ�, len�� ���ڿ��� ����, d�� �պκ� ���ڿ��� ����
char* blockswap(char str[], int len, int d)
{
	//������ �Ѿ�� �ϴ� ����. �̿ϼ�
	if (*(str + d) == 0)
		return str;

	//�� ���ڿ��� �� ���ڿ��� ���̰� ���� ��
	if (len == 2 * d)
	{
		strswap(str, str+d, d);
		return str;
	}
	//�� ���ڿ��� �� ª�� ��
	if (2 * d < len)
	{
		strswap(str, str + len - d, d);
		blockswap(str, len - d, d);
		return str; 
	}
	//�� ���ڿ��� �� �� ��
	if (2 * d > len)	
	{
		strswap(str, str + d, len - d);
		blockswap(str + len - d, d, 2 * d - len);
		return str;
	}
}