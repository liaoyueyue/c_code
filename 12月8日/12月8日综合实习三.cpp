#include"stdio.h"
#include"string.h"
#define N 5
//����1 ���쳲��������е�ǰ30�����ÿ��6�����������(ǰ����Ϊ1���ӵ����ʼÿһ����ǰ����ĺ�)��
int mblq()
{
    int i;
    int f[30] = { 1,1 };
    for (i = 2; i < 30; i++)
        f[i] = f[i - 2] + f[i - 1]; //��ʾ�����еĵڼ�������Ǽ������飡����
    for (i = 0; i < 30; i++)
    {
        if (i%6==0)   //���6������Ԫ�غ���
            printf("\n");
        printf("%12d", f[i]);    //���Fibonacci���е�1~30��
    }
    printf("\n");
    return 0;
}
//����2 ��һ����ά����洢ĳ�༶3��ѧϰС���Ӣ��ɼ�
//(ÿ��С��������Ϊ5�ˣ��� ��ÿһ��Ϊһ��С���6����Ա��Ӣ��ɼ�)
//��ѡ������С���е���߳ɼ�������һ������������ÿ��С�����߳ɼ���
int yycj()
{
    int i, j;
    int max;
    int a[3][5], b[3];
    for (i = 0; i < 3; i++)
    {
        printf("�������%dС��ĳɼ���\n",i+1);
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
    printf("��С��Ӣ��ɼ�Ϊ��\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%5d", a[i][j]);
        printf("\n");
    }
    printf("��С���Ӣ����߳ɼ�Ϊ��");
    for (i = 0; i < 3; i++)
        printf("%5d", b[i]);
	return 0;
}
//����3ĳ��5��ͬѧ�μ������ſεĿ���, ��Ҫ��������ܳɼ��ĸߵ�����ĳɼ������ɼ����ĸ�ʽ����:
//���� ���� ��1 ��2 ��3 �ܷ� ƽ����
// 1  ����  98  87  88  273  91
// 2  �ŷ�  96  86  88  270  90

int cjdpx()
{
    int i, j;
    int score[N][3], t;
    char name[N][10], t_name[10];
    float sum[N] = { 0 }, avg[N];   //�ֺܷ�ƽ���֣�
    printf("���������ͬѧ���ųɼ���\n");
    //�������ͬѧ�ļ�¼��
    for (i = 0; i < N; i++)
    {
        printf("��%d��ͬѧ�ļ�¼��", i + 1);
        gets_s(name[i]);
        for (j = 0; j < 3; j++)
            scanf_s("%d", &score[i][j]);
    }
    //����ÿ��ͬѧ���ֺܷ�ƽ���֣�
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < 3; j++)
            sum[i] = sum[i] + score[i][j];
        avg[i] = sum[i] / 3.0;  //���ſ�ƽ���֣�
    }
    //��ʼ����
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
    printf("�����������ͬѧ�����ųɼ���\n");
    printf("---------------------------------------------------------\n");
    printf("\t����\t����\t��һ\t�ζ�\t����\t�ܷ�\tƽ����\t\n");
    for (i = 0; i < N; i++)
    {
        printf("��%d����\t", i + 1);
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
	printf("1.���������е�ǰ30��\n2.�洢ĳ�༶3��ѧϰС���Ӣ��ɼ�\n3.5��ͬѧ�ܳɼ��ĸߵ�����ĳɼ���");
	printf("��ѡ��˵�1~3\n");
	scanf_s("%d", &i);
	if (i == 1) mblq();
	if (i == 2) yycj();
	if (i == 3) cjdpx();
	return 0;
}