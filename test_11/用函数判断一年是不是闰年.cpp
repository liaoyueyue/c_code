#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int is_leap_year(int y)
{
	return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}
int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y) == 1)
		{
			count++;
			printf("%d ", y);
		}
	}
	printf("\n��1000~2000����һ����%d������",count);
	return 0;
}