#define _CRT_SECURE_NO_WARNINGS 1
//青蛙跳台阶
//一只青蛙一次可以跳上1级台阶，也可以跳上2级
//求该青蛙跳上一个n级的台阶总共有多少种跳法？
// 分析：1级台阶有1种跳法，2级台阶有2种跳法，3级台阶有3种，4级台阶有5种，5级台阶有8种
// *类似与斐波拉契数列（fib[n]=fib[n-2]+fib[n-1])
// 即在2级台阶以上时，青蛙跳到该台阶的跳法等于前一台阶的跳法与前二台阶的跳法之和
#include"stdio.h"
int Fib(int n)
{
	if (n <= 0)
	{
		printf("error!");
		return -1;
	}
	if (1 == n)
	{
		return 1;
	}
	else if (2 == n)
	{
		return 2;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("青蛙上%d级台阶一共有%d种方法", n, Fib(n));
}