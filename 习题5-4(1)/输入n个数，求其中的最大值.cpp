//����n�����������е����ֵ
#include"stdio.h"
int main()
{
	int i, n;
	float x, max;
	printf("�������ж��ٸ���\n");
	scanf_s("%d", &n);
	printf("������%d������\n", n);
	max = -1e30;
	for (i = 1; i <= n; i++)
	{
		scanf_s("%f", &x);
		if (x > max)
		{
			max = x;
		}
	}
	printf("��%d���������ֵΪ%f\n", n, max);
	return 0;
}