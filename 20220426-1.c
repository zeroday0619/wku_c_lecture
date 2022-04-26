#include <stdio.h>

// C언어 및 학습 9주차 3강 과제 

int main(void) {
    int num;

    printf("정수를 입력하세요: \n");
    scanf("%d", &num);

    // signed zero 예외처리 해야 하는지 모르겠어서 일단 안 하고 제출 했습니다.
    
    if (num < 0) {
        printf("음수입니다. 변환합니다.\n");
        num = -num;
    } else if (num > 0) {
        printf("양수입니다. 변환하지 않습니다.\n");
    } else if (num == 0) {
        printf("0입니다. 변환하지 않습니다.\n");
    }
    printf("절대값은 %d입니다.\n", num);
    return 0;
}

