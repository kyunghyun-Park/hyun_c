#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void reverse_array(double*);

int main(void)
{
	double arr[10] = { 1.2,3.1,4.3,4.5,6.7,2.3,8.7,9.5,2.3,5.8 };
	double* parr = arr;
	reverse_array(parr);
}

void reverse_array(double* a) {
	printf("배열: ");
	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", a[i]);
	}
	printf("\n역순: ");
	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", a[9 - i]);
	}
}



