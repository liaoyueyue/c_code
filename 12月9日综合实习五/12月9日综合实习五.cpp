#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
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
	scanf("%d-%d-%d", &x.year, &x.month, &x.day);
	printf("��������Y��yyyy-mm-dd��:");
	scanf("%d-%d-%d", &y.year, &y.month, &y.day);
	if (compare_(x, y))
		printf("����X�Ƚ��磡");
	else
		printf("����Y�Ƚ��磡");
	system("pause");
	return 0;
}

//�ýṹ���������ѧ���ɼ����ݵ�����, �����ߡ���ߡ�ƽ���ɼ����������гɼ����������
int sorting()
{
	struct stu	// �����ṹ��student
	{
		char id[5];	//ѧ��ѧ�� (��λ)
		char name[40];	//ѧ������
		float score;	//��ĩ�ܳɼ�
		int num;	//����
	} student[100], temp;	//����ṹ���������
	int i, j, n;
	printf("����ѧ������(1~100) : ");
	scanf("%d", &n);
	printf("-----------------------\n");
	for (i = 0; i < n; i++) //����ѧ���ɼ�
	{
		printf("ѧ������9999��ֹͣ����! \n");
		printf("ѧ��(9999) :");
		scanf("%s", student[i].id);
		if (strcmp(student[i].id, "9999") == 0)
		{
			n = i;
			break;
		}
		printf("����: ");
		scanf("%s", student[i].name);
		printf("�ܳɼ�: ");
		scanf("%f", &student[i].score);
		printf("-----------------------\n");
	}
	for (i = 0; i < n; i++)	//���ɼ�����
	{
		for(j=i+1;j<n;j++)
			if (student[i].score < student[j].score)
			{
				temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}	//�ṹ��������彻��
		student[i].num = i + 1;
	}
	printf("---------------------------------\n");
	printf("  ѧ��       ����       �ɼ�  ����\n");
	for (i = 0; i < n; i++)		//�������
	{
		printf("%+6s", student[i].id);
		printf("%+12s", student[i].name);
		printf("%10. 2f", student[i].score);
		printf("%4d\n", student[i].num);
	}
}
//�������� n������һ������������˳��洢���� 1 �� n��Ȼ����������ż����������Ǻ� �� * ����
struct node 
{
	int data;
	struct node* next;
}*head, * q,* p;
void insert(struct node* p, int x)
{
	struct node* new;
	new = malloc(sizeof(struct node);
	new->data = X;
	new > next = �� - next; //�½��ָ��p�ĺ�̽ڵ�
	p->next : new;	//p�ĺ�̽��Ϊnew
}
void print()
{
	for (q = head; q != NULL; q = q->next)
	printf("%d ", q->data);
	printf("\n");
}
int insert()
{
	int i, n;
	printf("������һ��������n: ");
	scanf("%d", &n);
head: malloc(sizeof(struct node));
	head->data = 1;
	head->next = NULL;
	q = head;
	for (i = 2; i < n; i++)	//ѭ������
	{
		insert(q, i);
		q = q->next;//qָ���²���Ľ��
	}
	for (q = head; q != NULL; q = q->new
		if (q->data) % 2 == 0)
	{
		insert(q, 2);
		q = q->next;//qָ���²���Ľ��
	}
	printf("\n");
	system("pause");
	return 0;
}
int main()
{
	int i;
	printf("1.�Ƚ�������������ڵĳ���\n2.����ѧ���ɼ����ݵ�����\n3.��˳��洢���� 1 �� n��Ȼ����������ż����������Ǻ�");
	printf("��ѡ��˵�1~3\n");
	scanf("%d", &i);
	if (i == 1) compare();
	if (i == 2) sorting();
	if (i == 3) insert();
	return 0;
}