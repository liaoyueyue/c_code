#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include"math.h"
int is_prime(int i)
{
	int j = 0;
	for (j = 2; j <= sqrt(i); j++)
	{
		if (i % j == 0)
		{
			return 0;//������������0
		}
	}
	return 1;//����������1
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i < 200; i++)
	{
		//�ж�i�Ƿ�Ϊ����
		if (is_prime(i) == 1)
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\nһ����%d������", count);
	return 0;
}