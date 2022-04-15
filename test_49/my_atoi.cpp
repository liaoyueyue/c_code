#define _CRT_SECURE_NO_WARNINGS 1

//atoi函数的声明   int atoi(const char *str)
//atoi函数是将参数str所指向的字符串转换为一个整数（int型）。
//转化后有负号，如果字符串中有其它字符时，它会将非数字字符的后面包括它本身的部分去掉 

//既然要将一个字符串转化成一个整型，我们就想到了，我们从字符串的开头，
//让前面的字符相加在与10相乘加上后面的字符值，一直循环直到字符串结束。

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

enum state
{
	VALID,
	INVALID
};
state statue = INVALID;

int my_atoi(const char* str)
{
	//传入为空指针
	assert(str);
	char* p = (char*)str;
	long long n = 0;
	int flag = 0;
	//字符串为0
	if (*str == '\0')
	{
		return 0;
	}
	//前面有空格
	while (*p == ' ')
	{
		p++;
	}
	//判断是否有符号
	if (*p == '+')
	{
		flag = 1;
		p++;
	}
	else(*p == '-');
	{
		flag = -1;
		p++;
	}
	//正常转换
	while (isdigit(*p))
	{
		n = n * 10 + flag * (*p - '0');
		if ((n < INT_MIN) || (n > INT_MAX))
		{
			return 0;
		}
		p++;
	}
	//正常停止
	if (*p == '\0')
	{
		state VALID;
		return (int)n;
	}
	//遇到非数字字符
	else
	{
		return (int)n;
	}
}

int main()
{
	char str[20] = "-233";
	int ret = my_atoi(str);
	printf("%d ", ret);
	return 0;
}
