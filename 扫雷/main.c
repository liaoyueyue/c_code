//这里是扫雷的主框架

#include"game.h"


void Menu()
{
	printf("*********简易版扫雷*******\n");
	printf("**************************\n");
	printf("********1、开始游戏*******\n");
	printf("********0、退出游戏*******\n");
	printf("**************************\n");
}

void Play()
{
	//游戏初始化
	GameInIt();
	//游戏开始
	PlayGame();
	//游戏结果
	GameResult();
}


int main()
{
	int input = 0;
	do
	{
		Menu();
		printf("请输入你的选项：\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			Play();
			break;
		case 0:
			Sleep(800);
			system("cls");
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}

	} while (input);

	return 0;
}