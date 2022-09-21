#include <stdio.h>

int func(int max){
    printf("정수를 입력하세요 (0 이하이면 프로그램은 종료됩니다) : ");
    scanf("%d", &max);
    return max;   
}

int main() {

    int MAX=1, Count=0, CountB=0,result=0;
    printf("* 제곱수  구하기 프로그램 *\n\n");
    MAX = func(MAX);
    while (0 < MAX) 
    {   
        result = MAX*MAX;
        printf("%d의 제곱수 : %d\n", MAX, result);
        MAX = func(MAX);
    }
    printf("* 제곱수 구하기 프로그램 종료 *.\n");
}