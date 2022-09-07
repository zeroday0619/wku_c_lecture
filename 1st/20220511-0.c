#include <stdio.h>


int main(void){
    char op;
    int x, y;

    printf("Enter an operator: ");
    scanf("%d %c %d", &x, &op, &y);

    switch(op){
        case '+':
            printf("%d %c %d = %d\n", x, op, y, x + y);
            break;
        case '-':
            printf("%d %c %d = %d\n", x, op, y, x - y);
            break;
        case '*':
            printf("%d %c %d = %d\n", x, op, y, x * y);
            break;
        case '/':
            switch(y){
                case 0:
                    printf("0을 분모로 입력할 수 없습니다.\n");
                    break;
                default:   
                    printf("%d %c %d = %d\n", x, op, y, x / y);
                    break;
            }
            break;
        case '%':
            printf("%d %c %d = %d\n", x, op, y, x % y);
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
}
/*
int main()
{
    int month, days;

    printf("일수를 알고 싶은 달을 입력하세요: ");
    scanf("%d", &month);

    switch (month)
    {
        case 2:
         days=28;
         break;
        case 4:
        case 6:
        case 9:
        case 11:
            days=30;
            break;
        default:
            days=31;
            break;
    }
    printf("%d월의 일수는 %d입니다.\n", month, days);
    return 0;
}
*/

/*
int main(void) {

    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch(number) {
        case 0:
            printf("없음\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
        case 3:
            printf("Two\n");
            break;
        default:
            printf("많음\n");
            return 0;
    }
    return 0;
}
*/