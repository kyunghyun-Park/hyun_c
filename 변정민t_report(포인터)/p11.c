#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void get_rect_info(int*, int*);

int main(void)
{
	int height, width;
	printf("가로? ");
	scanf("%d", &width);
	printf("세로? ");
	scanf("%d", &height);
	get_rect_info(&height, &width);
}

void get_rect_info(int *wid,int *hei) {
	printf("넓이:%d 둘레: %d ", *wid * *hei,(*wid+*hei)*2);
	
}


