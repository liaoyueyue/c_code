#define _CRT_SECURE_NO_WARNINGS 1
#include"stdio.h"
#include"string.h"
#include"windows.h"
int main()
{
	char arr1[] = "welcome to jingzhou";
	char arr2[] = "                   ";
	int left = 0;//数组第一个下标
	int right = strlen(arr1) - 1;//数组最后一个下标

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
		Sleep(1000);//睡眠一秒
		system("cls");//清空屏幕，clear(清除）
	}

	printf("%s", arr2);
	return 0;
}