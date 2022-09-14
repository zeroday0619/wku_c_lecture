#include <stdio.h>

int main(){
    int Number1, Number2;
    int select;
    float resA, resB;
    printf("Number1을 입력하세요: ");
    scanf("%d", &Number1);
    printf("Number2을 입력하세요: ");
    scanf("%d", &Number2);

    printf("캐스트 연산자를 사용하려면 1을 사용하지 않으려면 2를 입력하세요: ");
    scanf("%d", &select);
    switch (select)
    {
    case 1:
        resA =  (float)Number1 / (float)Number2;
        printf("캐스트 연산자를 사용한 Number1 / Number2의 결과는 %f입니다.\n", resA);
        break;
    case 2:
        resB =  Number1 / Number2;
        printf("캐스트 연산자를 사용하지 않은 Number1 / Number2의 결과는 %f입니다.\n", resB);
        break;
    default:
        printf("잘못 입력하셨습니다.");
        break;
    }
    return 0;
}