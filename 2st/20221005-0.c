/* Path: 2st/20221005-0.c */

#include <stdio.h>
#define SIZE 5


int main(void)
{	
	int array[SIZE] = { 1, 2, 3, 4, 5};
	for (int i = 0; i < SIZE; i++) {
		printf("array[%d] ", array[i]);
	}
	return 0;
}
