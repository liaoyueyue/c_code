//����ָ��ĳ�ʼ���������ָ���������Ӧ�á�
#include"stdio.h"
int main()
{
	int a = 20;
	int* pa = &a;
	printf("a=%d\n", a);
	printf("*pa=%d\n", *pa);
	printf("a������ַ=%ld\n", pa);
	printf("a������ַ=%ld\n", &a);
	return 0;
}