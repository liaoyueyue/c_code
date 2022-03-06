#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC

#include"stdio.h"
#include"string.h"

int findRound(const char* src, char* find)
{
	char tmp[356] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
	strcpy(tmp, src); //先拷贝一遍
	strcat(tmp, src); //再连接一遍
	return strstr(tmp, find) != NULL; //看看找不找得到
}

int main()
{
	char arr1[365] = "\0";
	char arr2[365] = "\0";
	gets(arr1);
	gets(arr2);
	int ret = findRound(arr1,arr2);
	if (ret == 1)
	{
		printf("字符串是另外一个字符串旋转之后的字符串\n");
	}
	else
	{
		printf("字符串不是另外一个字符串旋转之后的字符串\n");
	}
	return 0;
}