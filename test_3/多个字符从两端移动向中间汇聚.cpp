#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include"string.h"
#include"windows.h"
int main()
{
	char arr1[] = "welcome to jingzhou";
	char arr2[] = "                   ";
	int left = 0;//�����һ���±�
	int right = strlen(arr1) - 1;//�������һ���±�

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);//˯��һ��
		system("cls");//�����Ļ��clear(�����
	}

	printf("%s", arr2);
	return 0;
}