//求一个小组学生c语言成绩总分及平均分
#include"stdio.h"
int main()
{
	int a, b, c, d,sum;
	float avg;
	printf("请输入小组的成绩\n");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	sum = a + b + c + d;
	avg = sum / 4;
	printf("小组的总分为%d\n平均分为%f\n", sum, avg);
	return 0;
}