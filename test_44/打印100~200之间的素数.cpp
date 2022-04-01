#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"
#include"math.h"

int main()
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int flag = 1;//假设i为素数
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%-5d", i);
			count++;
		}
	}
	printf("\n一共有%d个素数", count);
	return 0;
}
