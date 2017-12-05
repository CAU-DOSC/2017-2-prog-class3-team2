#include "Stringsort_Head.h"

//최대공약수 찾는 함수
int getGCD(int a, int b) {
	while (0 != b) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return abs(a);
}
//Juggling 함수
char *juggling(char str[], int n, int d)
{
	int i, j, k, temp;

	// 시계방향으로 rotate
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

	//반시계방향으로 rotate
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
//0 < d < strlen(str)이어야만 합니다

//str1의 주소값과 str2의 주소값에서 각각 d만큼을 서로 스왑함
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

//BlockSwap 
//str은 앞 문자열 맨 앞의 주소값, len은 문자열의 길이, d는 앞부분 문자열의 길이
char* blockswap(char str[], int len, int d)
{
	//범위가 넘어가면 일단 리턴. 미완성
	if (*(str + d) == 0)
		return str;

	//앞 문자열과 뒤 문자열의 길이가 같을 때
	if (len == 2 * d)
	{
		strswap(str, str + d, d);
		return str;
	}
	//앞 문자열이 더 짧을 때
	if (2 * d < len)
	{
		strswap(str, str + len - d, d);
		blockswap(str, len - d, d);
		return str;
	}
	//앞 문자열이 더 길 때
	if (2 * d > len)
	{
		strswap(str, str + d, len - d);
		blockswap(str + len - d, d, 2 * d - len);
		return str;
	}
}


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

//Reverse 
char *reverse(char str[], int n, int d)
{
	char *str1, *str2;
	//CounterClockWise Rotation(반시계방향)
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
	//ClockWise Rotation(시계방향)
	//****추가 필요****
	else
	{

		str1 = (char*)malloc(sizeof(char) * ((n-d) + 1));
		str2 = (char*)malloc(sizeof(char) * (n + 1));
		for (int a = 0; a < n - d; a++)
			str1[a] = str[a];
		for (int b = 0; b < d; b++)
			str2[b] = str[b+n-d];
		strrev(str1, n-d);
		for (int a = 0; a < n - d; a++)
			str[a] = str1[a];
		strrev(str2, d);
		for (int b = 0; b < d; b++);
		str[b + n - d] = str2[b];
		strrev(str, n);
	}
	return str;
}
char *trivial(char str[], int n, int d) {

	char temp[1];
	
	for (int i = 0; i < d; d++) {
		temp[1] = str[n - 1];
		for (int j = n-1; j >0; j--) {
			str[j] = str[j - 1];
		}
		str[1] = temp[1];
	}
}

