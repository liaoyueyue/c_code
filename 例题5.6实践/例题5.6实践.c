//��100~200֮��Ĳ��ܱ�3��������������ÿ��10�����ĸ�ʽ���
#include"stdio.h"
int main()
{
	int n, i = 0;
	for (n = 100; n <= 200; n++)
	{
		if (n % 3==0)
		{
			continue;
		}
		printf("%5d", n);
		i++;
		if (i % 10 == 0)
		{
			printf("\n");
		}
	}
	printf("\n");
	return 0;
}
