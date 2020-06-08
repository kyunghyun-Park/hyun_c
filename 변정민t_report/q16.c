#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void graph(int, int);
int main(void)
{
	int rand1;

	srand(time(0));
	rand1 = rand() % 10000;

	
	printf("%d: ", rand1);
	graph(rand1, 100);
}
void graph(int num1,int num2) {
	char ch = '*';
	int x;

	x = num1 / num2;
	for (int i = 0; i < x; i++) {
		printf("%c", ch);
	}
}