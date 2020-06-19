#include <stdio.h>

int main() {
	int arr_1[5];
	int* arr_2;
	int size = 5;
	int i;

	for (i = 0; i < 5; i++)
	{
		arr_1[i] = i + 1;
		printf("%d ", arr_1[i]);
	}
	printf("\n");

	//메모리 할당
	//arr_2 = (int*)calloc(5, sizeof(int)); //동적 할당
	arr_2 = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < 5; i++)
	{
		arr_2[i] = arr_1[i];
		printf("%d ", arr_2[i]);
	}
	printf("\n");

	realloc(arr_2, sizeof(int) * 10);
	for (i = 5; i < 10; i++)
	{
		arr_2[i] = i + 1;
		printf("%d ", arr_2[i]);
	}
	free(arr_2);	//메모리 해제
}