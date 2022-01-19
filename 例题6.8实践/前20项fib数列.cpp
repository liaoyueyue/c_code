//按每行5个数输出fib数列的前20项。fib数列f(n)的定义如下：
//	   	    {	1				（n=0、1时)
 // fib(n)= {	
//	    	{	fib(n-1)+fib(n-2)	(n>=2时）
#include"stdio.h"
int main()
{
	int n,t,fib[20];
	fib[0] = 1;
	fib[1] = 1;
	for (n = 2; n < 20; n++)
		fib[n] = fib[n - 1] + fib[n - 2];
	for (n = 0; n < 20; n++)
	{
		if (n % 5 == 0)
			printf("\n");
		printf("%6d", fib[n]);
	}
	return 0;
}