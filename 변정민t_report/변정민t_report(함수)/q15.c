#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int divisors(int);
int main(void)
{
	
	srand(time(0));
	int rand1=rand()%1000, rand2=rand() % 1000, rand3=rand() % 1000;

	printf("%d의 약수 :", rand1);
	printf("%d\n", divisors(rand1));
	printf("%d의 약수 :", rand2);
	printf("%d\n", divisors(rand2));
	printf("%d의 약수 :", rand3);
	printf("%d\n", divisors(rand3));

	
}
int divisors(int num) {
	int count=0;
	for (int i = 1; i <= num; ++i) {
		if (num % i == 0)
		{
			printf("%d  ", i);
			count++;
		}
	}

	printf("%d개", count);
	
}

