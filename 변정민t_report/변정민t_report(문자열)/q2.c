#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void remove_space(const char* );

int main(void)
{

	char str[64] = "";
	

	printf("문자열? ");
	fgets(str, sizeof(str), stdin);


	printf("공백 문자 제거후: ");
	remove_space(str);
	
}

void remove_space(const char* s)
{
	char arr[64] = "";
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] != ' ')
			printf("%c", s[i]);
	}

}