#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int fib(int n)
{
	if (n <= 2)
		return 1;
	else
		return fib(n - 2) + fib(n - 1);//Ч��̫�ͣ��ظ�����̫��
}
int main_lite()
{
	int n = 0;
	scanf("%d", &n);//���������
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}


int fib_plus(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);//���������
	int ret = fib_plus(n);
	printf("%d", ret);
	return 0;
}