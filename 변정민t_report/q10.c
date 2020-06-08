#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int);

int main(void)
{
	int a = 2100;
	printf("2000~2100사이의 윤년\n");
	is_leap_year(a);
	return 0;
}

int is_leap_year(int x) {
	for (int i = 2000; i <= 2100; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
		{
			printf("%d  ", i);
		}
	}
}

