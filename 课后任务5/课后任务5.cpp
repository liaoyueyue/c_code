//�����ȴ�С
#include"stdio.h"
int bidaxiao(int a, int b)
{
	int a, b;
	if (a > b)
		printf("a>b");
	else
		printf("a<b");
	return 0;
}
int main()
{
	int a, b;
	printf("input a,b");
	scanf_s("%d%d", &a, &b);
	bidaxiao(a,b);
}
//���������������ֵ
#include"stdio.h"
int main()
{
	int a, b, c, max;
	int funmax(int x, int y);
	printf("�����������\n");
	scanf_s("%d%d%d", &a, &b, &c);
	max = funmax(a, b);
	max = funmax(max, c);
	printf("���ֵΪ%d\n", max);
	return 0;
}
int funmax(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
//��10��ѧ����ƽ���ɼ�
#include"stdio.h"
int main()
{
	int score[10], i,sum=0;
	printf("input score\n");
	for (i = 0; i < 10; i++)
	{
	scanf_s("%d", &score[i]);
	sum += score[i];
	}
	printf("ƽ���ɼ�Ϊ��%f", (float)sum / 10.0);
	return 0;
}
