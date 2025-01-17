#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap_array(int*, int*);

int main(void)
{
	int arr1[10] = { 1,3,5,7,9,11,13,15,17,19 };
	int arr2[10] = { 0,2,4,6,8,10,12,14,16,18 };

	printf("a: ");
	for (int i = 0; i < 10; i++)
		printf("%3d", arr1[i]);
	printf("\nb: ");
	for (int i = 0; i < 10; i++)
		printf("%3d", arr2[i]);

	swap_array(arr1, arr2);
	printf("\n<< swap_array 호출 후 >>\n");
	printf("a: ");
	for (int i = 0; i < 10; i++)
		printf("%3d", arr1[i]);
	printf("\nb: ");
	for (int i = 0; i < 10; i++)
		printf("%3d", arr2[i]);

}

void swap_array(int *arr1,int *arr2) {
	int arr[10] = { 0 };
	for (int i = 0; i < 10; i++) //기존 arr1 배열값 옮겨놓기
		arr[i] = arr1[i];

	for (int i = 0; i < 10; i++) {
		arr1[i] = arr2[i];
		arr2[i] = arr[i];
	}
}


