#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int Digitsum(int n)
{
	if (n > 9)
	{
		return Digitsum(n / 10) + n % 10;
	}
	else
	{
		return n;
	}
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	printf("%d", Digitsum(num));
	return 0;
}