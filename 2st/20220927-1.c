#include <stdio.h>

int harkjum(){
    int input;
    printf("정수를 입력하세요 (0 이하이면 프로그램은 종료됩니다) : ");
    scanf("%d", &input);
    if (input >= 90){
        printf("A 학점 축하합니다.\n");
        return input;
    }
    else if (input >= 80){
        printf("B\n");
        return input;
    }
    else if (input >= 70){
        printf("C\n");
        return input;
    }
    else if (input < 0){
        printf("* 점수 구하기 프로그램 종료 *\n");
        return input;
    } else {
        printf("F 학점, 노오오력이 필요합니다.\n");
        return input;
    }
}

int main(){
    int input=0;
    while (input >= 0){
        input = harkjum();
    }
    return 0;
}