#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num=1;
	//int even_count=0;
	//int odd_count=0;
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
	while (num != 0) {
		scanf("%d", &num);
		
		if (num == 0) {
			printf("%d", num);
			break;
		}
	}
}