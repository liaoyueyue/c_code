#include"stdio.h"
int main()
{
	double x,y;
	printf("------------------------------\n");
	printf("|         简单计数器         |\n");
	printf("|                            |\n");
	printf("|----------------------------|\n");
	printf("|         1——加法          |\n");
	printf("|         2——减法          |\n");
	printf("|         3——乘法          |\n");
	printf("|         4——除法          |\n");
	printf("|         5——退出          |\n");
	printf("------------------------------\n");
	printf("请输入第一个数：");
		scanf_s("%f" ,&x);
	printf("请输入第二个数：");
		scanf_s("%f",&y);
		printf("加法的运算结果为%f\n减法的运算结果为%f\n乘法的运算结果为%f\n除法的运算结果为%f\n", x + y, x - y, x * y, x / y);
	return 0;
}






