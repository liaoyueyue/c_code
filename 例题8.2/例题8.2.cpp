//同类型指针变量相互赋值
#include"stdio.h"
int main()
{
	int a = 10, b = 20;
	int* pa = &a, * pb = &b;
	printf("*pa=%d", *pa);
	printf("*pb=%d\n", *pb);
	pa = pb;
	printf("*pa=%d", *pa);
	printf("*pb=%d", *pb);
	return 0;
}