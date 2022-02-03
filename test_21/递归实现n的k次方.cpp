#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
double Pow(int n, int k)
{
	if (k == 0)
		return 1.0;
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
	{
		return 1.0 / Pow(n, -k);
	}
}
