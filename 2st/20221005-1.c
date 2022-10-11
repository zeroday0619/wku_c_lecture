/* Path: 2st/20221005-1.c */

#include <stdio.h>
#define SIZE 5

// 이건 걍 심심해서 짠거임

int main(void)
{
	int i;
	int a[SIZE] = { 1, 2, 3, 4, 5};
	int b[SIZE] = { 1, 2, 100, 4, 5};

	for (i = 0; i < SIZE; i++) {
		switch (a[i] == b[i]) {
			case 1:
				printf("a[%d]와 b[%d]는 같습니다 \n", i, i);
				break;
			case 0:
				printf("a[%d]와 b[%d]는 같지 않습니다.  \n", i, i);
				break;
		}
	}
	return 0;
}
