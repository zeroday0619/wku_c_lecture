/* Path: 2st/20221011-4.c */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{
	int *grade;
	int i, min;
	grade = (int *)malloc(SIZE * sizeof(int));
	
	for (i = 0; i < SIZE; i++) {
		printf("성적을 입력하시오 : ");
		scanf("%d", &grade[i]);
	}

	min = grade[0];
	for (i = 1; i < SIZE; i++) {
		if (grade[i] < min) {
			min = grade[i];
		}
	}
	free(grade);
	printf("최소값은 %d입니다. \n", min);
	return 0;
}