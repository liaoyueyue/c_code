//һ�������ǡ�õ��������е�����֮�ͣ���������Ϊ��������������6=1+2+3����д�����ҳ�1000���ڵ�����������
#include"stdio.h"
int main()
{
		int	num, i, sum;
		for (num = 1; num < 1000; num++)
		{
			sum = 0;
			for (i = 1; i <= num / 2; i++)
			{
				if (num % i == 0)
					sum += i;
			}
			if (sum == num)
				printf("%d������\n", num);

		}
	return 0;
}