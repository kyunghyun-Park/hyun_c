#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>

void discount_price(int,int);

int main(void) {
	int dis, cost;
	printf("할인율(%)? ");
	scanf("%d", &dis);
	printf("제품의 가격?");
	scanf("%d", &cost);
	discount_price(dis,cost);
}
void discount_price(int a,int price) {
	int sum=0;
	float b=a/100;
	sum = price - (price * b);
	printf("할인율:%d 가격:%d\n", a, price);
	printf("할인율변환:%.1f\n", (float)a / 100);
	printf("%d", price - (price * ((float)a / 100)));
	
}