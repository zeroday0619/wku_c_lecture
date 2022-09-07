#include <stdio.h>
#define RATE 1073

int main(void){
    float money;
	float result;

    printf("현재 환율은 %d원입니다.\n", RATE);
    printf("환전금액을 입력하세요: ");
    scanf_s("%f", &money);
    printf("입력한 금액은 %f원 입니다.\n", money);
    result = money / RATE;
    printf("환전 금액은 %f달러입니다. 감사합니다.\n", result);

	return 0;
}
