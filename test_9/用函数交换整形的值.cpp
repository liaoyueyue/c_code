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
	//дһ�����������������α�����ֵ
	printf("����ǰa=%d��b=%d\n", a, b);
	Swap(&a,&b);
	printf("������a=%d��b=%d\n", a, b);
	return 0;
}