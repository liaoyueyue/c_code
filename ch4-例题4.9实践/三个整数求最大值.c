#include"stdio.h"
int main()
{
	int a, b, c,max,min;
	printf("请输入三个整数即可输出其最大值最小值\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
		max = b, min = a;
	else
		max = a, min = b;
	if (max < c)
		max = c;
	if (min > c)
		min = c;
	printf("最大值为%d\n最小值为%d\n", max,min);
	return 0;
}