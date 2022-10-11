/* Path: 2st/20221011-5.c */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
	int *grade;
	int min, max, i, students, min_array_locate, max_array_locate;

	grade = (int *)malloc(SIZE * sizeof(int));
	printf("입력받을 10이하 학생의 숫자를 입력하세요 : ");
	scanf("%d", &students);
	if (students > 10) {
		printf("입력 범위를 초과하였습니다. \n");
		exit(1);
	}
	for (i = 0; i < students; i++) {
		printf("성적을 입력하시오 : ");
		scanf("%d", &grade[i]);
	}
	
	
	// 최대값 찾기
	max = grade[0];
	for (i = 1; i < students; i++) {
		if (grade[i] > max) {
			max = grade[i];
			max_array_locate = i;
		}
	}
	// 최소값 찾기
	min = grade[0];
	for (i = 1; i < students; i++) {
		if (grade[i] < min) {
			min = grade[i];
			min_array_locate = i;
		}
	}
	free(grade);

	printf("최소값은 %d입니다. \n", min);
	printf("방번지는 %d입니다. \n", min_array_locate);
	printf("최대값은 %d입니다. \n", max);
	printf("방번지는 %d입니다. \n", max_array_locate);
	return 0;
}
