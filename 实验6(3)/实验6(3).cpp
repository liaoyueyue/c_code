//·½Õó¶Ô½Ç×ªÖÃ
#include"stdio.h"
int main()
{
	int i, j, temp, a[4][4];
	printf("input num:");
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf_s("%d", &a[i][j]);
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
		{
			if (i <= j)
			{
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
	for (i = 0; i < 4; i++)
	{
		printf("\n");
		for (j = 0; j < 4; j++)
			printf("%5d", a[i][j]);
	}
	return 0;
}