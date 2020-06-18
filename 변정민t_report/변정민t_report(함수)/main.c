#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int prime_number(int x);
int main(void) {

    int num;
    printf("♥♥♥박경현 누나 사랑해요오~ ♥♥♥\n\n");
    printf("숫자를 입력해주세요오~ ");
    scanf("%d", &num);
    prime_number(num);


    printf("\n\n");
    printf("♥♥♥박경현 누나 사랑해~ ♥♥♥");

    return 0;
}

int prime_number(int x) {
    int ncount = 0;
    for (int i = 2; i <= x; i++) {
        ncount = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                ncount += 1;
            }
            if (ncount == 3) {
                break;
            }
        }
        if (ncount == 2) {
            printf("%d♥", i);
        }
    }
}