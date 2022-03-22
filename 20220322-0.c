#include <stdio.h>

int main(void) {
	int m_m;
	int work_day;
	int sleep_day;
	int real_work_day;
	int sum;

	printf("안녕하세요 급여계산프로그램입니다.\n월급을 입력하시오 (단위: 만원): ");
	scanf_s("%d", &m_m);

	printf("근무기간을 입력하시오: ");
	scanf_s("%d", &work_day);

	printf("휴가 개월 수를 입력하시오: ");
	scanf_s("%d", &sleep_day);
	
	real_work_day = work_day - sleep_day ;
	sum = real_work_day * m_m;
	printf("신청자의 근무 개월 수는 %d 입니다:\n지급받을 총급여는 다음과 같습니다: %d만원", real_work_day, sum);
	return 0;
}
