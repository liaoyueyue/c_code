#define _CRT_SECURE_NO_WARNINGS 1

//变种水仙花数 - Lily Number：把任意的数字，从中间拆分成两个数字，
//比如1461 可以拆分成（1和461）, （14和61）, （146和1), 
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number。
//例如：
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//求出 5位数中的所有 Lily Number。

#include <stdio.h>

int LilyValue(int num)
{
    //判断是几位数
    int temp = num;
    int count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    //开始计算变种水仙花值
    int value = 10;
    int Sum = 0;
    for (int i = 0; i < count; i++)
    {
        Sum += (num / value) * (num % value);
        value *= 10;
    }
    return Sum;
}

int main()
{
    for (int i = 10000; i < 100000; i++)
    {
        if (i == LilyValue(i))
        {
            printf("%d ", i);
        }
    }
    return 0;
}
