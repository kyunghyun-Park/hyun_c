#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int choose_menu();
int main(void)
{
	choose_menu();
	return 0;
}

int choose_menu() {
	int menu;

	while (1)
	{
		printf("[1.파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			printf("파일 열기를 수행합니다.\n");
			break;
		case 2:
			printf("파일을 저장합니다.\n");
			break;
		case 3:
			printf("인쇄합니다.\n");
			break;
		case 0:
			return 0;
			break;
		default:
			printf("다시 선택하세요\n");
			break;
		}
	}
}