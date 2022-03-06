#define _CRT_SECURE_NO_WARNINGS 1

#include "stdio.h"
#include "cassert"

char* my_strcpy(char* desr, const char* src)
{
	assert(*desr != NULL);//╤оят
	assert(*src != NULL);//╤оят
	char* ret = desr;
	while (*desr++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = "*****************";
	char arr2[] = "hello";
	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}