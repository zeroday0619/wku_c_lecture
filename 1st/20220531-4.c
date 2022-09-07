#include <stdio.h>

int main(void) {
    char letter;

    while (1)
    {
        printf("대문자를 입력하시오: ");
        scanf(" %c", &letter);

        if (letter == 'x'){
            printf("프로그램을 종료합니다.\n");
            break;
        } else if (letter < 'A' || letter > 'Z') {
            printf("소문자를 입력하셧습니다.");
            continue;
        }

        letter += 32;
        printf("변환된 소문자는 %c입니다.\n", letter);
    }
    return 0;
}