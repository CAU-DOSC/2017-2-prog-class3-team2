//#include "Stringsort_Head"
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#pragma warning(disable: 4996)

char *trivial(char str[], int n, int d);
char *juggling(char str[], int n, int d);
char *blockswap(char str[], int n, int d);
char *reverse(char str[], int n, int d);
/*
int main()
{
	printf("디버깅용 main 코드입니다.\n디버깅이 완전히 끝나면 현재 main함수를 주석처리하고 하단 main함수를 사용하세요.\n");
	char str[10000];
	int d;
	int n;
	srand(time(NULL));
	printf("문자열의 총 길이인 n과 rotation 상수 d를 입력하세요\n");
	scanf("%d %d", &n, &d);

	//str = (char*)malloc(n+1);
	for (int i = 0; i < n; i++)
	str[i] = (rand() % 26) + 'A';
	str[n] = NULL;

	printf("원래 문자열: %s\n", str);
	printf("바뀐 문자열: %s\n", reverse(str, n, d));		//여기에 자신이 만든 함수를 넣어 디버깅하세요

	return 0;
}
*/

int main()
{
	char *str;
	int d;
	int n;
	int posi_nega;
	srand(time(NULL));
	
	/*printf("문자열의 총 길이인 n과 rotation 상수 d를 입력하세요\n");
	scanf("%d %d", &n, &d);*/

	//0이면 d가 양수 1이면 d가 음수
	posi_nega = (rand() % 2);
	n = (rand() % 1000) + 1;
	d = (rand() % n) + 1;
	if (posi_nega == 1)
		d = -d;

	str = (char*)malloc(sizeof(char) * n+1);
	for (int i = 0; i < n; i++)
		str[i] = (rand() % 26) + 'A';
	str[n] = NULL;

	printf("STRLength\tROTATEdistance\t\tT.trivial\tT.Juggle\tT.bw\t\tT.reverse\n");
	printf("%-16d%-24d", n, d);

	time_t exetime = clock();
	//trivial(str, n, d);
	printf("%-16f", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	exetime = clock();
	//juggling(str, n, d);
	printf("%-16f", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	exetime = clock();
	blockswap(str, n, d);
	printf("%-16f", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	exetime = clock();
	reverse(str, n, d);
	printf("%-16f\n", (double)((clock() - exetime) / CLOCKS_PER_SEC));

	return 0;
}
