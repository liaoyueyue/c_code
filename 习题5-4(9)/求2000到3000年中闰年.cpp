//��дһ�����򣬽�2000�굽3000���еĵ�����������������ͳ�Ƴ��������������Ҫ��ÿ10���������һ�����
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
	printf("\n��2000�굽3000�굱����%d������", i);

	return 0;
}
