//10��������(ѡ��
#include"stdio.h"
int main()
{
	int i, j, temp, index, a[10];
	printf("���������10������\n");
	for (i = 0; i < 10; i++)
	{
		printf("�������%d����", i + 1);
		scanf("%d", &a[i]);
	}
	printf("\n���δ���������");
	for (i = 0; i < 10; i++)
		printf("% 3d", a[i]);
	for (i = 0; i < 10-1; i++)	//10��Ԫ��ѡ��9��
	{
		index = i;	//���������е�һ��Ԫ���±걣����index��
		for (j = i + 1; j < 10; j++)
		{
			if (a[index] > a[j])
				index = j;	//��¼�µ�СԪ�ص��±�
			if (index!=i)
			{
				temp = a[i];
				a[i] = a[index];
				a[index] = temp;
			}
		}
	}
	printf("\n��������������");
	for (i = 0; i <= 9; i++)
		printf("% 3d", a[i]);
	printf("\n");
	return 0;
}
