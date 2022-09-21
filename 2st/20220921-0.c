#include <stdio.h>


// 예제
int main(){
    int inputValue = 1;

    printf("* 제곱수 구하기 프로그램 *\n\n");

    while (inputValue>0)
    {
        printf("정수를 입력하세요 (0 이하이면 프로그램은 종료됩니다) : ");
        scanf("%d", &inputValue);
        printf("%d의 제곱값: %d\n", inputValue, inputValue*inputValue);
        printf("(아무 키나 누르세요\n\n ");
        getchar();
    }
    printf("* 제곱수 구하기 프로그램 종료 *.\n");
    
}