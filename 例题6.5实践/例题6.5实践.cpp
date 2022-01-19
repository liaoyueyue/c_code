//在输入的5名学生成绩中查找是否有输入的已指定成绩，若有则输出相应位置，否则输出 not fund 信息
#include"stdio.h"
int main()
{
	int i;
	float score1, score[5];
	printf("请输入五名学生的成绩：\n");
	for (i = 0; i <= 4; i++)
		scanf_s("%f", &score[i]);
	printf("请输入一指定成绩：\n");
	scanf_s("%f", &score1);
	for (i = 0; i <= 4; i++)
		if (score[i] == score1)
		{
			printf("位置为%d", i);
			break;
		}
	if (i >= 5)
		printf("not fund");
	return 0;
}