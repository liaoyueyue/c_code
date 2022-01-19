//求四个小组学生c语言成绩总分及平均分
#include"stdio.h"
int main()
{
	int a, b, c, d, sum, i = 1;
	float avg;
	while (i <= 4)
	{
		printf("请输入第%d个小组的成绩\n", i);
		scanf_s("%d%d%d%d", &a, &b, &c, &d);
		sum = a + b + c + d;
		avg = sum / 4;
		printf("第%d个小组的:\n总分为%d\n平均分为%f\n", i, sum, avg);
		i++;
	}
	return 0;
}