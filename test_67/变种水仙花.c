#define _CRT_SECURE_NO_WARNINGS 1

//����ˮ�ɻ��� - Lily Number������������֣����м��ֳ��������֣�
//����1461 ���Բ�ֳɣ�1��461��, ��14��61��, ��146��1), 
//������в�ֺ�ĳ˻�֮�͵�����������һ��Lily Number��
//���磺
//655 = 6 * 55 + 65 * 5
//1461 = 1 * 461 + 14 * 61 + 146 * 1
//��� 5λ���е����� Lily Number��

#include <stdio.h>

int LilyValue(int num)
{
    //�ж��Ǽ�λ��
    int temp = num;
    int count = 0;
    while (temp != 0)
    {
        temp /= 10;
        count++;
    }
    //��ʼ�������ˮ�ɻ�ֵ
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
