//��һ��С��ѧ��c���Գɼ��ּܷ�ƽ����
#include"stdio.h"
int main()
{
	int a, b, c, d,sum;
	float avg;
	printf("������С��ĳɼ�\n");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	sum = a + b + c + d;
	avg = sum / 4;
	printf("С����ܷ�Ϊ%d\nƽ����Ϊ%f\n", sum, avg);
	return 0;
}