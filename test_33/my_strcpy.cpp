#define _CRT_SECURE_NO_WARNINGS 1

//ģ��strcpy

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
//void my_strcpy(char arr[], char brr[], int sz) //ģ��ʵ��strcpy(����)
//{
//	int i = 0;
//	for (; i <= sz; i++) //����� i ȡֵ��Χ���Ե��� sz Ŀ�ľ��ǽ�'\0'��ֵ��Ŀ���ַ�����
//	{
//		arr[i] = brr[i];
//	}
//}
//int main()
//{
//	char arr[100];
//	char brr[] = "I am a student.";
//	int sz = strlen(brr);
//	printf("%d\n", sz);       //��ӡ��brr���ַ�������
//	my_strcpy(arr, brr, sz);
//	printf("%s\n", arr);
//	return 0;
//}
//
