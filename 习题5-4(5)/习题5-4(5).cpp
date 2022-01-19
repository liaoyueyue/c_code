//计算斐波那契分数数列的前n项之和
//（斐波那契额分数数列为2 + 3/2 + 5/3 + 8/5 + 13/8 + 21/13+...)
#include"stdio.h"
int main()
{
	int i, n;
	double s=2.0, fm = 2.0, fz = 3.0,zqfz;
	printf("请输入n的值：\n");
	scanf_s("%d", &n);
	for (i = 2; i <= n; i++)
	{
		s += fz / fm;
		zqfz = fz;
		fz += fm;
		fm = zqfz;
	}
	printf("Sn=%.15lf", s);
	return 0;
}