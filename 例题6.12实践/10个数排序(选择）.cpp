//10个数排序(选择）
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
	printf("\n输出未排序的数：");
	for (i = 0; i < 10; i++)
		printf("% 3d", a[i]);
	for (i = 0; i < 10-1; i++)	//10个元素选择9遍
	{
		index = i;	//本编排序中第一个元素下标保存在index中
		for (j = i + 1; j < 10; j++)
		{
			if (a[index] > a[j])
				index = j;	//记录新的小元素的下标
			if (index!=i)
			{
				temp = a[i];
				a[i] = a[index];
				a[index] = temp;
			}
		}
	}
	printf("\n输出已排序的数：");
	for (i = 0; i <= 9; i++)
		printf("% 3d", a[i]);
	printf("\n");
	return 0;
}
