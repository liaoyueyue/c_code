#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include"stdlib.h"
#include"windows.h"
#include"time.h"

void menu()
{
	printf("*****************************\n");
	printf("*********  1.play    ********\n");
	printf("*********  0.exit    ********\n");
	printf("*****************************\n");
}

void game()
{
	//	1. 自动产生一个1~100之间的随机数
	//	2. 猜数字
	//		a.猜对了，就恭喜你，游戏结束
	//		b.你猜错了，会告诉猜大了，还是猜小了，继续猜，直到猜对
	//	3. 游戏一个一直玩，除非退出游戏

	int t = 1;//计数
	int ret = rand() % 100 + 1;
	int guess = 0;
	printf("欢迎来玩猜数字游戏，请在1~100之内输入一个数\n");
	while (1)
	{
		printf("这是第%d次猜\n", t);
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了，恭喜你！！！\n");
			break;
		}
		t++;
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();//打开菜单
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			Sleep(2000);
			system("cls");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);

	return 0;
}