#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
void Swap(int* pa, int* pb)
{
	int temp = 0;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
int main()
{
	int a = 10;
	int b = 20;
	//写一个函数交换两个整形变量的值
	printf("交换前a=%d，b=%d\n", a, b);
	Swap(&a,&b);
	printf("交换后a=%d，b=%d\n", a, b);
	return 0;
}