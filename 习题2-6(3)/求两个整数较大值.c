#include"stdio.h"
int main()
{
	int a, b;
	printf("������������������������е����ֵ\n");
	scanf_s("%d%d", &a, &b);
	if (a > b)
		printf("%d��%d,���и����Ϊ%d\n", a, b, a);
	else
		printf("%d��%d,���и����Ϊ%d\n", a, b, b);
	return 0;
}