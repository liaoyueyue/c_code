#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int my_strlen_1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main_1()
{
	char arr[] = "bit";
	//模拟一个strlen函数
	printf("%d", my_strlen_1(arr));
	return 0;
}

