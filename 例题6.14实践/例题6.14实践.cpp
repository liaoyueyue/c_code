//��4��4���������ֵ�������ֵ�����к��е�λ�á�
#include"stdio.h"
int main()
{
	int i, j, row=0, col=0;
	int a[4][4];
	printf("�������ά����Ԫ��ֵ��\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf_s
			("%d", &a[i][j]);
	printf("�����ά����Ԫ��ֵ:\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%6d", a[i][j]);
		printf("\n");
	}
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] > a[row][col])
			{
				row = i;
				col = j;
			}
		}
	printf("��4*4���������ֵΪ��%d\n����λ��Ϊ%d��%d�С�",a[row][col],row,col);
	return 0;
}