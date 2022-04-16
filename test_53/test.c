#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void menu()
{
	printf("********************************\n");
	printf("****  1、add     2、del     ****\n");
	printf("****  3、search  4、modify  ****\n");
	printf("****  5、sort    6、print   *****\n");
	printf("****  7、init    0、exit    ****\n");
	printf("********************************\n");
}

void test()
{
	int input = 0;
	//创建通讯录
	contact con;//通讯录
	InItContact(&con);

	do
	{
		menu();
		printf("请输入选项—>");
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
			printf("联系人已初始化\n");
			break;
		case my_exit:
			DestroyContact(&con); //退出时销毁
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}
		
	} while (input);
}


int main()
{
	test();
	return 0;
}