#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num = 1;
	//int even_count=0;
	//int odd_count=0;
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	while (num != 0) {
		scanf(" %d", &num);

		if (num == 0) {
			printf("%d", num);
			break;
		}
	}
}