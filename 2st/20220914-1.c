#include <stdio.h>

int main(){
    int resA;
    int resB;
    int res1, res2, res3, res4, res5;
    int N1, N2, N3;

    printf("N1, N2, N3을 입력하세요: \n");
    
    scanf("%d", &N1);
    scanf("%d", &N2);
    scanf("%d", &N3);

    res1 = N1 + N2 + N3;
    printf("result = %d\n", res1);

    res2 = (N1 + N2) * N3;
    printf("result = %d\n", res2);

    res3 = ++N1 + N2 + N3;
    printf("result = %d\n", res3);

    N1 = 1;

    res4 = N1<N2 || N1 + 2>N2;
    printf("result = %d\n", res4);

    res5 = N1 == N2 && N1 + 2>N2;
    printf("result = %d\n", res5);

    // 총합
    resA = res1 + res2 + res3 + res4 + res5;
    
    // 평균
    resB = resA / 5;

    printf("result의 총합은: %d 평균은 %d입니다.\n", resA, resB);
    return 0;
}