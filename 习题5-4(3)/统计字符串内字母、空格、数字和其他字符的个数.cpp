//����һ���ַ����ֱ�ͳ�����е�Ӣ����ĸ���ո����ֺ������ַ��ĸ���
#include"stdio.h"
int main()
{
	char ch;
	int yingwen = 0, kongge = 0, shuzi = 0, qita = 0;
	printf("������һ���ַ�\n");
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
	printf("�����һ���ַ�����Ӣ����ĸ%d��\n�ո���%d\n������%d\n�����ַ���%d\n", yingwen,kongge,shuzi ,qita);
	return 0;
}