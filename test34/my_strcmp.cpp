#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"
#include"assert.h"

int my_strcmp(const char* s1, const char* s2)
{
	assert(s1 && s2);
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
		s2++;
		s1++;
	}
	return *s1 - *s2;
}

int main()
{
	char arr1[] = "abcde";
	char arr2[] = "abcdef";
	printf("%d", my_strcmp(arr1, arr2));
	return 0;
}

//int my_strcmp(const char* s1, const char* s2)
//{
//	do
//	{
//		if (*s1 > *s2)
//		{
//			return 1;
//		}
//		else if (*s1 < *s2)
//		{
//			return -1;
//		}
//	} while (*s1++ && *s2++);
//	return 0;
//}