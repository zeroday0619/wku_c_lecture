/* Path: 2st/20220928-1.c */

#include <stdio.h>

void forever(int num){
	if (num == 10) {
		return;
	}

	printf("forever value!");	
	num = num + 1;
	forever(num);
}

int main(void)
{
	forever(0);
}
