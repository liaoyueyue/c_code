#include"stdio.h"
#include"math.h"
int main()
{
	float a, b, c,s;
	double area;
	printf("�����������ε����߳���\n");
	scanf_s("%f%f%f", &a, &b, &c);
	s = (a + b + c) / 2; 
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("�����Ϊ%.2f", area);
	return 0;
}
