//������ɨ�׵������

#include"game.h"


void Menu()
{
	printf("*********���װ�ɨ��*******\n");
	printf("**************************\n");
	printf("********1����ʼ��Ϸ*******\n");
	printf("********0���˳���Ϸ*******\n");
	printf("**************************\n");
}

void Play()
{
	//��Ϸ��ʼ��
	GameInIt();
	//��Ϸ��ʼ
	PlayGame();
	//��Ϸ���
	GameResult();
}


int main()
{
	int input = 0;
	do
	{
		Menu();
		printf("���������ѡ�\n");
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