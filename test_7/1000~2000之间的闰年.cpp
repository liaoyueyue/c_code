#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
//闰年：
//	   1.可以被4整除，不可以被100整除
//	   2.可以被400整除
int main()
{
	int year;
	int count=0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%-6d", year);
			count++;
		}
	}
		printf("\n一共有%d\n", count);
	return 0;
}