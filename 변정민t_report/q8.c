#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random();

int main(void) {
	printf("0~99������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.\n");
	random();
}

int random() {
	int rand1 = 0;
	int sum = 0;
	srand(time(0));
	for (int i = 0; i < 10; i++) {
		rand1 = rand() % 99 + 1;
		printf("%3d", rand1);
		sum += rand1;
	}
	printf("\n�հ�: %d", sum);
}