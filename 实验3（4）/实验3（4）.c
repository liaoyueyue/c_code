#include"stdio.h"
int main()
{
	double x,y;
	printf("------------------------------\n");
	printf("|         �򵥼�����         |\n");
	printf("|                            |\n");
	printf("|----------------------------|\n");
	printf("|         1�����ӷ�          |\n");
	printf("|         2��������          |\n");
	printf("|         3�����˷�          |\n");
	printf("|         4��������          |\n");
	printf("|         5�����˳�          |\n");
	printf("------------------------------\n");
	printf("�������һ������");
		scanf_s("%f" ,&x);
	printf("������ڶ�������");
		scanf_s("%f",&y);
		printf("�ӷ���������Ϊ%f\n������������Ϊ%f\n�˷���������Ϊ%f\n������������Ϊ%f\n", x + y, x - y, x * y, x / y);
	return 0;
}






