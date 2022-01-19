#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
//设计一个函数，用来比较输入的两个日期的迟早（早于、等于、晚于三种情况），日期定义为结构体类型。
struct date {              //声明结构体date用于表示日期
	int year;
	int month;
	int day;
};
/*--自定义函数：比较两个日期A和B，A早则返回1，否则返回0--*/
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
	struct date x, y;         //定义两个date结构体对象x和y
	printf("输入日期X（yyyy-mm-dd）:");
	scanf("%d-%d-%d", &x.year, &x.month, &x.day);
	printf("输入日期Y（yyyy-mm-dd）:");
	scanf("%d-%d-%d", &y.year, &y.month, &y.day);
	if (compare_(x, y))
		printf("日期X比较早！");
	else
		printf("日期Y比较早！");
	system("pause");
	return 0;
}

//用结构体数组进行学生成绩数据的输入, 求解最高、最高、平均成绩，并将所有成绩排序输出；
int sorting()
{
	struct stu	// 声明结构体student
	{
		char id[5];	//学生学号 (四位)
		char name[40];	//学生姓名
		float score;	//期末总成绩
		int num;	//名词
	} student[100], temp;	//定义结构体对象数组
	int i, j, n;
	printf("输入学生人数(1~100) : ");
	scanf("%d", &n);
	printf("-----------------------\n");
	for (i = 0; i < n; i++) //输入学生成绩
	{
		printf("学号输入9999则停止输入! \n");
		printf("学号(9999) :");
		scanf("%s", student[i].id);
		if (strcmp(student[i].id, "9999") == 0)
		{
			n = i;
			break;
		}
		printf("姓名: ");
		scanf("%s", student[i].name);
		printf("总成绩: ");
		scanf("%f", &student[i].score);
		printf("-----------------------\n");
	}
	for (i = 0; i < n; i++)	//按成绩排序
	{
		for(j=i+1;j<n;j++)
			if (student[i].score < student[j].score)
			{
				temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}	//结构体变量整体交换
		student[i].num = i + 1;
	}
	printf("---------------------------------\n");
	printf("  学号       姓名       成绩  名次\n");
	for (i = 0; i < n; i++)		//输出名次
	{
		printf("%+6s", student[i].id);
		printf("%+12s", student[i].name);
		printf("%10. 2f", student[i].score);
		printf("%4d\n", student[i].num);
	}
}
//读入整数 n，建立一个单向链表，按顺序存储整数 1 至 n，然后再在所有偶数后面插入星号 “ * ”。
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
	new > next = ρ - next; //新结点指向p的后继节点
	p->next : new;	//p的后继结点为new
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
	printf("请输入一个正整数n: ");
	scanf("%d", &n);
head: malloc(sizeof(struct node));
	head->data = 1;
	head->next = NULL;
	q = head;
	for (i = 2; i < n; i++)	//循环插入
	{
		insert(q, i);
		q = q->next;//q指向新插入的结点
	}
	for (q = head; q != NULL; q = q->new
		if (q->data) % 2 == 0)
	{
		insert(q, 2);
		q = q->next;//q指向新插入的结点
	}
	printf("\n");
	system("pause");
	return 0;
}
int main()
{
	int i;
	printf("1.比较输入的两个日期的迟早\n2.进行学生成绩数据的输入\n3.按顺序存储整数 1 至 n，然后再在所有偶数后面插入星号");
	printf("请选择菜单1~3\n");
	scanf("%d", &i);
	if (i == 1) compare();
	if (i == 2) sorting();
	if (i == 3) insert();
	return 0;
}