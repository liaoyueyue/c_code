#include"stdio.h"
//����1 ��дһ����������a��b��c 3�����������Ӵ�С˳�������Ҫ����ָ�롢����ʵ�֡�
int paixu()
{
	int a, b, c,temp;
	int* pa, * pb, * pc;
	pa = &a;
	pb = &b;
	pc = &c;
	printf("input a,b,c\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("����ǰ��\n%d\t%d\t%d\n",*pa,*pb,*pc);
	if (*pa < *pb)
	{
		temp = *pa;
		*pa = *pb;
		*pb = temp;
	}
	if (*pa < *pc)
	{
		temp = *pa;
		*pa = *pc;
		*pc = temp;
	}
	if (*pb < *pc)
	{
		temp = *pb;
		*pb = *pc;
		*pc = temp;
	}
	printf("�����\n");
	printf("%d\t%d\t%d",*pa,*pb,*pc);
	return 0;
}
//����2 ���ַ����顢ָ�롢�ݹ麯��ʵ�ֹ����¹��ܣ������ַ����� ********�����
//���¶����ַ�����
//********
//*******
//******
//*****
//****
//***
//**
//*
//(ע������ַ����顢ָ���Ӧ�á��ݹ麯���Ķ�������á������������������1һ�£�
void fun(char* str, int i)
{
	str[i] = '\0';
	printf("%s\n", str);
	if (i > 1)
		fun(str, i - 1);
}
int shuchuzifuchuan()
{
	char str[] = "********";
		fun(str, 8);
	return 0;
}
int main()
{
	int i;
	printf("1.����a��b��c 3�����������Ӵ�С˳�����\n2.���ַ����顢ָ�롢�ݹ麯��ʵ�������ַ���:\n");
	printf("��ѡ��˵�1~2\n");
	scanf_s("%d", &i);
	if (i == 1) paixu();
	if (i == 2) shuchuzifuchuan();
	return 0;
}