#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 64

int strcmp_ic(char* ,char*);
int main(void)
{

	char str1[SIZE] = "";
	char str2[SIZE] = "";

	printf("첫 번째 문자열? ");
	gets_s(str1, sizeof(str1), stdin);

	printf("두 번째 문자열? ");
	gets_s(str2, sizeof(str2), stdin);

	if (strcmp_ic(str1, str2) == 0)
		printf("%s와 %s는 같습니다.", str1, str2);
	else
		printf("%s와 %s는 다릅니다.", str1, str2);

}

int strcmp_ic(char* lhs, char* rhs)
{
	int count = 0;
	//for (int i = 0; i < strlen(lhs); i++) //첫번째문자열 소문자변환
	//	lhs[i]=tolower(lhs[i]);
	//
	//for (int i = 0; i < strlen(rhs); i++) //두번째문자열 소문자변환
	//	rhs[i] = tolower(rhs[i

	lhs = _strlwr(lhs);
	rhs = _strlwr(rhs);

	//while방법
	while (lhs[count] == rhs[count]) //문자열이 모두 같을때까지
	{
		if (lhs[count] == '\0' || rhs[count] == '\0') //하나라도 끝나면
			break;
		count++;
	}

	if (lhs[count] == '\0' && rhs[count] == '\0') //둘다 끝까지 비교했다=둘 다 같다
		return 0;
	else return -1;

	//for방법
	//for (int i=0; i < SIZE; i++) {
	//	if (lhs[i] == rhs[i])
	//		count++;
	//	else if (lhs[i] > rhs[i])
	//		return 1;
	//	else if (lhs[i] < rhs[i])
	//		return -1;
	//}
	//if (count == SIZE)
	//	return 0;
}