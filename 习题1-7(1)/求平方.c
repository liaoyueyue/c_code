#include"stdio.h"
int main()
{
	float a, b;
	printf("请输入一个实数，即可求出其平方！\n");
		scanf_s("%f", &a);
	b = a * a;
	printf("%f的平方为%f",a, b);
	return 0;
}