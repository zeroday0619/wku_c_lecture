#include <stdio.h>

// C언어 및 학습 9주차 1강 과제 

int main(void){
    int i;
    int thousand_digits;
    int hundred_digits;
    int ten_digits;
    int one_digits;

    printf("정수를 입력하세요: \n");
    scanf("%d", &i);

    thousand_digits = i / 1000;
    hundred_digits = (i % 1000) / 100;
    ten_digits = (i % 100) / 10;
    one_digits = i % 10;

    printf("1000의 자리: %d\n", thousand_digits);
    printf("100의 자리: %d\n", hundred_digits);
    printf("10의 자리: %d\n", ten_digits);
    printf("1의 자리: %d\n", one_digits);
    return 0;
}