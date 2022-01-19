//对数组a的10个元素赋0到9的值，并按反向输出
#include"stdio.h"
int main()
{
	int i,a[10];
	for (i = 0; i <= 9; i++)
		a[i] = i;
	for (i = 9; i >= 0; i--)
		printf("%d", a[i]);
	return 0;
}