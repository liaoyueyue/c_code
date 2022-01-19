#include"stdio.h"
int main()
{
	int a, b;
	printf("请输入两个整数即可输出其中的最大值\n");
	scanf_s("%d%d", &a, &b);
	if (a > b)
		printf("%d和%d,其中更大的为%d\n", a, b, a);
	else
		printf("%d和%d,其中更大的为%d\n", a, b, b);
	return 0;
}