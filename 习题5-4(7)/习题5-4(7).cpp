//求Sn=a+aa+aaa+..+aa...a的值。其中，a是用户通过键盘输入的一个具体值，n代表的是a的位数
#include"stdio.h"
int main()
{
	int a, n,s,t;
	int i;
	printf("请输入a和n的值：\n");
	scanf_s("%d%d", &a, &n);
	t = a;
	s = a;
	for (i = 2; i <= n; i++)
	{
		t = t * 10 + t;
		s += t;
	}
	printf("Sn=%d", s);
	return 0;
}