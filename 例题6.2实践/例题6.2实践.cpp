//���������ʹ�����10��ѧ����ƽ���ɼ�������ƽ���ɼ�������
#include"stdio.h"
int main()
{
	int i,geshu=0;
	float sum=0, avg, score[10];
	printf("����ÿ��ѧ���ĳɼ�\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &score[i]);
		sum += score[i];
	}
	avg = sum / 10;
	for (i = 0; i < 10; i++)
	{
		if (score[i] > avg)
			geshu++;
	}
	printf("ƽ���ɼ�Ϊ%f\n����ƽ���ɼ�����%d����\n", avg, geshu);
	return 0;
}