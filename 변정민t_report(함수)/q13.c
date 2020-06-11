#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int round_pos(int,int);
int main(void)
{
	int n=1357, m=0;
	round_pos(n, 1);
	round_pos(n, 2);
	round_pos(n, 3);
}
int round_pos(int num1, int num2) {
	if (num2 == 1) {
		num1 = num1 + 5;
		num1 = num1 / 10;
		num1 = num1 * 10;
		return printf("%d\n", num1);
	}
	else if (num2 == 2) {
		num1 = num1 + 50;
		num1 = num1 / 100;
		num1 = num1 * 100;
		return printf("%d\n", num1);
	}
	else if (num2 == 3) {
		num1 = num1 + 500;
		num1 = num1 / 1000;
		num1 = num1 * 1000;
		return printf("%d\n", num1);
	}
}

