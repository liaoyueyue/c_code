//��һ���������������������磺����90=2*3*3*5��
#include"stdio.h"
int main()
{
	int num;
	int i;
	printf("������һ����������\n");
	scanf_s("%d", &num);
	for (i = 2; i <= num; i++)
	{
		while (num != i)
		{
			if (num % i == 0)
			{
				printf("%d*", i);
				num /= i;
			}
			else
			{
				break;
			}
		}
	}
	printf("%d\n", num);
	return 0;
}