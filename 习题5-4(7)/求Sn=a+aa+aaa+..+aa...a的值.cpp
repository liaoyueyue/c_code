//��Sn=a+aa+aaa+..+aa...a��ֵ�����У�a���û�ͨ�����������һ������ֵ��n�������a��λ��
#include"stdio.h"
int main()
{
	int a, n,s,t;
	int i;
	printf("������a��n��ֵ��\n");
	scanf_s("%d%d", &a, &n);
	t = a;
	s = a;
	for (i = 2; i <= n; i++)
	{
		t = t * 10 + t;
		s += t;
	}
	printf("Sn=%d", s);
	return 0;
}