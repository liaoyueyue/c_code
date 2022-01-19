//用指针编实现从键盘输入任意的两个整数a、b，要求按从小到大顺序输出。
#include"stdio.h"
//int main()
//{
//	int a, b,c;
//	printf("请输入a，b的值：\n");
//	scanf_s("%d%d", &a, &b);
//	printf("%d,%d\n", a<b ? a : b, a>b ? a : b);
//	if (a > b)
//	{
//		c = a;
//		a = b;
//		b = c;
//	}
//	printf("%d,%d", a, b);
//	return 0;
//}

int main()
{
	int a, b;
	scanf_s("%d%d", &a, &b);
	int* pa, * pb, * pm;
	pa = &a;
	pb = &b;
	if (*pa > *pb)
	{
		pm = pa;
		pa = pb;
		pb = pm;
	}
	printf("*pa=%d\n*pb=%d", *pa, *pb);
	return 0;
}