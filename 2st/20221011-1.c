/* Path: 2st/20221011-1.c */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int *p;
	int i, size;

	printf("배열의 크기를 입력하세요: ");
	scanf("%d", &size);

	p = (int *)malloc(size * sizeof(int));
	if (p == NULL) {
		printf("메모리 할당에 실패했습니다. \n");
		exit(1);
	}
	for (i = 0; i < size; i++) {
		printf("p[%d]의 값을 입력하세요: ", i);
		scanf("%d", &p[i]);
	}
	for (i = 0; i < size; i++) {
		printf("p[%d] = %d \n", i, p[i]);
	}
	free(p);
	return 0;
}
