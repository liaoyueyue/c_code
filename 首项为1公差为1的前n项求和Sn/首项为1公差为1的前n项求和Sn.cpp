//1+2+3+4+......+n-1+n的和（采用递归法）
#include"stdio.h"
int funsum(int n)
{
	int sum = 0;
	if (n == 1)
		sum = 1;
	else
		sum =funsum(n - 1) + n;
	return sum;
}
int main()
{
	int n;
	printf("若求其1+2+3+4+......+n-1+n的值\n请输入n的值\n");
	scanf_s("%d", &n);
	printf("其值为%d\n",funsum(n));
	return 0;
}
