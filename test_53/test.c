#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("****  1��add     2��del     ****\n");
	printf("****  3��search  4��modify  ****\n");
	printf("****  5��sort    6��print   *****\n");
	printf("****  7��init    0��exit    ****\n");
	printf("********************************\n");
}

void test()
{
	int input = 0;
	//����ͨѶ¼
	contact con;//ͨѶ¼
	InItContact(&con);

	do
	{
		menu();
		printf("������ѡ�>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			AddContact(&con);
			system("cls");
			break;
		case del:
			DelContact(&con);
			system("cls");
			break;
		case search:
			SearchContact(&con);
			break;
		case modify:
			ModifyContact(&con);
			break;
		case sort:
			SortContact(&con);
			system("cls");
			break;
		case print:
			PrintContact(&con);
			break;
		case init:
			InItContact(&con);
			printf("��ϵ���ѳ�ʼ��\n");
			break;
		case my_exit:
			DestroyContact(&con); //�˳�ʱ����
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}
		
	} while (input);
}


int main()
{
	test();
	return 0;
}