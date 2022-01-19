#include"stdio.h"
//问题1 编写一个程序，输入a、b、c 3个整数，按从大到小顺序输出。要求用指针、函数实现。
int paixu()
{
	int a, b, c,temp;
	int* pa, * pb, * pc;
	pa = &a;
	pb = &b;
	pc = &c;
	printf("input a,b,c\n");
	scanf_s("%d%d%d", &a, &b, &c);
	printf("排序前：\n%d\t%d\t%d\n",*pa,*pb,*pc);
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
	printf("排序后：\n");
	printf("%d\t%d\t%d",*pa,*pb,*pc);
	return 0;
}
//问题2 用字符数组、指针、递归函数实现功如下功能：输入字符串： ********，输出
//如下多行字符串：
//********
//*******
//******
//*****
//****
//***
//**
//*
//(注意体会字符数组、指针的应用、递归函数的定义与调用。报告具体内容与问题1一致）
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
	printf("1.输入a、b、c 3个整数，按从大到小顺序输出\n2.用字符数组、指针、递归函数实现输入字符串:\n");
	printf("请选择菜单1~2\n");
	scanf_s("%d", &i);
	if (i == 1) paixu();
	if (i == 2) shuchuzifuchuan();
	return 0;
}