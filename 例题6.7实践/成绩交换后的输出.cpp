//将五名学生成绩中的最高分所在的位置与第一个位置的成绩交换，即将成绩最高分排在最前面。
#include"stdio.h"
int main()
{
	int i, index,temp;
	float score[5];
	printf("请输入五名学生的成绩：\n");
	for (i = 0; i < 5; i++)
		scanf_s("%f", &score[i]);
	index = 0;
	for (i = 0; i < 5; i++)
		if (score[i] > score[index])
			index = i;
	temp = score[0];
	score[0] = score[index];
	score[index] = temp;
	printf("交换的值为：\n");
	for (i = 0; i < 5; i++)
		printf("%f\t", score[i]);
	return 0;
}