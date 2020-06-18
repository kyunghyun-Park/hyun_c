#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse_string(const char* );
int main(void)
{

	char str[64] = "";

	printf("문자열? ");
	fgets(str, sizeof(str), stdin);

	reverse_string(str);
	

}

void reverse_string(const char* s)
{
	int size = strlen(s);	

	for (int i = 0; i < size+1; i++)
		printf("%c", s[size-i]);
}