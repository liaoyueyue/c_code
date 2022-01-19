//通过键盘输入5名学生的成绩，求5名学生的平均成绩。
#include"stdio.h"
int main()
{
	int i,score[5];
	float sum=0,avg;
	printf("请输入五名学生的成绩：\n");
	for (i = 0; i <= 4; i++)
		scanf_s("%d", &score[i]);
	for (i = 0; i <= 4; i++)
		sum += score[i];
	avg = sum / 5;
		printf("平均成绩为%f", avg);
	return 0;
}