#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int is_prime(int);
int main(int argc, char* argv[]) {
	int n;

	printf("1-N사이의 소수를 구합니다.N은? ");
	scanf("%d", &n);
	printf("\n소수는 모두 %d개입니다.", is_prime(n));
	return 0;
}

int is_prime(int x) {
	int count = 0, count_all = 0;
	for (int i=2; i <= x; i++) {
		count = 0;
		for (int j=1; j <= i; j++) {
		
			if (i % j == 0) {
				count++;
			}
			if (count == 3) {
				break;
			}
		}
		if (count == 2) {
			printf("%d ", i);
			count_all++;	
		}
	}
	
	return count_all;
}
