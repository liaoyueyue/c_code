#define _CRT_SECURE_NO_WARNINGS 1

//求最大成绩

#include <stdio.h>

int main()
{
    int Chinese = 0;
    int Math = 0;
    int English = 0;
    scanf("%d %d %d", &Chinese, &Math, &English);
    printf("%d", Chinese > (Math > English ? Math : English) ? Chinese : (Math > English ? Math : English));
    return 0;
}