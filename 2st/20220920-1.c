#include <stdio.h>

// 반복문 구구단 출력
int main() {
    int First, Second;
    printf("* 구구단 출력 프로그램 *\n\n");
    
    for (First = 2; First <=9; First++) {
        for (Second = 1; Second < 10; Second++) {
            printf("%d x %d = %d\n", First, Second, First * Second);
        }
        printf("%d단 입니다. \n", First);
        printf("\n");
    }
}