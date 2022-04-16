#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

char* my_strncpy(char* dst, const char* src, size_t n)
{
	int i = 0;
	for (i = 0; i < n && src[i]; i++)
	{
		dst[i] = src[i];
	}
	if (i < n)
	{
		dst[i] = 0;
	}
	return dst;
}

int main()
{
	char arr1[20] = "abcde";
	char arr2[] = "fghij";
	puts(my_strncpy(arr1, arr2, 6));
	return 0;
}
