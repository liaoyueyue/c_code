#define _CRT_SECURE_NO_WARNINGS 1

//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include"stdio.h"
#include"string.h"

void strlevo(char* arr, int sz)
{
	int f = 0;
	scanf("%d", &f);
	while(f--)
	{
		int i = 0;
		for (i = 0; i < sz - 1; i++)
		{
			int temp = arr[i];    //arr[n]=*(arr + n)
			arr[i] = arr[i + 1];
			arr[i + 1] = temp;
		}
	}
}

int main()
{
	char arr[] = "abcd";
	int sz = strlen(arr);
	printf("%s\n", arr);
	strlevo(arr,sz);
	printf("%s\n", arr);
	return 0;
}
