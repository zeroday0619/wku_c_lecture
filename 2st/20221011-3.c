/* Path: 2st/20221011-3.c */

#include <stdio.h>
#define STUDENTS 5
int main(void)
{
	int grade[STUDENTS] = {30, 20, 10,40,50};;
	int i, s;
	for (i = 0; i < STUDENTS; i++) {
		printf("번호 %d: ", i);
		for (s = 0; s < grade[i]; s++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
