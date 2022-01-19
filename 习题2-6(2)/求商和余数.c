#include"stdio.h"
int main()
{
	int a, b, c, d;
	printf("请输入两个整数即可求出其商和余数\n");
	scanf_s("%d%d", &a, &b);
	c = a / b;
	d = a % b;
	printf("其商为%d，其余数为%d\n", c, d);
	return 0;
}