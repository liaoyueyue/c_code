//����n������������n����֮�е�ż����ƽ��ֵ�������
#include"stdio.h"
int main()
{
	int i, n, x, sum = 0, s = 0;
	float avg = 0;
	printf("���������ֵĸ���\n");
	scanf_s("%d", &n);
	printf("������%d����\n", n);
	for (i = 1; i <= n; i++)
	{
		scanf_s("%d", &x);
		if (x % 2 == 0)
		{
			sum += x;
			s++;
		}
	}
	avg = sum / s;
	printf("���������%d�����У���%d��ż��������%d��ż����ƽ��ֵΪ%f\n", n, s, s, avg);
	return 0;
}