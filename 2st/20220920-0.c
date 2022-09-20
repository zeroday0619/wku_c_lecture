#include <stdio.h>

// 예제 코드 - 과제 아님
int main() {
    int inputA, inputB, resultA, resultB;

    printf("정수를 입력하세요 : ");
    scanf("%d", &inputB);

    printf("* 입력한 수가 %d의 배수인가 알려주기 *\n\n", inputB);
    printf("판별할 수(정수)를 입력하세요 : ");
    scanf("%d", &inputA);

    resultA = inputA / inputB;
    resultB = inputA % inputB;

    switch (resultB)
    {
        case 0:
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 0\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수입니다.\n", inputA, inputB);
            break;
        case 1:
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 1\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수가 아닙니다.\n", inputA, inputB);
            break;
        case 2:
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 2\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수가 아닙니다.\n", inputA, inputB);
            break;
        default:
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 3\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수가 아닙니다.\n", inputA, inputB);
            break;
    }
    
    /*
        if (resultB ==0){
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 0\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수입니다.\n", inputA, inputB);
        } else if (resultB == 1) {
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 1\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수가 아닙니다.\n", inputA, inputB);
        } else if (resultB == 2) {
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 2\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수가 아닙니다.\n", inputA, inputB);
        } else {
            printf("정수 %d를 %d로 나눈 몫은 %d이고 나머지: 3\n", inputA, inputB, resultA);
            printf("따라서 %d는 %d의 배수가 아닙니다.\n", inputA, inputB);
        }
    */
}