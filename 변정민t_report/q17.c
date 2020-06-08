#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int electric_charge(int);
int main(void)
{
	int mon_used;
	printf("월 사용량 (kwh)? ");
	scanf("%d", &mon_used);
	printf("전기 요금: %d", electric_charge(mon_used));
}
int electric_charge(int num) {
	int total_price = 0;
	if (num <= 200)
	{
		total_price = (num * 93.3) + 910;
	}
	else if (num > 201 && num < 400)
	{
		total_price = 200 * 93.3; //처음 200kwh까지
		num = num - 200;			//사용량에서 200뺌
		total_price += (num) * 187.9; //다음 200까지
		total_price += 1600; //기본요금 추가
	}
	else if (num >= 400)
	{
		total_price = 200 * 93.3;
		num = num - 200;
		total_price += 200 * 187.9;
		num = num - 200;
		total_price += num * 280.6;
		total_price += 7300;
	}
	else if (num < 0)
	{
		return 0;
	}

	return total_price;

}