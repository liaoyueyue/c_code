//���ĸ�С��ѧ��c���Գɼ��ּܷ�ƽ����
#include"stdio.h"
int main()
{
	int a, b, c, d, sum, i = 1;
	float avg;
	while (i <= 4)
	{
		printf("�������%d��С��ĳɼ�\n", i);
		scanf_s("%d%d%d%d", &a, &b, &c, &d);
		sum = a + b + c + d;
		avg = sum / 4;
		printf("��%d��С���:\n�ܷ�Ϊ%d\nƽ����Ϊ%f\n", i, sum, avg);
		i++;
	}
	return 0;
}