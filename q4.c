#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int discount_price (int,int);

int main(int argc, char *argv[]) {
	int dis_rate,cost;
	
	printf("할인율(%%?)");
	scanf("%d",&dis_rate);
	printf("제품의 가격? ");
	scanf("%d",&cost);
	printf("할인가:%d",discount_price(dis_rate,cost));
	
	return 0;
}

int  discount_price (int discount_rate,int original_cost)
{
	return original_cost - (original_cost * discount_rate / 100);
}
