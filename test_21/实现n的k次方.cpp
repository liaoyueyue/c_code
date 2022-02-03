#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
int Pow_lite(int n, int k)
{
	int b = n;
	if (k == 0)
	{
		return 1;
	}
	for (int a = k - 1; a > 0; a--)
	{
		n *= b;
	}
	return n;

}
