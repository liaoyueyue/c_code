//������ѧ���ɼ��е���߷����ڵ�λ�����һ��λ�õĳɼ������������ɼ���߷�������ǰ�档
#include"stdio.h"
int main()
{
	int i, index,temp;
	float score[5];
	printf("����������ѧ���ĳɼ���\n");
	for (i = 0; i < 5; i++)
		scanf_s("%f", &score[i]);
	index = 0;
	for (i = 0; i < 5; i++)
		if (score[i] > score[index])
			index = i;
	temp = score[0];
	score[0] = score[index];
	score[index] = temp;
	printf("������ֵΪ��\n");
	for (i = 0; i < 5; i++)
		printf("%f\t", score[i]);
	return 0;
}