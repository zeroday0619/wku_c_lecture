#include <stdio.h>


int main(void) {
    int grade, n;
    float sum, average;

    n = 0;
    sum = 0;
    grade = 0; 

    printf("성적 입력을 종료하려면 0보다 작은 숫자나 100보다 큰 숫자를 입력하시오\n");
    while (grade >= 0 && grade < 101) {
        printf("성적을 입력하시오: ");
        scanf("%d", &grade);
        sum += grade;
        n++;
    }
    sum = sum - grade;
    n--;
    average = sum / n;
    printf("총 %d개의 성적을 입력했군요, 입력한 성적의 총합은 %f이고, 평균은 %f입니다.\n", n, sum, average);
    return 0;
}