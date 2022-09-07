#include <stdio.h>

int main(void) {
    int dan;
    int score;
    int result;
    int try;
    int try_s;
    

    printf("반복 횟수를 입력하세요: ");
    scanf("%d", &try_s);
    try = 1;

    while (try <= try_s) {
        printf("출력하고 싶은 단: ");
        scanf("%d", &dan);
        score = 1;
        while (score <= 5) {
            result = dan * score;
            printf("%d * %d = %d\n", dan, score, result);
            score++;
        }
        try++;
    }
    return 0;
}



/*
int main(void) {
    int num;
    int sum;
    int score;
    int res;

    printf("출력하고 싶은 단: ");
    scanf("%d", &num);

    score = 1;
    while (score <= 5)
    {
         res = num * score;
         printf("%d * %d = %d\n", num, score, res);
         score++;
    }
    return 0;
}
*/

/*
int main(void) {
    int meter;
    int i = 0;

    while (i < 3){
        meter =  i * 1609;
        printf("%d 마일은 %d 미터입니다.\n", i, meter);
        i++;
    }
    return 0;
}
*/