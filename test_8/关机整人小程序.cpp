#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int main()
{
	char input[20] = { 0 };//存放输入的信息
	printf("请注意，你的电脑即将在一分钟内关机，如果输入“我是猪”，就取消关机！！！\n");
	system("shutdown -s -t 60");
again:
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("输入错误！取消失败！\n");
		goto again;
	}
	return 0;
}