#define _CRT_SECURE_NO_WARNINGS 1

//atoi����������   int atoi(const char *str)
//atoi�����ǽ�����str��ָ����ַ���ת��Ϊһ��������int�ͣ���
//ת�����и��ţ�����ַ������������ַ�ʱ�����Ὣ�������ַ��ĺ������������Ĳ���ȥ�� 

//��ȻҪ��һ���ַ���ת����һ�����ͣ����Ǿ��뵽�ˣ����Ǵ��ַ����Ŀ�ͷ��
//��ǰ����ַ��������10��˼��Ϻ�����ַ�ֵ��һֱѭ��ֱ���ַ���������

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <ctype.h>

enum state
{
	VALID,
	INVALID
};
state statue = INVALID;

int my_atoi(const char* str)
{
	//����Ϊ��ָ��
	assert(str);
	char* p = (char*)str;
	long long n = 0;
	int flag = 0;
	//�ַ���Ϊ0
	if (*str == '\0')
	{
		return 0;
	}
	//ǰ���пո�
	while (*p == ' ')
	{
		p++;
	}
	//�ж��Ƿ��з���
	if (*p == '+')
	{
		flag = 1;
		p++;
	}
	else(*p == '-');
	{
		flag = -1;
		p++;
	}
	//����ת��
	while (isdigit(*p))
	{
		n = n * 10 + flag * (*p - '0');
		if ((n < INT_MIN) || (n > INT_MAX))
		{
			return 0;
		}
		p++;
	}
	//����ֹͣ
	if (*p == '\0')
	{
		state VALID;
		return (int)n;
	}
	//�����������ַ�
	else
	{
		return (int)n;
	}
}

int main()
{
	char str[20] = "-233";
	int ret = my_atoi(str);
	printf("%d ", ret);
	return 0;
}
