#define _CRT_SECURE_NO_WARNINGS 1

//实现函数判断year是不是闰年。

#include <stdio.h>

int leap_year(int y)	//返回1则是闰年，返回0则不是闰年
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year = 0;
	printf("请输入年份判断是否是闰年：\n");
	scanf("%d", &year);
	if (leap_year(year) == 1)
	{
		printf("是闰年");
	}
	else
	{
		printf("不是闰年");
	}
	return 0;
}