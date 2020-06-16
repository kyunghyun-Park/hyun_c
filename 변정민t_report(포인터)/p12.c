#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int find_all_in_array(int*, int,int);

int main(void)
{
	int arr[10] = { 12,45,62,12,99,83,23,12,72,37 };
	int findnum;

	for (int i = 0; i < 10; i++) //기존 배열 출력
		printf("%3d", arr[i]);

	printf("\n찾을 값?");
	scanf("%d", &findnum);

	int result = find_all_in_array(arr, 10, 12); //리턴값 저장

	printf("찾은 항목은 모두 %d개입니다.\n",result);
	printf("찾은 항목의 인덱스:");
	for (int i = 0; i < result; i++)
		printf("%3d", arr[i]);
	
}

int find_all_in_array(int *arr,int size,int num) {
	int count = 0;
	int k = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] == num) {
			count++;
			arr[k] = i;
			k++;
		}
		
	}
	return count;
}


