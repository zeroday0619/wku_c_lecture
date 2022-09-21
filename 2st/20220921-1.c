#include <stdio.h>

int main(){
    int MAX, Count=0, result=0;
   
    printf("* 세 제곱수  구하기 *\n\n");
    printf("정수 입력 : ");
    scanf("%d", &MAX);

    do {
        Count++;
        result = Count*Count*Count;
        printf("%d의 세제곱수 : %d\n", Count, result);
    } 
    while (Count < MAX);
    
}