#include <stdio.h>

int main(){
    int result = 0, N1 = 5, N2 = 4, N3 = 3;

    result = N1 + N2 + N3;
    printf("result = %d\n", result);

    result = (N1 + N2) * N3;
    printf("result = %d\n", result);

    result = ++N1 + N2 + N3;
    printf("result = %d\n", result);

    N1 = 1;

    result = N1<N2 || N1 + 2>N2;
    printf("result = %d\n", result);

    result = N1 == N2 && N1 + 2>N2;
    printf("result = %d\n", result);
    return 0;
}