//1+2+3+4+......+n-1+n�ĺͣ����õݹ鷨��
#include"stdio.h"
int funsum(int n)
{
	int sum = 0;
	if (n == 1)
		sum = 1;
	else
		sum =funsum(n - 1) + n;
	return sum;
}
int main()
{
	int n;
	printf("������1+2+3+4+......+n-1+n��ֵ\n������n��ֵ\n");
	scanf_s("%d", &n);
	printf("��ֵΪ%d\n",funsum(n));
	return 0;
}
