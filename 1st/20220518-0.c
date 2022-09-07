#include <stdio.h>

int main(void) {
    char operator;
    int repeat_num, sum;

    repeat_num = 0;

    printf("Enter an operator (+, *): ");
    scanf("%c", &operator);

    while (repeat_num >= 0) { 
        printf("Enter a number: ");
        scanf("%d", &repeat_num);
        if (operator == '+') {
            sum += repeat_num;
        } else if (operator == '*') {
            sum *= repeat_num;
        }
    }
    sum = sum - repeat_num;
    printf("The sum is %d\n", sum);
}

/*
int main(void){
    int i, n, sum;

    i = 0;
    sum = 0;

    while (i < 5){
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        sum = sum + n;
        i++;
    }
    printf("The sum is %d\n", sum);
    return 0;
}
*/