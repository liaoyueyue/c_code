#define _CRT_SECURE_NO_WARNINGS 1

//�� i like beijing.
//��ת��Ϊ beijing. like i

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
	//����
	gets_s(arr);
	//1�����������ַ���
	size_t len = strlen(arr);
	char* left = arr;
	char* right = arr + len - 1;
	reverse(arr, right);
	//2���������ַ���
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