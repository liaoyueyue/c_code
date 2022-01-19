#include"stdio.h"
int main()
{
	int i;
	printf("请输入一个整数即可输出相应的星期\n");
	scanf_s("%d", &i);
	if (i >= 1 && i <= 7)
		switch (i)
		{
		case 1:printf("monday\n"); break;
		case 2:printf("tuesday\n"); break;
		case 3:printf("wednesday\n"); break;
		case 4:printf("thursday\n"); break;
		case 5:printf("friday\n"); break;
		case 6:printf("saturday\n"); break;
		case 7:printf("sunday\n"); break;
		}
	else
		printf("input error\n");
	return 0;
}
