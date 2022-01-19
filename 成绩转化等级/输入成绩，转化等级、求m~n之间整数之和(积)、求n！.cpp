#include"stdio.h"
//输入成绩，转化等级(100)
int diyiti()
{
	int score;
	printf("请输入成绩：\n");
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
//求m~n之间整数之和(积)（m < n)
int dierti()
{
	int m, n;
	double sum = 0, ji = 1;
	printf("请输入m,n的值\n");
	scanf_s("%d%d", &m, &n);
	for (; m <= n; m++)
	{
		sum += m;
		ji *= m;
	}
	printf("m~n之间整数之和为：%lf积为：%lf", sum, ji);
	return 0;
}
//求n！(n为正整数)
int disanti()
{
	int i, n;
	double sum = 1;
	printf("请输入n的值：\n");
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum * i;
	printf("%d!=%lf", n, sum);
	return 0;
}
int main()
{
	int i;
	printf("1.输入成绩，转化等级(100)\n");
	printf("2.求m~n之间整数之和(积)（m<n)\n");
	printf("3.求n！(n为正整数)\n");
	printf("请输入题号：\n");
	scanf_s("%d", &i);
	if (i == 1) diyiti();
	if (i == 2) dierti();
	if (i == 3) disanti();
	return 0;
}