//定义一个4×4的二维数组array，数组元素的值由表达式array[i][j] = i + j得到，按矩阵形式输出array
#include"stdio.h"
int main()
{
	int i,j,array[4][4];
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			array[i][j] = i + j;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%6d", array[i][j]);
		printf("\n");
	}
	return 0;
}