#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int arith_seq(int*, int, int);
int main(void)
{


	int gong, num1;
	int arr[10] = { 0 };
	int* parr = arr;

	printf("첫 번째 항? ");
	scanf("%d", &num1);
	printf("공차? ");
	scanf("%d", &gong);

	arr[0] = num1;

	arith_seq(&arr, 10, gong);

	printf("등차수열: ");
	for (int i = 0; i < 10; i++) {
		printf(" %3d", arr[i]);
	}

}

int arith_seq(int* parr, int size, int com) {
	int a = 0;
	for (int i = 1; i < size; i++) {
		parr[i] = parr[i - 1] + com;

	}
	return *parr;
}



