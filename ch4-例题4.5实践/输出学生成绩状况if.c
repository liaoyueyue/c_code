#include"stdio.h"
int main()
{
	float num;
	printf("请输入学生的成绩，输出学生成绩状况\n");
	scanf_s("%f", &num);
	if (num >= 90)
		printf("该学生成绩优秀");
	else if (num >= 80)
		printf("该学生成绩良好");
	else if (num >= 70)
		printf("该学生成绩中等");
	else if (num >= 60)
		printf("该学生成绩及格");
	else
		printf("该学生成绩不及格");
	return 0;
}