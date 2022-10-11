/* Path: 2st/20221011-0.c */

#include <stdio.h>

int main(void)
{
	long grade[] = { 1, 2, 3, 4, 5, 6};
	long i, size;

	size = sizeof(grade) / sizeof(grade[0]);

	printf("%d, \n", sizeof(grade));
	printf("%d, \n", sizeof(grade[0]));

	for (i = 0; i < size; i++) {
		printf("%d, ", grade[i]);
	}
}
