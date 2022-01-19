//在五名学生成绩中，查找最高分。
#include"stdio.h"
int main()
{
	int i, index;
	float score[5];
	printf("请输入五名学生的成绩：\n");
	for (i = 0; i < 5; i++)
		scanf_s("%f", &score[i]);
	index = 0;
	for (i = 0; i < 5; i++)
		if (score[i] > score[index])
			index = i;
	printf("在五名学生成绩中，最高分为%f", score[index]);
	return 0;
}