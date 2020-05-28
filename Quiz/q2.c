#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <math.h>

float get_area_of_square(float);

int main(void)
{
	float x;
	printf("한 변의 길이? ");
	scanf("%f", &x);
	printf("정사각형의 면적:%.6f", get_area_of_square(x));
}
float get_area_of_square(float a) {

	return pow(a, 2);

}


