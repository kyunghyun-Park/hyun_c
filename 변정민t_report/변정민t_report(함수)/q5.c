#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_even(int);
int is_odd(int);
int main(void)
{
	int n, even = 0, odd = 0;
	
	while (1)
	{
		printf("숫자 입력(0입력 시 종료):");
		scanf("%d", &n);
		if (n == 0) { break; }
		if (is_even(n) == 5) {
			even++;
			/*printf("짝수 추가\n");*/
			
		}
		if (is_odd(n) == 6)
		{
			odd++;
			/*printf("홀수 추가\n");*/
			
		}

	}
	printf("짝수:%d 홀수:%d ", even, odd);
	return 0;
}

int is_even(int x) {
	if (x % 2 == 0)
	{
		return 5;
	}

}
int is_odd(int x) {
	if (x % 2 != 0)
	{
		return 6;
	}
	
}