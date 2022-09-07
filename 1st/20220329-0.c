#include <stdio.h>

int main(void){
	float PI = 3;
	float radius, area, cicumference;
	radius = 3;

	area = PI * radius * radius;
	cicumference = 2.0 * PI * radius;

	printf("반지름은 %f입니다.\n", radius);
	printf("원의 면적은 %f이고 둘레는 %f입니다.\n", area, cicumference);
	return 0;
}
