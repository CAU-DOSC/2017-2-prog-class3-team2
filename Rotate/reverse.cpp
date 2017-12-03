//#include "Stringsort_Head"
#include <stdio.h>
#include <stdlib.h>

void strrev(char str[], int length)
{
	char temp = 0;
	for (int start = 0, end = length - 1;start < end;start++, end--)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
	}
}

char *reverse(char str[], int n, int d)
{	
	char *str1, *str2;
	//CounterClockWise Rotation(반시계방향)
	if (d < 0)
	{
		d = -d;
		str1 = (char*)malloc(sizeof(char) * (d + 1));
		str2 = (char*)malloc(sizeof(char) * (n - d + 1));
		for (int a = 0; a < d;a++)
			str1[a] = str[a];
		for (int b = 0; b< n - d;b++)
			str2[b] = str[b + d];
		strrev(str1, d);
		for (int a = 0; a < d;a++)
			str[a] = str1[a];
		strrev(str2, n - d);
		for (int b = 0; b< n - d;b++)
			str[b + d] = str2[b];
		strrev(str, n);
	}
	//ClockWise Rotation(시계방향)
	//****추가 필요****
	else
	{

	}
	return str;
}