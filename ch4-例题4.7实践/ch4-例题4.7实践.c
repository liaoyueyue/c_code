#include"stdio.h"
int main()
{
	float score;
	printf("请输入学生的成绩\n");
	scanf_s("%f",&score);
	if (score >= 0 && score <= 100)
		switch ((int)(score / 10))
		{
		case 10:printf("学生成绩满分\n"); break;
		case 9:printf("学生成绩优秀\n"); break;
		case 8:printf("学生成绩良好\n"); break;
		case 7:printf("学生成绩中等\n"); break;
		case 6:printf("学生成绩及格\n"); break;
		default:printf("学生成绩不及格\n"); break;
		}
	else
		printf("输入错误重新输入");
	return 0;
}