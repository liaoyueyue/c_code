//求数列和；1+2+3+....+99+100
#include"stdio.h"
	//while语句
int main1()
{
	int i = 1, sum=0;
	while (i <= 100)
	{
		sum += i;
		i++;
	}
	printf("%d", sum);
	return 0;
}

	//for语句
int main()
{
	int i, sum = 0;
		for (i = 1; i <= 100; i++)
			sum += i;
	printf("%d", sum);	
	return 0;
}