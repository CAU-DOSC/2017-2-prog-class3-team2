
//#include "Stringsort_Head"
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

//str은 앞 문자열 맨 앞의 주소값, len은 문자열의 길이, d는 앞부분 문자열의 길이
char* blockswap(char str[], int len, int d)
{
	//범위가 넘어가면 일단 리턴. 미완성
	if (*(str + d) == 0)
		return str;

	//앞 문자열과 뒤 문자열의 길이가 같을 때
	if (len == 2 * d)
	{
		strswap(str, str+d, d);
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