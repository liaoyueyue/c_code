#define _CRT_SECURE_NO_WARNINGS 1

//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

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
