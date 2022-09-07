#include <stdio.h>

int main(void) {
	int math;
	int eng;
	int computer;
	int avg;
	int total;

	printf("수학점수를 입력하시오: ");
	scanf_s("%d", &math);

	printf("영어점수를 입력하시오: ");
	scanf_s("%d", &eng);

	printf("컴퓨터점수를 입력하시오: ");
	scanf_s("%d", &computer);

	total = math + eng + computer;

	printf("총점: %d\n", total);

	avg = total / 3;
	printf("평균: %d\n", avg);
  return 0;
}
