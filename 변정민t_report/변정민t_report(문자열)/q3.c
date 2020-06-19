#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

	char str[64] = "";


	printf("문자열? ");

	fgets(str, sizeof(str), stdin);

	for (int i = 0; i < sizeof(str); i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);

		}
		else if (isupper(str[i]))
			str[i] = tolower(str[i]);
	}
	puts(str);



}