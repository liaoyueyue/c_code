#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int main1()
{
	int m = 0;
	int n = 0;
	scanf("%d%d", &m, &n);
	int max = 0;
	//�ٶ����Լ�������������Ľ�С��
	if (m > n)
		max = n;
	else
		max = m;
	while (1)
	{
		if (m % max == 0 && n % max == 0)
		{
			printf("���Լ����%d", max);
			break;
		}
		max--;
	}
	return 0;
}

//շת�����
int main()
{
	int m = 0;
	int n = 0;
	int t = 0;
	scanf("%d%d", &m, &n);
	while(t = m % n)
	{
		m = n;
		n = t;
	}
	printf("���Լ����%d", n);
	return 0;
}