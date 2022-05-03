#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数来交换两个整数的内容。

#include <stdio.h>

void exchange_num(int* x, int* y)
{
	*x = *x ^ *y;
	*y = *x ^ *y;
	*x = *x ^ *y;
}


int main()
{
	int a = 6;
	int b = 8;
	printf("交换前：a = %d, b = %d", a, b);
	exchange_num(&a, &b);
	printf("\n交换后：a = %d, b = %d", a, b);
	return 0;
}