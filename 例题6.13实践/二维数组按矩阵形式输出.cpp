//����һ��4��4�Ķ�ά����array������Ԫ�ص�ֵ�ɱ��ʽarray[i][j] = i + j�õ�����������ʽ���array
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