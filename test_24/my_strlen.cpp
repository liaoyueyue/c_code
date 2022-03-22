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

////��������ʽ
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
////���ܴ�����ʱ����������
//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
//
////ָ��-ָ��ķ�ʽ
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != ��\0��)
//		p++;
//	return p - s;
//}
