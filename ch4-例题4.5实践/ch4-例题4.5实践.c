#include"stdio.h"
int main()
{
	float num;
	printf("������ѧ���ĳɼ������ѧ���ɼ�״��\n");
	scanf_s("%f", &num);
	if (num >= 90)
		printf("��ѧ���ɼ�����");
	else if (num >= 80)
		printf("��ѧ���ɼ�����");
	else if (num >= 70)
		printf("��ѧ���ɼ��е�");
	else if (num >= 60)
		printf("��ѧ���ɼ�����");
	else
		printf("��ѧ���ɼ�������");
	return 0;
}