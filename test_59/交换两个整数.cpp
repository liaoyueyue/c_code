#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�������������������������ݡ�

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
	printf("����ǰ��a = %d, b = %d", a, b);
	exchange_num(&a, &b);
	printf("\n������a = %d, b = %d", a, b);
	return 0;
}