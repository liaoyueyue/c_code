#define _CRT_SECURE_NO_WARNINGS 1
//模拟用户登录，只能登陆三次，密码正确则提示成功，三次都错误则退出程序
#include"stdio.h"
#include"string.h"
int main()
{
	int i = 0;
	char password[20] = { 0 };
	/*假如正确的密码是字符串"123456"*/
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", password);
		if ((strcmp(password, "123456")) == 0)//两个字符串比较不能用==，应该使用strcmp
		{
			printf("密码正确，登录成功!\n");
			break;
		}
		else
		{
			printf("密码错误，请重新输入!\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码错误，退出程序\n");
	}
	return 0;
}