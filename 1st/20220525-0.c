#include <stdio.h>


int main(void){

    int student_num;
    int tt_num;
    int s, t;

    float score, total, average, final_total;

    printf("총 학생 수를 입력하시오 : ");
    scanf("%d", &student_num);

    printf("총 과목 수를 입력하시오 : ");
    scanf("%d", &tt_num);

    for (s = 1; s <= student_num; s++){ // 학생 수
        total = 0;
        for (t = 1; t <= tt_num; t++){ // 과목 수
            printf("%d번 학생에 대한 %d 번째 성적 : ", s, t);
            scanf("%f", &score);
            total += score;
        }
        average = total / tt_num;
        printf("%d번 학생의 성적 평균은 %f\n", s, average);
        final_total = final_total + average;
    }
    printf("전체 학생의 평균 값의 합은 %f\n", final_total);
    printf("전체 학생의 성적 평균은 %f\n", final_total / 3.0);
    
    return 0;
}

/*
int main(void){
    int x,y;

    for (y = 0; y < 5; y++){
        for (x = 0; x < 10; x++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
int main(void){
    int i, n;

    printf("정수를 입력하시요: ");
    scanf("%d", &n);

    printf("==============\n");
    printf("  i i 의 세제곱 \n");
    printf("==============\n");

    for (i = 1; i <= n; i++) {
        printf("%5d  %5d\n", i, i * i * i);
    }
    return 0;
}
*/