//分析指针的初始化程序，体会指针运算符的应用。
#include"stdio.h"
int main()
{
	int a = 20;
	int* pa = &a;
	printf("a=%d\n", a);
	printf("*pa=%d\n", *pa);
	printf("a变量地址=%ld\n", pa);
	printf("a变量地址=%ld\n", &a);
	return 0;
}