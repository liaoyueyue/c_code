#include"stdio.h"
#include"math.h"
//�Ӽ�������һ��Сд��ĸ��Ҫ���ô�Сд��ĸ��ʽ�������ĸ����Ӧ��ASCII��ֵ��
//��ʾ����鿴ASCII���������Сд��ĸ�Ĳ�ͬ����ע��ASCII������ַ����԰����������������
//��֮����Χ����������Ҳ���԰����ַ���ʽ�����
void putASCII()
{
	char ch;
	printf("input letters:\n");
	scanf_s("%c", &ch);
	printf("��д��ĸ��%c\nСд��ĸ��%c\n��д��ӦASCII��Ϊ��%d", ch-32, ch, ch-32);
}
//������������������͡��̡�������ƽ��ֵ��
void qiuzhi()
{
	float a, b;
	printf("input a,b\n");
	scanf_s("%f%f", &a, &b);
	printf("��Ϊ%.0f\t��Ϊ%f\t����Ϊ%d\tƽ��ֵΪ%f\t", a + b, a / b, (int)a % (int)b, (a + b) / 2.0);
}
//����a��b��ֵ��Ȼ��a��b��ֵ�����������a��bֵ��
void exchange()
{
	int a, b,c;
	printf("input a,b\n");
	scanf_s("%d%d", &a, &b);
	c = a;
	a = b;
	b = c;
	printf("%d\t%d", a, b);
}
//�󷽳�ax2+bx+c=0��ʵ������a,b,c�ɼ������룬a��0��b2-4ac>0��
void qiushishugen()
{
	float a, b, c, delta,x1,x2;
	printf("input a,b,c\n");
	scanf_s("%f%f%f", &a, &b, &c);
	delta = b * b - 4 * a * c;
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	printf("\nx1=%f\nx2=%f\n");
}
int main()
{
	int i;
	printf("��ѡ��ڼ��⣺\n");
	printf("1.�Ӽ�������һ��Сд��ĸ��Ҫ���ô�Сд��ĸ��ʽ�������ĸ����Ӧ��ASCII��ֵ\n");
	printf("2.������������������͡��̡�������ƽ��ֵ\n");
	printf("3.����a��b��ֵ��Ȼ��a��b��ֵ�����������a��bֵ\n");
	printf("4.�󷽳�ax2+bx+c=0��ʵ������a,b,c�ɼ������룬a��0��b*b-4ac>0\n");
	scanf_s("%d", &i);
	if (i == 1) putASCII();
	if (i == 2) qiuzhi();
	if (i == 3) exchange();
	if (i == 4) qiushishugen();
	return 0;
}