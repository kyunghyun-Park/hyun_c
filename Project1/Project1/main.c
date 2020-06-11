#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	//1번
	/*double arr[3] = { 1.1,2.2,3.3 };
	double* parr = arr;

	for (int i = 0; i < 3; i++)
	{
		printf("arr[%d]의 주소: %d\n",i, arr+i);	}*/
	//--------------------------------------------------

	//2번
	/*double arr[10] = { 0.1,2.0,3.4,5.2,4.5,7.8,9.7,1.4,6.6,7.2 };
	double* parr = arr;

	for (int i = 0; i < 10; i++)
	{
		printf("%.2f  ", parr[i]);
	}*/
	//--------------------------------------------------

	//3번
	/*int arr[10] = { 11,22,33,44,55,66,77,88,99,110 };
	int* parr = &arr[0];

	printf("배열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(parr + i));
	}

	printf("\n역순: ");
	for (int i = 9; i >= 0; i--)
	{
		printf("%d ", *(parr + i));
	}*/
	//--------------------------------------------------

	//4번
	double arr[10] = { 0.1,2.0,3.4,5.2,4.5,7.8,9.7,1.4,6.6,7.2 };
	double* parr = &arr[0];
	double average = 0;;
	printf("배열: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%.2f ",parr[i]);
		average += parr[i];
	}
	average = average / 10;
	printf("\n평균: %f", average);
	return 0;
}