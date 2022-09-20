#include <stdio.h>

// 재귀함수로 구구단 출력하기

int func(int First, int Second) {
    if (First == 10){
        return 0;
    } else {
        printf("%d x %d = %d\n", First, Second, First * Second);
        if (Second == 9) {
            printf("%d단 입니다. \n", First);
            printf("\n");
            Second = 1;
            return func(First + 1, Second);
        }
        func(First, Second + 1);
    }
}
int main() {
    printf("* 구구단 출력 프로그램 *\n\n");
    func(2, 1);
    return 0;
}