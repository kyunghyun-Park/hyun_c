#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int w, h;
	printf("가로? ");
	scanf("%d", &w);
	printf("세로? ");
	scanf("%d", &h);
	printf("직사각형의 둘레:%d ", get_perimeter(w, h));
}

int get_perimeter(int num1, int num2) {
	return (num1 + num2) * 2;
}