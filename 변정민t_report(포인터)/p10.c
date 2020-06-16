#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void add_maxtrix(int(*parrX)[3], int(*parrY)[3]);

int main(void)
{
	int arrX[3][3] = { 10,20,30,40,50,60,70,80,90 };
	int arrY[3][3] = { 9,8,7,6,5,4,3,2,1 };
	int* parrX = arrX;
	int* parrY = arrY;

	printf("x 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%5d", arrX[i][j]);
		}
		printf("\n");
	}
	printf("y 행렬:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%5d", arrY[i][j]);
		}
		printf("\n");
	}
	printf("x+y 행렬:\n");
	add_maxtrix(parrX, parrY);
}

void add_maxtrix(int(*parrX)[3],int(*parrY)[3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%5d", parrX[i][j] + parrY[i][j]);
		}
		printf("\n");
	}
	
}


