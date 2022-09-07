#include <stdio.h>

// 1차 과제
// c=(b=(a=5)+4)+3 = 12

int main(){
    int a, b, c;
    c = (b = (a = 5) + 4) + 3;
    printf("%d \n", c);
    return 0;
}