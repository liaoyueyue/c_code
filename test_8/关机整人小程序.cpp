#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include"string.h"
#include"stdlib.h"
int main()
{
	char input[20] = { 0 };//����������Ϣ
	printf("��ע�⣬��ĵ��Լ�����һ�����ڹػ���������롰����������ȡ���ػ�������\n");
	system("shutdown -s -t 60");
again:
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		printf("�������ȡ��ʧ�ܣ�\n");
		goto again;
	}
	return 0;
}