#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

int get_perimeter(int, int);

int main(void) {
	int a, b;
	printf("����? ");
	scanf("%d", &a);
	printf("����? ");
	scanf("%d", &b);
	printf("���簢���� �ѷ�: %d", get_perimeter(a, b));

}

int get_perimeter(int x, int y)
{
	return (x + y) * 2;
}