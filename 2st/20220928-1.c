/* Path: 2st/20220928-1.c */

#include <stdio.h>

void forever(void){
	printf("oh! recursion!\n");
	forever();
}

int main(void)
{
	forever();
}
