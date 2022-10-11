#include <stdio.h>

int multiple(int number1, int number2);

int main(void) {
    int nSum;

    nSum = multiple(5, 6);
    printf("5 * 6 = %d\n", nSum);
    return 0;

}

int multiple(int number1, int number2) {
    int nSumResult;
    nSumResult = number1 * number2;
    return nSumResult;
}