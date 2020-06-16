#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int get_min_max(int *);

int main(void)
{
	int arr[10] = {12,1003,1,5,66,77,0,1002,99,4};
	get_min_max(&arr);
	
}

int get_min_max(int* a) {

	int max = 0, min = 0;

	//초기 최대값,최소값 설정
	if (a[0] > a[1]) {
		max = a[0];
		min = a[1];
	}
	else { 
		max = a[1];
		min = a[0];
	}
	
	//최대값
	for (int i = 2; i < 10; i++) {
		if (a[i] > max)
			max = a[i];
	}
	//최소값
	for (int i = 2; i < 10; i++) {
		if (a[i] < min)
			min = a[i];
	}
	return printf("최대값: %d \n최소값: %d", max, min);
}


