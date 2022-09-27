#include <stdio.h>

int add(int number1, int number2);

void main() {
    int number1 =3 , number2 = 5;
    int nSum;

    nSum = add(number1, number2);
    printf("%d + %d = %d\n", number1, number2, nSum);
}

int add(int number1, int number2) {
    int nSumResult;
    nSumResult = number1 + number2;
    return nSumResult;
}