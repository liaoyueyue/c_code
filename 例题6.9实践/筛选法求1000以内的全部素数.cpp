//��ɸѡ����1000���ڵ�ȫ����������ͳ������������
#include"stdio.h"
#include"math.h"
int main()
{
	int i = 0, count = 0;
	for (i = 2; i <= 1000; i++)
	{
		int j = 0;
		int flag = 1;	//�ٶ�iΪ����
		for (j = 2; j <i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			count++;
			printf("%-6d", i);
		}
	}
	printf("\nһ����%d������", count);
	return 0;
}