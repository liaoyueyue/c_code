#define _CRT_SECURE_NO_WARNINGS 1
//用递归将参数字符串中的字符反向排列，不是逆序输出
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
	char temp = *str;//1
	int len = my_strlen(str);
	*str = *(str + len - 1);//2
	*(str + len - 1)='\0';//3
	if (my_strlen(str + 1)>=2)
	{
		reverse_string(str + 1);//4
	}
	*(str + len - 1) = temp;//5
}


int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);//fedcba
	return 0;
}