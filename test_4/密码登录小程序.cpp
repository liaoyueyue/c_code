#define _CRT_SECURE_NO_WARNINGS 1
//ģ���û���¼��ֻ�ܵ�½���Σ�������ȷ����ʾ�ɹ������ζ��������˳�����
#include"stdio.h"
#include"string.h"
int main()
{
	int i = 0;
	char password[20] = { 0 };
	/*������ȷ���������ַ���"123456"*/
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", password);
		if ((strcmp(password, "123456")) == 0)//�����ַ����Ƚϲ�����==��Ӧ��ʹ��strcmp
		{
			printf("������ȷ����¼�ɹ�!\n");
			break;
		}
		else
		{
			printf("�����������������!\n");
		}
	}
	if (i == 3)
	{
		printf("������������˳�����\n");
	}
	return 0;
}