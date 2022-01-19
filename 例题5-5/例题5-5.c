//在全系1000名学生中，征集慈善募捐，当募捐款达到10万元时就停止募捐活动，
//统计此时捐款的人数，以及平均每人捐款的数目
#include"stdio.h"
#define amountmax 100000
int main()
{
	float amount, sum, avg;		//amount(金额），sum(和），avg（平均）
	int i;	//i(学生代号）
	for (i = 1,sum=0; i <= 1000; i++)
	{
		printf("请输入第%d学生的捐款金额：\n",i);
		scanf_s("%f", &amount);
		sum += amount;
		if (sum >= amountmax)
		{
			break;
		}
	}
	avg = sum / i;
	printf("捐款人数是%d\n平均每人捐款金额为%f", i, avg);
	return 0;
}