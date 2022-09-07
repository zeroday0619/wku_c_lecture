#include <stdio.h>

int main(void) {
    float first_value, second_value, third_value;
    float first_result, second_result;

    printf("환영합니다, 계산기 프로그램입니다.\n");
    
    printf("첫번째 값을 입력하세요: \n");
    scanf("%f", &first_value);

    printf("두번째 값을 입력하세요: \n");
    scanf("%f", &second_value);

    printf("세번째 값을 입력하세요: \n");
    scanf("%f", &third_value);

    first_result = first_value + second_value + third_value;
    printf("%9.3f + %9.3f + %9.3f의 덧셈 연산결과는 %9.3f 입니다.\n", first_value, second_value, third_value, first_result);
    second_result = (first_value + second_value + third_value) / 3;
    printf("%9.3f + %9.3f + %9.3f의 평균값은 %9.3f입니다.\n", first_value, second_value, third_value, second_result);
    return 0;
}

/*
int main(void) {
    int x, y;

    printf("첫번째 연산자=");
    scanf("%d", &x);
    printf("두번째 연산자=");
    scanf("%d", &y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);
    return 0;
}
*/

/*
int main(void) {
    int x=13, y=4;

    printf("x값을 입력하시오");
    scanf("%d", &x);
    printf("y값을 입력하시오");
    scanf("%d", &y);

    printf("x + y = %d\n", x + y);
    printf("x - y = %d\n", x - y);
    printf("x * y = %d\n", x * y);
    printf("x / y = %d\n", x / y);
    printf("x %% y = %d\n", x % y);
    return 0;
}
*/
/*
int main(void) {
    int i, j, a, b;
    i = 10;
    j = 20;
    a = i > j;
    b = i < j;
    printf("%d, %d", a, b);
    return 0;
}
*/
