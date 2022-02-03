#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include"nµÄk´Î·½.h"
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf", ret);
	return 0;
}
