#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"

int my_strcmp(char* dest, char* src)
{
	do
	{
		if (*dest > *src)
		{
			return 1;
		}
		else if (*dest < *src)
		{
			return -1;
		}
	} while (dest++ && src++);
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "abcdefg";
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}