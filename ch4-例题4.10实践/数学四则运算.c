#include"stdio.h"
int main()
{
	int a, b;
	char ch;
	printf("请输入数学四则运算表达式\n");
	scanf_s("%d%c%d", &a, &ch, &b);
	switch (ch)
	{
	case ' + ':printf(" % d + % d = % d\n", a,b,a + b); break;
	case ' - ':printf("%d-%d=%d\n",a,b, a - b); break;
	case ' * ':printf("%d*%d=%d\n",a,b, a * b); break;
	case ' / ':printf("%d/%d=%d\n",a,b, a / b); break;
	default:printf("input error\n");
	}
	return 0;
}