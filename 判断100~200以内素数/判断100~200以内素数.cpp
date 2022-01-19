#include"stdio.h"
//素数只能被1整除和被自己整除
int main_1()
{
	int i = 0,count=0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j==0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%-6d", i);//素数
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
int main_2()
{
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;	//假设i就是素数
		for (j = 2; j <i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag==1)
		{
			count++;
			printf("%-6d", i);//素数
		}
	}
	printf("\ncount=%d", count);
	return 0;
}

//优化
//m=a*b
//a和b一定至少有一个数字是<=开平方m的
//16=4*4=8*2
//sqrt()----开平方函数
#include"math.h"
int main_3()
{
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;	//假设i就是素数
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
			count++;
			printf("%-6d", i);//素数
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
//优化
//因为所有的偶数都可以被2整除，所以偶数都不是素数
int main()
{
	int i = 0, count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		int flag = 1;	//假设i就是素数
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
			count++;
			printf("%-6d", i);//素数
		}
	}
	printf("\ncount=%d", count);
	return 0;
}