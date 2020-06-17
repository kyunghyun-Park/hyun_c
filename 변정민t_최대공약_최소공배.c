#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n1 = 30;
	int n2 = 12;
	int g=0, l=0;
	a(n1, n2, &g, &l);

	printf("%d와 %d의 최대공약수: %d, 최소공배수 %d", n1, n2, g, l);
	return 0;
}

int a(int x, int y, int* pg, int* pl) {
	int i, j;

	j = (x < y) ? x : y;
	for (i = 1; i <= j; i++) {
		if (x % i == 0 && y % i == 0)
			*pg = i;
	}

	j = (x > y) ? x : y;
	for (i = j; ; i++) {
		if (i % x == 0 && i % y == 0)
		{
			*pl = i;
			break;
		}
	}
}