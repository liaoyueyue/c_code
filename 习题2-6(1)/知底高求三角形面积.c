#include"stdio.h"
int main()
{
	float l, h, s;
	printf("请输入三角形的底边和高即可求出其面积。\n");
	scanf_s("%f%f", &l,& h);
	s = l * h / 2;
	printf("三角形的面积为：%f",s);
	return 0;
}