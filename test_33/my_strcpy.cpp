#define _CRT_SECURE_NO_WARNINGS 1

//模拟strcpy

#include"stdio.h"
#include"assert.h"

char* my_strcpy(char* dest, const char* stc)
{
	assert(dest && stc);
	char* ret = dest;
	while (*dest++ = *stc++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = { 0 };
	char arr2[] = "abcdef";
	printf("%s", my_strcpy(arr1, arr2));
	return 0;
}

//#include<stdio.h>
//#include<string.h>  
//
//void my_strcpy(char arr[], char brr[], int sz) //模拟实现strcpy(拷贝)
//{
//	int i = 0;
//	for (; i <= sz; i++) //这里的 i 取值范围可以等于 sz 目的就是将'\0'赋值到目标字符串中
//	{
//		arr[i] = brr[i];
//	}
//}
//int main()
//{
//	char arr[100];
//	char brr[] = "I am a student.";
//	int sz = strlen(brr);
//	printf("%d\n", sz);       //打印出brr的字符串长度
//	my_strcpy(arr, brr, sz);
//	printf("%s\n", arr);
//	return 0;
//}
//
