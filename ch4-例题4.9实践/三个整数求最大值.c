#include"stdio.h"
int main()
{
	int a, b, c,max,min;
	printf("��������������������������ֵ��Сֵ\n");
	scanf_s("%d%d%d", &a, &b, &c);
	if (a < b)
		max = b, min = a;
	else
		max = a, min = b;
	if (max < c)
		max = c;
	if (min > c)
		min = c;
	printf("���ֵΪ%d\n��СֵΪ%d\n", max,min);
	return 0;
}