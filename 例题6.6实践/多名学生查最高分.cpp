//������ѧ���ɼ��У�������߷֡�
#include"stdio.h"
int main()
{
	int i, index;
	float score[5];
	printf("����������ѧ���ĳɼ���\n");
	for (i = 0; i < 5; i++)
		scanf_s("%f", &score[i]);
	index = 0;
	for (i = 0; i < 5; i++)
		if (score[i] > score[index])
			index = i;
	printf("������ѧ���ɼ��У���߷�Ϊ%f", score[index]);
	return 0;
}