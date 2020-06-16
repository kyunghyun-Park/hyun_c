#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void fill_2d_array(int(*parr)[5], int n);

int main(void)
{
	int arr[4][5] = { 0 };
	int* parr = arr;
	int num;

	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &num);

	fill_2d_array(parr, num);
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%2d", arr[i][j]);
		}
		printf("\n");
	}

}

void fill_2d_array(int(*parr)[5], int n) {

	for (int i = 0; i < 4; i++) 
		for (int j = 0; j < 5; j++) 
			parr[i][j] = n;
	
}


