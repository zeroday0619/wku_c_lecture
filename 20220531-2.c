#include <stdio.h>

int main(void) {
    int i = 0;
    int sum = 0;

    for (i = 0; i < 100; i++) {
        if (i % 2 == 1) {
            continue;
        }
        sum += i;
    }
    printf("sum = %d\n", i);
    return 0;
}