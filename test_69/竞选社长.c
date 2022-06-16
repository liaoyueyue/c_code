#define _CRT_SECURE_NO_WARNINGS 1

//假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
//输入描述：
//一行，字符序列，包含A或B，输入以字符0结束。
//输出描述：
//一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。
//示例1
//输入：
//ABBABBAAB0
//输出：
//B

#include <stdio.h>
#include <string.h>

int main()
{
    char arr[20] = { 0 };
    scanf("%s", arr);
    int a = 0, b = 0, i = 0;
    while (arr[i] != '0')
    {
        arr[i] == 'A' ? a++ : b++;
        i++;
    }
    printf("%c", a == b ? 'E' : a > b ? 'A' : 'B');
    return 0;
}
