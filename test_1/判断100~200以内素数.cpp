#include"stdio.h"
//����ֻ�ܱ�1�����ͱ��Լ�����
int main_1()
{
	int i = 0,count=0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j==0)
				break;
		}
		if (i == j)
		{
			count++;
			printf("%-6d", i);//����
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
int main_2()
{
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;	//����i��������
		for (j = 2; j <i; j++)
		{
			if (i % j == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag==1)
		{
			count++;
			printf("%-6d", i);//����
		}
	}
	printf("\ncount=%d", count);
	return 0;
}

//�Ż�
//m=a*b
//a��bһ��������һ��������<=��ƽ��m��
//16=4*4=8*2
//sqrt()----��ƽ������
#include"math.h"
int main_3()
{
	int i = 0, count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		int flag = 1;	//����i��������
		for (j = 2; j <= sqrt(i); j++)
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
			printf("%-6d", i);//����
		}
	}
	printf("\ncount=%d", count);
	return 0;
}
//�Ż�
//��Ϊ���е�ż�������Ա�2����������ż������������
int main()
{
	int i = 0, count = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int j = 0;
		int flag = 1;	//����i��������
		for (j = 2; j <= sqrt(i); j++)
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
			printf("%-6d", i);//����
		}
	}
	printf("\ncount=%d", count);
	return 0;
}