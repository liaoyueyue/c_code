#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
//���꣺
//	   1.���Ա�4�����������Ա�100����
//	   2.���Ա�400����
int main()
{
	int year;
	int count=0;
	for (year = 1000; year <= 2000; year++)
	{
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			printf("%-6d", year);
			count++;
		}
	}
		printf("\nһ����%d\n", count);
	return 0;
}