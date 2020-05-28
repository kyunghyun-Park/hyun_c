#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int get_perimeter(int, int);

int main(void) {
	int a, b;
	printf("가로? ");
	scanf("%d", &a);
	printf("세로? ");
	scanf("%d", &b);
	printf("직사각형의 둘레: %d", get_perimeter(a, b));

}

int get_perimeter(int x, int y)
{
	return (x + y) * 2;
}