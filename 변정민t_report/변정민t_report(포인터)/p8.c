#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void fill_array(int*, int);

int main(void)
{
	int arr[20] = { 0 };
	int* parr = arr;
	int num;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);

	printf("배열: ");

	fill_array(parr, num);

	for(int i=0;i<20;i++)
		printf("%2d", arr[i]);

}

void fill_array(int* a, int n) {

	for (int i = 0; i < 20; i++) {
		a[i] = n;
	}
}


