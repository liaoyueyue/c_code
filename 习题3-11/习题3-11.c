#include"stdio.h"
#include"math.h"
int main()
{
	float a, b, c,s;
	double area;
	printf("请输入三角形的三边长：\n");
	scanf_s("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2; 
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("其面积为%.2f", area);
	return 0;
}
