//�������5��ѧ���ɼ��в����Ƿ����������ָ���ɼ��������������Ӧλ�ã�������� not fund ��Ϣ
#include"stdio.h"
int main()
{
	int i;
	float score1, score[5];
	printf("����������ѧ���ĳɼ���\n");
	for (i = 0; i <= 4; i++)
		scanf_s("%f", &score[i]);
	printf("������һָ���ɼ���\n");
	scanf_s("%f", &score1);
	for (i = 0; i <= 4; i++)
		if (score[i] == score1)
		{
			printf("λ��Ϊ%d", i);
			break;
		}
	if (i >= 5)
		printf("not fund");
	return 0;
}