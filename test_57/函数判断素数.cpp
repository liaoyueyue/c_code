#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������

#include <stdio.h>
#include <math.h>

void prime_num(int n)
{
	int i = 0;
	int flag = 1;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
	{
		printf("%d ", n);
	}
}

int main()
{
	for (int n = 100; n <= 200; n++)
	{
		prime_num(n);//iΪ�������ӡ��i��Ϊ�����򲻴�ӡ
	}
	return 0;
}
