#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <math.h>

float get_area_of_square(float);

int main(void)
{
	float x;
	printf("�� ���� ����? ");
	scanf("%f", &x);
	printf("���簢���� ����:%.6f", get_area_of_square(x));
}
float get_area_of_square(float a) {

	return pow(a, 2);

}


