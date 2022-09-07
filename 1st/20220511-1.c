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
            if (y == 0)
            {
                printf("0을 분모로 입력할 수 없습니다.\n");
            }
            else
            {
                printf("%d %c %d = %d\n", x, op, y, x / y);
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