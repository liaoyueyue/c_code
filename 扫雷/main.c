//������������������

#include "game.h"

void Menu()
{
	printf("********���װ�������********\n");
	printf("****    1����ʼ��Ϸ    ***\n");
	printf("****    0���˳���Ϸ    ***\n");
	printf("**************************\n");
}

void Play()
{
	srand((unsigned int)time(NULL));
	char ret = 0;
	//������������������
	char board[ROW][COL] = { 0 };
	//��ʼ������Ϊ��
	InItBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1)
	{
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (ret != 'C')//�������ֵ��Ϊ����
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
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
	}

}


int main()
{
	int input = 0;
	do
	{
		Menu();
		printf("���������ѡ�>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			Play();
			break;
		case 0:
			Sleep(800);
			system("cls");
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}

	} while (input);

	return 0;
}