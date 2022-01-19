//用数组类型处理求10个学生的平均成绩及高于平均成绩的人数
#include"stdio.h"
int main()
{
	int i,geshu=0;
	float sum=0, avg, score[10];
	printf("输入每名学生的成绩\n");
	for (i = 0; i < 10; i++)
	{
		scanf_s("%f", &score[i]);
		sum += score[i];
	}
	avg = sum / 10;
	for (i = 0; i < 10; i++)
	{
		if (score[i] > avg)
			geshu++;
	}
	printf("平均成绩为%f\n高于平均成绩的有%d个人\n", avg, geshu);
	return 0;
}