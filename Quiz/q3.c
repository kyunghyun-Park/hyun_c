#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <math.h>

double distance(int, int, int, int);

int main(void)
{
	int a, b, c, d;
	printf("직선의 시작점 좌표?");
	scanf("%d %d", &a, &b);
	printf("직선의 끝점 좌표?");
	scanf("%d %d", &c, &d);
	distance(a, b, c, d);
}

double distance(int q, int w, int e, int r)
{
	double result;
	result = sqrt(pow(w - q, 2) + pow(r - e, 2));
	printf("(%d,%d)~(%d,%d) 직선의 길이:%.6f", q, w, e, r, result);
}