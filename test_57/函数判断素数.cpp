#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。

#include <stdio.h>
#include <math.h>

void prime_num(int n)
{
	int i = 0;
	int flag = 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%d ", n);
	}
}

int main()
{
	for (int n = 100; n <= 200; n++)
	{
		prime_num(n);//i为素数则打印，i不为素数则不打印
	}
	return 0;
}
