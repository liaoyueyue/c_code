//有5名学生，每名学生有3门课程分别是高等数学、大学英语、C语言的考试成绩，求每门课的总分和平均分。
	// 数学   英语   c语言	//
	// 85	  82	 96		//	(学生1
	// 82	  87	 92		//	(学生2
	// 78	  89	 85		//	(学生3
	// 83	  56	 87		//	(学生4
	// 86	  77	 88		//	(学生5
	//参考数据，可具需要自行输入。
#include"stdio.h"
int main()
{
	int i, j, score[5][3], sum[3] = { 0,0,0 };
	float avg[3] = { 0,0,0 };
	for (i = 0; i < 5; i++)
	{
		printf("请依次输入第%d个学生的数学、英语、c语言的成绩\n", i + 1);
		for (j = 0; j < 3; j++)
			scanf_s("%d", &score[i][j]);
	}
	for (j = 0; j < 3; j++)
	{
		for (i = 0; i < 5; i++)
			sum[j] += score[i][j];
		avg[j] = (float)sum[j] / 5;
	}
	printf("数学、英语、c语言课程平均数依次为：");
	for (j = 0; j < 3; j++)
		printf("%6.2f", avg[j]);
	printf("\n");
	printf("数学、英语、c语言课程总分依次为：");
	for (j = 0; j < 3; j++)
		printf("%6d", sum[j]);
	return 0;
}
