#define _CRT_SECURE_NO_WARNINGS 1
//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9

#include"stdio.h"

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)	//�жϸ�λ���ϵ�
		{
			printf("%d ", i);
			count++;
		}
		if (i / 10 == 9)	//�ж�ʮλ���ϵ�
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\nһ��%d��", count);
	return 0;
}
