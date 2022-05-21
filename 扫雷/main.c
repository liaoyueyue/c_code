//这里是三子棋的主框架

#include "game.h"

void Menu()
{
	printf("********简易版三子棋********\n");
	printf("****    1、开始游戏    ***\n");
	printf("****    0、退出游戏    ***\n");
	printf("**************************\n");
}

void Play()
{
	srand((unsigned int)time(NULL));
	char ret = 0;
	//这里存放玩家下棋的数据
	char board[ROW][COL] = { 0 };
	//初始化棋盘为空
	InItBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')//如果返回值不为继续
		{
			break;
		}
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}

	if (ret == '*')
	{
		printf("玩家赢了\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}

}


int main()
{
	int input = 0;
	do
	{
		Menu();
		printf("请输入你的选项：>");
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