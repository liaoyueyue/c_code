#define _CRT_SECURE_NO_WARNINGS 1

//ʵ�ֺ����ж�year�ǲ������ꡣ

#include <stdio.h>

int leap_year(int y)	//����1�������꣬����0��������
{
	if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year = 0;
	printf("����������ж��Ƿ������꣺\n");
	scanf("%d", &year);
	if (leap_year(year) == 1)
	{
		printf("������");
	}
	else
	{
		printf("��������");
	}
	return 0;
}