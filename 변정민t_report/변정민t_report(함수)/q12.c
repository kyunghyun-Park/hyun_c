#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_leap_year(int);
int get_days_of_month(int, int);
int check_date(int, int, int);

int main(void)
{
	int y = 0, m = 0, d = 0;
	while (1) {
		printf("날짜 (연 월 일)? ");
		scanf("%d %d %d", &y, &m, &d);
		check_date(y, m, d);
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

int check_date(int year, int month, int day) {
	if ((month >= 1 && month <= 12) && (day >= 1 && day <= 31))
	{
		return printf("입력한 날짜는 %d년 %d월 %d일 입니다.\n", year, month, day);
	}
	else printf("유효한 날짜가 아닙니다.\n");
}

