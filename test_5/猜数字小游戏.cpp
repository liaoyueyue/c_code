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
	//	1. �Զ�����һ��1~100֮��������
	//	2. ������
	//		a.�¶��ˣ��͹�ϲ�㣬��Ϸ����
	//		b.��´��ˣ�����߲´��ˣ����ǲ�С�ˣ������£�ֱ���¶�
	//	3. ��Ϸһ��һֱ�棬�����˳���Ϸ

	int t = 1;//����
	int ret = rand() % 100 + 1;
	int guess = 0;
	printf("��ӭ�����������Ϸ������1~100֮������һ����\n");
	while (1)
	{
		printf("���ǵ�%d�β�\n", t);
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ���ϲ�㣡����\n");
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
		menu();//�򿪲˵�
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			Sleep(2000);
			system("cls");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);

	return 0;
}