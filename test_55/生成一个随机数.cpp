#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand((unsigned int)time(NULL));
	int random = rand() % 100 + 1;		/*[1,100]*/
	printf("%d\n", random);
	return 0;
}