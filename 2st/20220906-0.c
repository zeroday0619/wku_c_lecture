#include <stdio.h>

// 2차 과제

int main(){
    int Number1 = 5;
    int Number2 = 5;
    int Number3 = 5;
    int Number4 = 5;

    Number1 = +(-Number1);
    Number2 = -(+Number2);
    Number3 = +-Number3;
    Number4 = --Number4;

    printf("Number1 = %d, Number2 = %d \n", Number1, Number2);
    printf("Number3 = %d, Number4 = %d \n", Number3, Number4);
    return 0;
}