#include <stdio.h>


int main(void) {
    int a, b, c, d;

    scanf("%d", &a);
    printf("원레 a 값=%d \t", a);
    printf("a++ 후 값=%d \t", a++);
    printf("현재 a 값=%d \n", a);
 
    scanf("%d", &b);
    printf("원레 a b=%d \t", b);
    printf("b-- 후 값=%d \t", b--);
    printf("현재 b 값=%d\n", b);
 
    scanf("%d", &c);
    printf("원레 c 값=%d \t", c);
    printf("c++ 후 값=%d \t", c++);
    printf("현재 c 값=%d \n", c);
 
    scanf("%d", &d);
    printf("원레 d 값=%d \t", d);
    printf("d-- 후 값=%d \t", d--);
    printf("현재 d 값=%d \n", d);
    return 0;
 }