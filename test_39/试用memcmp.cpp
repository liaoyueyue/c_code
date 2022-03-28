#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"
#include"string.h"

int main()
{
	char buffer1[] = "abcde";
	char buffer2[] = "abce";
	int ret = memcmp(buffer1, buffer2, 4);
	printf("%d", ret);
	return 0;
}