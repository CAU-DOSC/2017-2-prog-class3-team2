#include "Stringsort_Head.h"

//�ִ����� ã�� �Լ�
int getGCD(int a, int b) {
	while (0 != b) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return abs(a);
}
//Juggling �Լ�
char *juggling(char str[], int n, int d)
{
	int i, j, k, temp;

	// �ð�������� rotate
	if (d >= 0) {
		for (i = 0; i < getGCD(d, n); i++)
		{

			temp = str[i];
			j = i;
			while (1)
			{
				k = j - d;
				if (k < 0)
					k = k + n;
				if (k == i)
					break;
				str[j] = str[k];
				j = k;
			}
			str[j] = temp;
		}
	}

	//�ݽð�������� rotate
	if (d < 0) {
		for (i = 0; i < getGCD(d, n); i++)
		{

			temp = str[i];
			j = i;
			while (1)
			{
				k = j - d;
				if (k >= n)
					k = k - n;
				if (k == i)
					break;
				str[j] = str[k];
				j = k;
			}
			str[j] = temp;
		}
	}

	return str;
}
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
		strswap(str, str + d, d);
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
#include <stdio.h>
#include <stdlib.h>

void strrev(char str[], int length)
{
	char temp = 0;
	for (int start = 0, end = length - 1; start < end; start++, end--)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
	}
}

char *reverse(char str[], int n, int d)
{
	char *str1, *str2;
	//CounterClockWise Rotation(�ݽð����)
	if (d < 0)
	{
		d = -d;
		str1 = (char*)malloc(sizeof(char) * (d + 1));
		str2 = (char*)malloc(sizeof(char) * (n - d + 1));
		for (int a = 0; a < d; a++)
			str1[a] = str[a];
		for (int b = 0; b< n - d; b++)
			str2[b] = str[b + d];
		strrev(str1, d);
		for (int a = 0; a < d; a++)
			str[a] = str1[a];
		strrev(str2, n - d);
		for (int b = 0; b< n - d; b++)
			str[b + d] = str2[b];
		strrev(str, n);
	}
	//ClockWise Rotation(�ð����)
	//****�߰� �ʿ�****
	else
	{

	}
	return str;
}