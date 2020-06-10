#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5	
#include <stdio.h>


int main(void)
{
	int data[SIZE] = { 7,3,9,5,1 };
	int i, j;
	int index, temp;
	for (i = 0; i < SIZE - 1; i++)
	{
		index = i;
		for (j = i + 1; j < SIZE; j++)
		{
			if (data[index] > data[j])
			{
				index = j;
			}
		}
		printf("index:%d\ n", index);
		//값이 바꼈으면		
		if (i != index)
		{
			temp = data[i];
			data[i] = data[index];
			data[index] = temp;
		}
	}
	printf("정렬 후 :");
	for (i = 0; i < SIZE; i++) {
		printf("%d ", data[i]);
	}
	printf("\n");
}
