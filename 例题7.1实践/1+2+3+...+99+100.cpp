//1+2+3+...+99+100
#include"stdio.h"
int funsum(int n, int m)
{
	int i, sum = 0;
	for (i = n; i <= m; i++)
		sum += i;
	return(sum);
}
int main()
{
	printf("1+2+3+...+99+100=%d", funsum(1, 100));
	return 0;
}
