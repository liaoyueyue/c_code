#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}
int main()
{
	unsigned int num = 0; //unsigned int(�޷��ų���)
	scanf("%u", &num);//1234
	//�ݹ飬�����Լ������Լ�
	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
	return 0;
}