//�Ƚ����ڴ�С
#include"stdio.h"
//���һ�������������Ƚ�������������ڵĳ��磨���ڡ����ڡ�������������������ڶ���Ϊ�ṹ�����͡�
struct date {              //�����ṹ��date���ڱ�ʾ����
	int year;
	int month;
	int day;
};
/*--�Զ��庯�����Ƚ���������A��B��A���򷵻�1�����򷵻�0--*/
int compare_(struct date A, struct date B) {
	if (A.year < B.year)
		return 1;
	if (A.year == B.year && A.month < B.month)
		return 1;
	if (A.year == B.year && A.month == B.month && A.day < B.day)
		return 1;
	return 0;
}
int compare()
{
	struct date x, y;         //��������date�ṹ�����x��y
	printf("��������X��yyyy-mm-dd��:");
	scanf_s("%d-%d-%d", &x.year, &x.month, &x.day);
	printf("��������Y��yyyy-mm-dd��:");
	scanf_s("%d-%d-%d", &y.year, &y.month, &y.day);
	if (compare_(x, y))
		printf("����X�Ƚ��磡");
	else
		printf("����Y�Ƚ��磡");
	system("pause");
	return 0;
}

//��ѧ���ɼ�
#include"stdio.h"
int main2()
{
	struct student		//�����ṹ�� student
	{
		char id[5];		//ѧ��ѧ�� (��λ)
		char name[40];	//ѧ�� ����
		float score;	//��ĩ�ܳɼ�
		int num;		//����
	} stu[100], temp;	//����ṹ���������stu��
	int i, j, n;
	char ch;
	FILE* fin, * fout;	//�� ���ļ�ָ��
	fin = fopen("scoreln. txt", "r"); 
	fout = fopen("scoreOut. txt", "w"); 
	if (fin == NULL || fout == NULL)
	{
		printf("�ļ���ȡʧ��! ");
		exit(1);
	}
	fscanf(fin, "%d\n", &n);	//��ȡѧ������
	for (i = 0; i < n; i++)	// A:���ж�ȡѧ����Ϣ
	{
		fscanf(fin, "%s",stu[i].id);
		fscanf(fin, "%s", stu[i].name);
		fscanf(fin, "%f\n", &stu[i].score);
	 }
	for (i = 0; i < n; i++)		//���ɼ�����
	{
		for (j = i + 1; j < n; j++)
			if (stu[i].score < stu[j].score)
			{
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}		//�ṹ��������彻��
		stu[i].num = i + 1;
	}
	for (i = 0; i < n; i++)		// B:����������ļ�
	{
		fprintf(fout, "%s ", stu[i].id);
		fprintf(fout, "%s ", stu[i].name);
		fprintf(fout, "%. 2f " ,stu[i].score);
		fprintf(fout, "%dIn", stu[i].num);	//�������
	}
	fclose(fin);
	fclose(fout);
	fin = fopen(" scoreln. txt", "r");
	fscanf(fin, "%c", &ch);
	printf(" scoreln. txt������Ϊ: \n");
	while (!feof(fin))
	{
		putchar(ch);
		fscanf(fin, "%c", &ch);
	}
	fclose(fin);
	fout = fopen(" scoreOut. txt", "r");
	fscanf(fout, "%c", &ch);
	printf("\n\nscore0ut. txt������Ϊ: \n");
	while (!feof(fout))
	{
		putchar(ch);
		fscanf(fout, "%c", &ch);
	}
	fclose(fout);
	return 0;
}