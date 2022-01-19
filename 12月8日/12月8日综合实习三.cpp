#include"stdio.h"
#include"string.h"
#define N 5
//问题1 求出斐波那契数列的前30项并按照每行6个数有序输出(前两项为1，从第三项开始每一项是前两项的和)。
int mblq()
{
    int i;
    int f[30] = { 1,1 };
    for (i = 2; i < 30; i++)
        f[i] = f[i - 2] + f[i - 1]; //表示数组中的第几项，而不是几个数组！！！
    for (i = 0; i < 30; i++)
    {
        if (i%6==0)   //输出6个数组元素后换行
            printf("\n");
        printf("%12d", f[i]);    //输出Fibonacci数列的1~30项
    }
    printf("\n");
    return 0;
}
//问题2 用一个二维数组存储某班级3个学习小组的英语成绩
//(每个小组人数均为5人，数 组每一行为一个小组的6个成员的英语成绩)
//请选出各个小组中的最高成绩，并用一个数组来保存每个小组的最高成绩；
int yycj()
{
    int i, j;
    int max;
    int a[3][5], b[3];
    for (i = 0; i < 3; i++)
    {
        printf("请输入第%d小组的成绩：\n",i+1);
        for (j = 0; j < 5; j++)
            scanf_s("%d", &a[i][j]);
    }
    for (i = 0; i < 3; i++)
    {
        max = a[i][0];
        for (j = 1; j < 5; j++)
            if (a[i][j] > max)
                max = a[i][j];
        b[i] = max;
    }
    printf("各小组英语成绩为：\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    printf("各小组的英语最高成绩为：");
    for (i = 0; i < 3; i++)
        printf("%5d", b[i]);
	return 0;
}
//问题3某班5个同学参加了三门课的考试, 现要求输出按总成绩的高低排序的成绩单。成绩单的格式如下:
//排序 姓名 课1 课2 课3 总分 平均分
// 1  刘备  98  87  88  273  91
// 2  张飞  96  86  88  270  90

int cjdpx()
{
    int i, j;
    int score[N][3], t;
    char name[N][10], t_name[10];
    float sum[N] = { 0 }, avg[N];   //总分和平均分；
    printf("请输入五个同学三门成绩：\n");
    //输入各个同学的记录；
    for (i = 0; i < N; i++)
    {
        printf("第%d个同学的记录：", i + 1);
        gets_s(name[i]);
        for (j = 0; j < 3; j++)
            scanf_s("%d", &score[i][j]);
    }
    //计算每个同学的总分和平均分；
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 3; j++)
            sum[i] = sum[i] + score[i][j];
        avg[i] = sum[i] / 3.0;  //三门课平均分；
    }
    //开始排序；
    for (i = 0; i < N-1; i++)
        for (j = 0; j < N-i-1; j++)
            if (sum[j] < sum[j + 1])
            {
                t = sum[j];
                sum[j] = sum[j + 1];
                sum[j + 1] = t;

                t = avg[j];
                avg[j] = avg[j + 1];
                avg[j + 1] = t;

                t = score[j][0];
                score[j][0] = score[j + 1][0];
                score[j + 1][0] = t;

                t = score[j][1];
                score[j][1] = score[j + 1][1];
                score[j + 1][1] = t;

                t = score[j][2];
                score[j][2] = score[j + 1][2];
                score[j + 1][2] = t;
                strcpy_s(t_name, name[j]);
                strcpy_s(name[j], name[j+1]);
                strcpy_s(name[j+1], t_name);
            }
    printf("---------------------------------------------------------\n");
    printf("输出排序后五个同学的三门成绩：\n");
    printf("---------------------------------------------------------\n");
    printf("\t排序\t姓名\t课一\t课二\t课三\t总分\t平均分\t\n");
    for (i = 0; i < N; i++)
    {
        printf("第%d名：\t", i + 1);
        puts(name[i]);
        printf("\t");
        for (j = 0; j < 3; j++)
            printf("%d\t", score[i][j]);
        printf("%.0f\t%.1f\t", sum[i], avg[i]);
        printf("\n");
    }
    printf("---------------------------------------------------------\t");
    printf("---------------------------------------------------------\t");
    return 0;
}
int main()
{
	int i;
	printf("1.波那契数列的前30项\n2.存储某班级3个学习小组的英语成绩\n3.5个同学总成绩的高低排序的成绩单");
	printf("请选择菜单1~3\n");
	scanf_s("%d", &i);
	if (i == 1) mblq();
	if (i == 2) yycj();
	if (i == 3) cjdpx();
	return 0;
}