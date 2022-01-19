//棋盘上的麦粒
#include"stdio.h"
int main()
{
	int qipan,qipanmax;
	long long xiaomai, zongliang;
	printf("请输入需要到第几个棋盘\n");
	scanf_s("%d", &qipanmax);
	for (qipan = xiaomai = 1,zongliang = 0;qipan <= qipanmax; qipan++)
	{
		zongliang += xiaomai;
		printf("第%d个棋盘放%lld粒小麦\n", qipan, xiaomai);
		xiaomai *= 2;
	}
	printf("棋盘上一共放了 % lld个麦粒\n", zongliang);
	return 0;
}
