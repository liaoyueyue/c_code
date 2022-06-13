#define _CRT_SECURE_NO_WARNINGS 1

//描述
//期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入 n 个学生成绩，输出每组排在前五高的成绩。
//
//数据范围： 5≤n≤50  ，成绩采取百分制并不会出现负数
//输入描述：
//两行，第一行输入一个整数，表示n个学生（ >= 5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。
//输出描述：
//一行，输出成绩最高的前五个，用空格分隔。

#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1]) //降序
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int score[50] = { 0 };
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &score[i]);
    }
    BubbleSort(score, n);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", score[i]);
    }
    return 0;
}
