#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

double get_area_of_square(double);
int main(void) {

	float r;
	printf("한 변의 길이?");
	scanf("%f", &r);
	printf("정사각형의 면적: %.6f", get_area_of_square(r));
}

double get_area_of_square(double num1) {
	return num1 * num1;
}