#include <stdio.h>

int main(void){
    int i;
    double f;

    i = 5 /4;
    printf("i = %d\n", i);
    f = (double)5 /4;
    printf("f = %f\n", f);
    f = 5 / (double)4;
    printf("f = %f\n", f);
    f = (double)5 / (double)4;
    printf("f = %f\n", f);

    i = 1.3 + 1.8;
    printf("i = %d\n", i);
    i = (int)1.3 + (int)1.8;
    printf("i = %d\n", i);
    return 0;
}