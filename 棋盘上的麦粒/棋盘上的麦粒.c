//�����ϵ�����
#include"stdio.h"
int main()
{
	int qipan,qipanmax;
	long long xiaomai, zongliang;
	printf("��������Ҫ���ڼ�������\n");
	scanf_s("%d", &qipanmax);
	for (qipan = xiaomai = 1,zongliang = 0;qipan <= qipanmax; qipan++)
	{
		zongliang += xiaomai;
		printf("��%d�����̷�%lld��С��\n", qipan, xiaomai);
		xiaomai *= 2;
	}
	printf("������һ������ % lld������\n", zongliang);
	return 0;
}
