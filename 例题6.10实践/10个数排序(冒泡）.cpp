//10个数排序(冒泡）
#include"stdio.h"
int main()
{
	int i, j, temp, index, a[10];
	printf("输入任意的10个数：\n");
	for (i = 0; i < 10; i++)
	{
		printf("请输入第%d个数", i + 1);
		scanf("%d", &a[i]);
	}
	printf("\n");
	for(i=1;i<10;i++)
		for(j=1;j<=10-i;j++)
			if (a[j - 1] > a[j])
			{
				temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
			}
	for (i = 0; i < 10; i++)
		printf("%6d", a[i]);
	return 0;
}