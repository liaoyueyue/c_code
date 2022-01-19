//求4×4矩阵中最大值，及最大值所在行和列的位置。
#include"stdio.h"
int main()
{
	int i, j, row=0, col=0;
	int a[4][4];
	printf("请输入二维数组元素值：\n");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf_s
			("%d", &a[i][j]);
	printf("输出二维数组元素值:\n");
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
	printf("在4*4数组中最大值为：%d\n所在位置为%d行%d列。",a[row][col],row,col);
	return 0;
}