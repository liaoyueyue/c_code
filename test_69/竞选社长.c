#define _CRT_SECURE_NO_WARNINGS 1

//������������Ҫ��ѡ�糤����������ѡ�˷ֱ���A��B������ÿ��ͬѧ���벢��ֻ��ͶһƱ�����յ�Ʊ�����Ϊ�糤.
//����������
//һ�У��ַ����У�����A��B���������ַ�0������
//���������
//һ�У�һ���ַ���A��B��E�����A��ʾA��Ʊ���࣬���B��ʾB��Ʊ���࣬���E��ʾ���˵�Ʊ����ȡ�
//ʾ��1
//���룺
//ABBABBAAB0
//�����
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
