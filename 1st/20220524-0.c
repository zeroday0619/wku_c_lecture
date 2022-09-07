#include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

int main(void)
{   
    int x;
    int y;
    int answer;    
    int guess;
    int tries = 1;

    printf("홀수는 1을 짝수는 0을 입력하시오.\n");
    scanf("%d", &x);

    printf("합의 범위를 입력하시오.\n");
    scanf("%d", &answer);

    for (tries = 1; tries <= answer; tries++)
    {   
        if (x == 0){
            if  (tries % 2 == 0) {
                if (y % 2 == 0){
                    y += tries;
                }
            }
        } else if (x == 1){
            if (tries % 2 != 0){
                y += tries;
            }
        }
    } 

    if (x == 0){
        printf("0부터 %d까지의 짝수 합의 결과 값은 다음과 같다 : %d\n",answer, y);
    } else if (x == 1){
        printf("1부터 %d까지의 홀수 합의 결과 값은 다음과 같다 : %d\n",answer, y);
    }
    return 0;
}


/*
int main(void){
    int i, sum;

    i = 1;
    sum = 0;

    // for (i = 0; i < 10; i++) {
    //     sum += i;
    // }

    while (i <= 10) {
        sum += i; i++;
    }

    printf("1부터 10까지의 정수의 합= %d\n", sum);
    return 0;
}
*/

/*
int main(void)
{
    srand((unsigned int)time(NULL));

    int answer = rand() % 500;

    printf("정답=%d\n", answer);
    
    int guess;
    int tries = 0;

    do
    {
        printf("정답을 추측하여 보시오: ");
        scanf("%d", &guess);
        tries++;

        if (guess > answer){
            printf("제시한 숫자의 값이 높습니다.\n");
        } else if (guess < answer){
            printf("제시한 숫자의 값이 낮습니다.\n");
        }
    } while (guess != answer);

    printf("축하합니다, 시도횟수=%d \n", tries);
    return 0;
}
*/
/*
int main(void) {
    int i = 0;
    FILE *fp;
    do
    {
        printf("1---새로만들기\n");
        printf("2---파일열기\n");
        printf("3---파일닫기\n");
        printf("하나를 선택하시요.\n");
        scanf("%d", &i);

    } while (i < 1 || i > 3);

    printf("선택된 메뉴=%d\n", i);
    return 0;
}
*/