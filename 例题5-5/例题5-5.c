//��ȫϵ1000��ѧ���У���������ļ�裬��ļ���ﵽ10��Ԫʱ��ֹͣļ����
//ͳ�ƴ�ʱ�����������Լ�ƽ��ÿ�˾�����Ŀ
#include"stdio.h"
#define amountmax 100000
int main()
{
	float amount, sum, avg;		//amount(����sum(�ͣ���avg��ƽ����
	int i;	//i(ѧ�����ţ�
	for (i = 1,sum=0; i <= 1000; i++)
	{
		printf("�������%dѧ���ľ���\n",i);
		scanf_s("%f", &amount);
		sum += amount;
		if (sum >= amountmax)
		{
			break;
		}
	}
	avg = sum / i;
	printf("���������%d\nƽ��ÿ�˾����Ϊ%f", i, avg);
	return 0;
}