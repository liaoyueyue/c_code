//输入一行字符，分别统计其中的英文字母、空格、数字和其他字符的个数
#include"stdio.h"
int main()
{
	char ch;
	int yingwen = 0, kongge = 0, shuzi = 0, qita = 0;
	printf("请输入一串字符\n");
	for(;(ch = getchar()) != '\n';)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			yingwen++;
		}
		else if (ch == ' ')
		{
			kongge++;
		}
		else if (ch >= '0' && ch <= '9')
		{
			shuzi++;
		}
		else
		{
			qita++;
		}
	}
	printf("输入的一串字符中有英文字母%d个\n空格有%d\n数字有%d\n其他字符有%d\n", yingwen,kongge,shuzi ,qita);
	return 0;
}