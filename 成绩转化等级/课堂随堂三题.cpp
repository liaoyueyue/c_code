#include"stdio.h"
//����ɼ���ת���ȼ�(100)
int diyiti()
{
	int score;
	printf("������ɼ���\n");
	scanf_s("%d", &score);
	if (score >= 0 && score <= 100)
	{
		if (score <= 20)
			printf("E");
		else if (score <= 40)
			printf("D");
		else if (score <= 60)
			printf("C");
		else if (score <= 80)
			printf("B");
		else if (score <= 100)
			printf("A");

	}
	else
		printf("error");
	return 0;
}
//��m~n֮������֮��(��)��m < n)
int dierti()
{
	int m, n;
	double sum = 0, ji = 1;
	printf("������m,n��ֵ\n");
	scanf_s("%d%d", &m, &n);
	for (; m <= n; m++)
	{
		sum += m;
		ji *= m;
	}
	printf("m~n֮������֮��Ϊ��%lf��Ϊ��%lf", sum, ji);
	return 0;
}
//��n��(nΪ������)
int disanti()
{
	int i, n;
	double sum = 1;
	printf("������n��ֵ��\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum * i;
	printf("%d!=%lf", n, sum);
	return 0;
}
int main()
{
	int i;
	printf("1.����ɼ���ת���ȼ�(100)\n");
	printf("2.��m~n֮������֮��(��)��m<n)\n");
	printf("3.��n��(nΪ������)\n");
	printf("��������ţ�\n");
	scanf_s("%d", &i);
	if (i == 1) diyiti();
	if (i == 2) dierti();
	if (i == 3) disanti();
	return 0;
}