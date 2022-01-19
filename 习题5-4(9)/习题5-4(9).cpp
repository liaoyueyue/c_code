//编写一个程序，将2000年到3000年中的的所有闰年年份输出并统计出闰年的总年数，要求每10个闰年放在一行输出
#include"stdio.h"
int main()
{
	int year,i=0;
	for (year = 2000; year <= 3000; year++)
	{
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		{
			i++;
			printf("%6d", year);
			if (i % 10 == 0)
				printf("\n");
		}
	}
	printf("\n在2000年到3000年当中有%d个闰年", i);

	return 0;
}
