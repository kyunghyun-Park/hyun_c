#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int get_min_max(int *);

int main(void)
{
	int arr[10] = {12,100,1,5,66,77,32,87,99,4};
	get_min_max(&arr);
	
}

int get_min_max(int* a) {
	int max = 0, min = 0;
	for (int i = 0; i < 9; i++) {
		if (a[i] > a[i+1]) {
			max = a[i];
			
		}
		else {
			max = a[i+1];
			
		}
	}

	for (int i = 0; i < 9; i++) {
		if (a[i] > a[i + 1]) {
			min = a[i+1];
		}
		else {
			min = a[i];
		}
		printf("%d  ", min);
	}
	return printf("\n최대값: %d \n최소값: %d", max, min);
}


