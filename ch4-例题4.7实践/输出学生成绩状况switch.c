#include"stdio.h"
int main()
{
	float score;
	printf("������ѧ���ĳɼ�\n");
	scanf_s("%f",&score);
	if (score >= 0 && score <= 100)
		switch ((int)(score / 10))
		{
		case 10:printf("ѧ���ɼ�����\n"); break;
		case 9:printf("ѧ���ɼ�����\n"); break;
		case 8:printf("ѧ���ɼ�����\n"); break;
		case 7:printf("ѧ���ɼ��е�\n"); break;
		case 6:printf("ѧ���ɼ�����\n"); break;
		default:printf("ѧ���ɼ�������\n"); break;
		}
	else
		printf("���������������");
	return 0;
}