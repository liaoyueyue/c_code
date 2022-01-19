//编程输出如下图形
	//					1
	//				  1 2 3
	//			    1 2 3 4 5
	//			  1 2 3 4 5 6 7
	//			1 2 3 4 5 6 7 8 9
#include"stdio.h"
int main()
{
	int i, j;
	for (i = 1; i <= 5;i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j <= 5 - i || j >= 5 + i)
				printf(" ");
			else
				printf("%d", i - (5 - j));
			if (j == 9)
				printf("\n");
		}
		printf("\n");
	}
	return 0;
}