#include <stdio.h>
#include <math.h>

int main(void) {
    double v;

    while (1)
    {
        printf("실수갑을 입력하시오: ");
        scanf("%lf", &v);

        if (v < 0.0) {
            break;
        }
        printf("%lf의 제곱근은 %lf입니다.\n", v, sqrt(v));
    }
    return 0;
}

