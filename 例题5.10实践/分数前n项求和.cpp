//求1+1/2+1/3+1/4+...+1/n
#include"stdio.h"
int main()
{
	int i, n;
	float sum = 0;
	printf("请输入n的值：\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		sum += 1.0 / i;
	}
	printf("%f", sum);
	return 0;
}