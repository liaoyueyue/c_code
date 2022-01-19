#include"stdio.h"
//观察变量
int main1()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i, sum = 3;
	for (i = 0; i < 5; i++)
		arr[i] = i * (i + 1);
	for (i = 0; i < 4; i++)
		sum += arr[i] * 3;
	printf("% d\n", sum);
	return 0;
}
//求1+2+3+...+100
void yongfor()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
		sum = sum + i;
	printf("the result is " "%d", sum);
	printf("\n");
}

void yongwhile()
{
	int number, sum;
	sum = 0;
	number = 1;
	while (number <= 100)
	{
		sum = sum + number;
		number++;
	}

}void yongdowhile()
{
	int number, sum;
	sum = 0;
	number = 1;
	do
	{
		sum = sum + number;
		number++;
	} while (number <= 100);
}

void juzhen()
{
	int i, j;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
			printf("%d", i * j);
		printf("\n");
	}
}