#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

char* my_strncat(char* dest, const char* src, size_t n)
{
	char* tmp = dest;
	while (*dest)
	{		
		dest++;
	}
	int i = 0;
	for (i = 0; i < n && src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = 0;
	return tmp;
}

int main()
{
	char arr1[20] = "abcd";
	char arr2[5] = "efgh";
	my_strncat(arr1, arr2, 4);
	puts(arr1);
	return 0;
}
