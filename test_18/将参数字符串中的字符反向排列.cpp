#define _CRT_SECURE_NO_WARNINGS 1
//将参数字符串中的字符反向排列，不是逆序输出
//不能使用库函数
#include"stdio.h"
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str + 1);
	else
		return 0;
}

void reverse_string(char* str)
{
	int left = 0;
	int right = my_strlen(str) - 1;
	while (left < right)
	{
		char temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
}


int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);//fedcba
	return 0;
}