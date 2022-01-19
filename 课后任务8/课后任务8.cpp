#include"stdio.h"
//输出字符串
//定义数组，存储字符串"C++program","codeblocks ide","The art of orogramming"
//并分行输出
void shuchuzifuchuan1()
{
	char str1[] = "C++program";
	char str2[] = "codeblocks ide";
	char str3[] = "The art of orogramming";
	char* pa, * pb, * pc;
	pa = str1;
	pb = str2;
	pc = str3;
	printf("%s\n%s\n%s\n", pa, pb, pc);
}
void shuchuzifuchuan2()
{
	char str[3][30] = { "C++program","codeblocks ide","The art of orogramming" };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 30; j++)
			printf("%c", str[i][j]);
		printf("\n");
	}
}
void shuchuzifuchuan3()
{
	int i;
	char str[100] = "C++program codeblocks ide The art of orogramming";
	for (i + 0; i < 100; i++)
	{
		if (str[i] != '\0')
			printf("%s", str[i]);
		else
			printf("%s\n", str);
	}

}