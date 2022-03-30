#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//第一种
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = a > b ? a : b;
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	printf("%d", m);
//	return 0;
//}

////第二种
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (a*i%b!=0)
//	{
//		i++;
//	}
//	printf("%d", a * i);
//	return 0;
//}

//第三种
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d", &a, &b);
	int m = a;
	int n = b;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d", m * n / b);
	return 0;
}