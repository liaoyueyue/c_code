#include"stdio.h"
int main()
{
	int num;
	int bw, sw, gw;
	printf("������һ����λ����\n");
	scanf_s("%d", &num);
	gw = num % 10;
	sw = num / 10 % 10;
	bw = num / 100;
	printf("%d\n", gw * 100 + sw * 10 + bw);
	return 0;
}