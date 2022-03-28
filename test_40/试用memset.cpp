#define _CRT_SECURE_NO_WARNINGS 1

#include"stdio.h"
#include"string.h"

int main()
{
	int a[] = { 1,2,3,4,5 };
	memset(a, 1, 20);//把从a开始的前二十个字节内容改成1
}