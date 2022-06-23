#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
    int n = 0;
    while (scanf("%d", &n) != EOF)
    {
        //上半部分
        for (int i = n; i >= 0; i--)
        {
            for (int j = i; j > 0; j--)
            {
                printf(" ");
            }
            for (int k = 0; k <= n - i; k++)
            {
                printf("* ");
            }
            printf("\n");
        }
        //下半部分
        for (int i = n; i > 0; i--)
        {
            for (int j = n - i; j >= 0; j--)
            {
                printf(" ");
            }
            for (int k = i; k > 0; k--)
            {
                printf("* ");
            }
            printf("\n");
        }
    }
    return 0;
}