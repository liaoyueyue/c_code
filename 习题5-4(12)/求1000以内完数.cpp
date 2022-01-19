//一个数如果恰好等于他所有的因子之和，这称这个数为“完数”。例如6=1+2+3，编写程序找出1000以内的所有完数。
#include"stdio.h"
int main()
{
		int	num, i, sum;
		for (num = 1; num < 1000; num++)
		{
			sum = 0;
			for (i = 1; i <= num / 2; i++)
			{
				if (num % i == 0)
					sum += i;
			}
			if (sum == num)
				printf("%d是完数\n", num);

		}
	return 0;
}