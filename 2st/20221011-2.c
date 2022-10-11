/* Path: 2st/20221011-2.c */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void)
{	
	int *data;
	int i;

	data = (int *)malloc(SIZE * sizeof(int));
	for (i = 0; i < SIZE; i++) {
		printf("정수를 입력하시오 : ");
		scanf("%d", &data[i]);
	}
	for (i = SIZE - 1; i >= 0; i--) {
		printf("%d\n", data[i]);
	}
	// for (i = 0; i < SIZE; i++) {
	// 	printf("%d\n", data[i]);
	// }
	free(data);
	return 0;
}
