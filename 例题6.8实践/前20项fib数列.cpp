//��ÿ��5�������fib���е�ǰ20�fib����f(n)�Ķ������£�
//	   	    {	1				��n=0��1ʱ)
 // fib(n)= {	
//	    	{	fib(n-1)+fib(n-2)	(n>=2ʱ��
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