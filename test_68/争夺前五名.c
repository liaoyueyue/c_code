#define _CRT_SECURE_NO_WARNINGS 1

//����
//���п��Կ�ʼ�ˣ���Ҷ���ȡ�úóɼ�������ǰ�������Ӽ������� n ��ѧ���ɼ������ÿ������ǰ��ߵĳɼ���
//
//���ݷ�Χ�� 5��n��50  ���ɼ���ȡ�ٷ��Ʋ�������ָ���
//����������
//���У���һ������һ����������ʾn��ѧ���� >= 5�����ڶ�������n��ѧ���ɼ���������ʾ����Χ0~100�����ÿո�ָ���
//���������
//һ�У�����ɼ���ߵ�ǰ������ÿո�ָ���

#include <stdio.h>

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1]) //����
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
