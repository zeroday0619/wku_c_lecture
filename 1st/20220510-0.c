#include <stdio.h>

int main(void){
    int kg;

    printf("몸무게를 입력하시오: ");
    scanf("%d",&kg);
    if (kg>=90){
        if (kg>100){
            printf("잘못입력하셧습니다\n");
            return 0;
        } else {
            printf("고도비만\n");
        }
    } else if (kg>=80){
        printf("비만\n");
    } else if (kg>=70){
        printf("약간 비만\n");
    } else if (kg>=60){
        printf("정상\n");
    } else if (kg<=0) {
        printf("잘못입력하셧습니다\n");
    }
    return 0;
}

/*
int main(void) {
    int score;

    printf("성적을 입력하시오: ");
    scanf("%d", &score);

    if (score >= 90) {
        printf("A\n");
    } else if (score >= 80) {
        printf("B\n");
    } else if (score >= 70) {
        printf("C\n");
    } else if (score >= 60) {
        printf("D\n");
    } else {
        printf("F\n");
    }
    return 0;
}
int main(void) {
    char ch;

    printf("문자를 입력하시오: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') {
        printf("%c는 대문자입니다.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c는 소문자입니다.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c는 숫자입니다.\n", ch);
    } else {
        printf("%c는 기타문자입니다.\n", ch);
    }
    return 0;
}
*/
/*
int main(void) {
    char op;
    int x,y;

    printf("수식을 입력하시오: ");
    scanf("%d %c %d", &x, &op, &y);

    if (op == '+') {
        printf("%d %c %d = %d\n", x, op, y, x + y);
    } else if (op == '-') {
        printf("%d %c %d = %d\n", x, op, y, x - y);
    } else if (op == '*') {
        printf("%d %c %d = %d\n", x, op, y, x * y);
    } else if (op == '/' && y != 0) {
        printf("%d %c %d = %d\n", x, op, y, x / y);
    } else if (op == '/' && y == 0) {
        printf("%d을 분모로 입력 할 수 없습니다.\n", y);
    } else {
        printf("잘못된 연산자입니다.\n");
    }
    return 0;
}
*/