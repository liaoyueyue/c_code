//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

//ʱ�临�Ӷ�
//O��1��< O��logn��< O��n��< O��n^2��
//����֪�������Ͼ�������С��Ԫ��Ϊ���Ͻ�Ԫ�أ�����Ԫ��Ϊ���½�Ԫ�ء�
//�Ⱥ;������Ͻǵ�Ԫ�ؽ��бȽϣ����Ҫ���ҵ�Ԫ��key�ϴ��������ƶ�������һ�е�Ԫ�ؽ��бȽϣ�
//���Ҫ���ҵ�Ԫ��key��С���������ƶ��������һ�е�Ԫ�ؽ��бȽϡ���������Ǵ����Ͻ�һֱ�ȵ����½ǡ�

#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"

int find(int arr[3][3], int n, int* row, int *col)
{
	*row = 0;
	*col = 2;
	while (*row<3&&*col>=0)
	{
		if (arr[*row][*col] > n)
		{
			(*col)--;
		}
		else if (arr[*row][*col] < n)
		{
			(*row)++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int input = 0;
	int row = 0;
	int col = 0;
	scanf("%d", &input);
	int ret = find(arr, input, &row, &col);//δ�ҵ�������������0����֮����1.
	if (ret == 0)
	{
		printf("not found");
	}
	else
	{
		printf("row=%d,col=%d\n", row, col);
	}
	return 0;
}


