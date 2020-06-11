#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double distance(int, int, int, int);
int main(void) {

	int x, y, e, r;
	printf("직선의 시작점 좌표? ");
	scanf("%d %d", &x, &y);
	printf("직선의 끝점 좌표? ");
	scanf("%d %d", &e, &r);
	printf("(%d, %d)~(%d, %d) 직선의 길이:%lf ", x, y, e, r, distance(x, y, e, r));
}

double distance(int x1, int y1, int x2, int y2) {
	return sqrt(pow((double)x2 - x1, 2) + pow((double)y2 - y1, 2));
}