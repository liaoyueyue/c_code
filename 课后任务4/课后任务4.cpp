#include"stdio.h"
#define N 6
//��6��ѧ���ɼ�������ƽ����
int main1()
{
	float score[N], sum = 0;
	int i;
	printf("����6��ѧ���ĳɼ���\n");
	for (i = 0; i < N; i++)
		scanf_s("%f", &score[i]);
	for (i = 0; i < N; i++)
		sum += score[i];
	printf("6��ѧ����ƽ���ɼ���%.2f\n,sum/N");
	return 0;
}
//��6��ѧ���ɼ���ͳ�Ƴ���ƽ����ѧ������
void main2()
{
	float score[N], sum = 0;
	int i,n;
	printf("����6��ѧ���ĳɼ���\n");
	for (i = 0; i < N; i++)
		scanf_s("%f", &score[i]);
	for (i = 0; i < N; i++)
		sum += score[i];
	printf("6��ѧ����ƽ���ɼ���%.2f\n,sum/N");
	for (i = 0; i < N; i++)
		if (score[i] > sum / N)
			n++;
	printf("��%d��ѧ������ƽ���ɼ�");
}
//�������飬�洢�ַ���"C++program","codeblocks ide","The art of orogramming"
//���������
void shuchuzifuchuan()
{
	char str[3][30] = { "C++program","codeblocks ide","The art of orogramming" };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 30; j++)
			printf("%c", str[i][j]);
		printf("\n");
	}
}
//�Ʋ��������У�
int feibolaqi()
{
	int i;
	int fib[20] = { 1,1 };
	for (i = 2; i < 20; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	for (i = 0; i < 20; i++) 
	{
		printf("%-6d", fib[i]);
		if ((i + 1) % 5 == 0)
			printf("\n");
	}
	return 0;
}