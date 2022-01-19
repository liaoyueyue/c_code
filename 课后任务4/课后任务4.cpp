#include"stdio.h"
#define N 6
//求6名学生成绩，求其平均分
int main1()
{
	float score[N], sum = 0;
	int i;
	printf("输入6名学生的成绩：\n");
	for (i = 0; i < N; i++)
		scanf_s("%f", &score[i]);
	for (i = 0; i < N; i++)
		sum += score[i];
	printf("6名学生的平均成绩：%.2f\n,sum/N");
	return 0;
}
//求6名学生成绩，统计超过平均的学生人数
void main2()
{
	float score[N], sum = 0;
	int i,n;
	printf("输入6名学生的成绩：\n");
	for (i = 0; i < N; i++)
		scanf_s("%f", &score[i]);
	for (i = 0; i < N; i++)
		sum += score[i];
	printf("6名学生的平均成绩：%.2f\n,sum/N");
	for (i = 0; i < N; i++)
		if (score[i] > sum / N)
			n++;
	printf("有%d个学生超过平均成绩");
}
//定义数组，存储字符串"C++program","codeblocks ide","The art of orogramming"
//并分行输出
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
//菲波拉契数列，
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