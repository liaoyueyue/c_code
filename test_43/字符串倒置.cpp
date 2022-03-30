#define _CRT_SECURE_NO_WARNINGS 1

//如 i like beijing.
//反转后为 beijing. like i

#include <stdio.h>
#include <assert.h>
#include <string.h>

void reverse(char* l, char* r)
{
	assert(l && r);
	while (l < r)
	{
		char tmp = *l;
		*l = *r;
		*r = tmp;
		l++;
		r--;
	}
}

int main()
{
	char arr[20] = { 0 };
	//输入
	gets_s(arr);
	//1、逆序整个字符串
	size_t len = strlen(arr);
	char* left = arr;
	char* right = arr + len - 1;
	reverse(arr, right);
	//2、逆序内字符串
	char* cur = arr;
	char* start = arr;
	while (*cur != '\0')
	{
		while (*cur != ' ' && *cur != '\0')
		{
			cur++;
		}
		reverse(start, cur-1);
		start = cur + 1;
		if (*cur != '\0')
		{
			cur++;
		}
	}
	puts(arr);
	return 0;
}