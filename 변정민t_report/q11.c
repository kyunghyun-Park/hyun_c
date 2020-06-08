#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int);
int get_days_of_month(int, int);

int main(void)
{
	int y=0, m=0;
	printf("연도를 입력하세요 : ");
	scanf("%d", &y);

	for (int i = 1; i <= 12; i++) {
		printf("%d월: %d일  ", i, get_days_of_month(y, i));
	}
	return 0;
}

int is_leap_year(int a) {
	if (a % 4 == 0 && a % 100 != 4 || a % 400 == 0)
		return 1;
	else
		return 0;

}
int get_days_of_month(int year,int month) {
	int day=0;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		day = 31;
	}
	if (month == 2)
	{
		if (is_leap_year(year)==1)
			day = 28;
		else
			day = 29;
	}
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		day = 30;
	}
		return day;
}

