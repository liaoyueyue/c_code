#include"stdio.h"
//���������������ֵ��Сֵ������С�������
int main1()
{
	int a, b, c, max, min, sum;
	printf("input a,b,c\n");
	scanf_s("%d%d%d", &a, &b, &c);
	max = a;
	min = a;
	sum = a + b + c;
	if (b > max)
	{
		max = b;
		if (c > max)
			max = c;
	}
	if (b < min)
	{
		min = b;
		if (c < min)
			min = c;
	}
	printf("��С:%d\n���:%d\n", min, max);
	printf("%d\t%d\t%d", min, sum - min - max, max);
	return 0;
}
//��ֶκ���
int main2()
{
	float x, y;
	printf("������x��ֵ��\n");
	scanf_s("%f", &x);
	if (x >= 0)
		y = 4 * x + 1;
	else
		y = 3 * x - 2;
	printf("y=%.3f\n", y);
	return 0;
}