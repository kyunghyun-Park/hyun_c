#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	int count = 0;
	char str[] = "Certain words in a C program special meaning, they are keywords.";
	char* pstr = str;

	puts(str);

	
	while (pstr[0] != '\0') {
		if (isspace(pstr[0]))
			count++;
		pstr++;
	}
	printf("공백 문자의 개수: %d\n",count);

}