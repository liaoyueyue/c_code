#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0; //unsigned int(无符号常数)
	scanf("%u", &num);//1234
	//递归，函数自己调用自己
	print(num);//print函数可以打印参数部分数字的每一位
	return 0;
}