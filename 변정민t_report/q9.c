#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//double calculator(char, double, double);

int main(void) {
	char c;
	float num1, num2;
	while (1) {
		printf("����( 0 0 0 �Է� �� ����)? ");
		scanf("%f %c %f", &num1, &c, &num2);

		switch (c)
		{
		case('+'):
			printf("%.6f\n", (double)num1 + num2);
			break;
		case('-'):
			printf("%.6f\n", (double)num1 - num2);
			break;
		case('*'):
			printf("%.6f\n", (double)num1 * num2);
			break;
		case('/'):
			printf("%.6f\n", (double)num1 / num2);
			break;
		default:
			printf("�ٽ� �����ϼ���\n");
			break;
			
		}
		
	}
	
	printf("\n%f %c %f\n", num1, c, num2);
	printf("%.6f", (double)num1 + num2);
}

//double calculator(char x, double a, double b)
//{
//
//}