#define _CRT_SECURE_NO_WARNINGS 1

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//���磺����s1 = AABCD��s2 = BCDAA������1
//����s1 = abcd��s2 = ACBD������0
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC

#include"stdio.h"
#include"string.h"

int findRound(const char* src, char* find)
{
	char tmp[356] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
	strcpy(tmp, src); //�ȿ���һ��
	strcat(tmp, src); //������һ��
	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
}

int main()
{
	char arr1[365] = "\0";
	char arr2[365] = "\0";
	gets(arr1);
	gets(arr2);
	int ret = findRound(arr1,arr2);
	if (ret == 1)
	{
		printf("�ַ���������һ���ַ�����ת֮����ַ���\n");
	}
	else
	{
		printf("�ַ�����������һ���ַ�����ת֮����ַ���\n");
	}
	return 0;
}