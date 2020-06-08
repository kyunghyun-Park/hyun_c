#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_quadrant(int,int);
int main(void)
{
	int x, y;
	while (1) {
		printf("점의 좌표(x, y)? ");
		scanf("%d %d", &x, &y);
		get_quadrant(x, y);
	}
	
}
int get_quadrant(int x1, int y1) {
	
	if (x1 > 0 && y1 > 0) {
		return printf("1사분면의 점입니다.\n");
} 	else if (x1 < 0 && y1 > 0) {
	return printf("2사분면의 점입니다.\n");
}	else if (x1 < 0 && y1 < 0) {
	return printf("3사분면의 점입니다.\n");
}	else if (x1 > 0 && y1 < 0) {
	return printf("4사분면의 점입니다.\n");
}	else if (x1 == 0 && y1 == 0) {
	return 0;
}
	
}

