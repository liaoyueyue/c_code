//一个球从100米高度自由下落，每次落地后反弹回原来高度的一半，在落下，再反弹。
//求它在第10次落地时，共经过多少米？第10次反弹了多高？
#include"stdio.h"
int main1()
{
	int i;
	double h = 100.0, s=100;
	printf("第1次落地时经过了%lf米\n",h);
	for (i = 1; i <= 10; i++)
	{
		if(i>1)
			printf("第%d次落地时经过了%lf米\n", i,2*h);
		h /= 2;
		s += 2*h;
	}
	printf("---------------------------------------------------------------------------\n");
	printf("第十次落地时共经过%lf米\n第10次反弹了%lf米\n", s, h);
	return 0;
}


//若10改为n呢？
int main()
{
	int i,n;
	double h = 100.0, s = 100;
	printf("请输入小球反弹几次：\n");
	scanf_s("%d", &n);
	printf("第1次落地时经过了%lf米\n", h);
	for (i = 1; i <= n; i++)
	{
		if (i > 1)
			printf("第%d次落地时经过了%lf米\n", i, 2 * h);
		h /= 2;
		s += 2 * h;
	}
	printf("---------------------------------------------------------------------------\n");
	printf("第%d次落地时共经过%lf米\n第%d次反弹了%lf米\n", n, s, n, h);
	return 0;
}