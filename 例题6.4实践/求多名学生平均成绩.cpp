//ͨ����������5��ѧ���ĳɼ�����5��ѧ����ƽ���ɼ���
#include"stdio.h"
int main()
{
	int i,score[5];
	float sum=0,avg;
	printf("����������ѧ���ĳɼ���\n");
	for (i = 0; i <= 4; i++)
		scanf_s("%d", &score[i]);
	for (i = 0; i <= 4; i++)
		sum += score[i];
	avg = sum / 5;
		printf("ƽ���ɼ�Ϊ%f", avg);
	return 0;
}