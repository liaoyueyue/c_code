#include"stdio.h"
#include"math.h"
//从键盘输入一个小写字母，要求用大小写字母形式输出该字母及对应的ASCII码值。
//提示：请查看ASCII码表，分析大小写字母的不同；并注意ASCII码表中字符可以按照整型数据输出，
//反之，范围内整型数据也可以按照字符格式输出。
void putASCII()
{
	char ch;
	printf("input letters:\n");
	scanf_s("%c", &ch);
	printf("大写字母：%c\n小写字母：%c\n大写对应ASCII码为：%d", ch-32, ch, ch-32);
}
//输入两个整数，求其和、商、余数、平均值。
void qiuzhi()
{
	float a, b;
	printf("input a,b\n");
	scanf_s("%f%f", &a, &b);
	printf("和为%.0f\t商为%f\t余数为%d\t平均值为%f\t", a + b, a / b, (int)a % (int)b, (a + b) / 2.0);
}
//输入a，b的值，然后将a，b的值交换后，再输出a，b值。
void exchange()
{
	int a, b,c;
	printf("input a,b\n");
	scanf_s("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d\t%d", a, b);
}
//求方程ax2+bx+c=0的实数根。a,b,c由键盘输入，a≠0且b2-4ac>0。
void qiushishugen()
{
	float a, b, c, delta,x1,x2;
	printf("input a,b,c\n");
	scanf_s("%f%f%f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	printf("\nx1=%f\nx2=%f\n");
}
int main()
{
	int i;
	printf("请选择第几题：\n");
	printf("1.从键盘输入一个小写字母，要求用大小写字母形式输出该字母及对应的ASCII码值\n");
	printf("2.输入两个整数，求其和、商、余数、平均值\n");
	printf("3.输入a，b的值，然后将a，b的值交换后，再输出a，b值\n");
	printf("4.求方程ax2+bx+c=0的实数根。a,b,c由键盘输入，a≠0且b*b-4ac>0\n");
	scanf_s("%d", &i);
	if (i == 1) putASCII();
	if (i == 2) qiuzhi();
	if (i == 3) exchange();
	if (i == 4) qiushishugen();
	return 0;
}