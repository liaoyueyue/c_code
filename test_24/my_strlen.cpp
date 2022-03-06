#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"
#include"assert.h"

int my_strlen(char* const arr)
{
	assert(arr != NULL);
	if (*arr != '\0')
	{
		return 1 + my_strlen(arr+1);
	}
	else
	{
		return 0;
	}
}
int main()
{
	char arr[] = "Hello world";
	printf("%d", my_strlen(arr));
	return 0;
}