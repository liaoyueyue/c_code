//比较日期大小
#include"stdio.h"
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
	scanf_s("%d-%d-%d", &x.year, &x.month, &x.day);
	printf("输入日期Y（yyyy-mm-dd）:");
	scanf_s("%d-%d-%d", &y.year, &y.month, &y.day);
	if (compare_(x, y))
		printf("日期X比较早！");
	else
		printf("日期Y比较早！");
	system("pause");
	return 0;
}

//排学生成绩
#include"stdio.h"
int main2()
{
	struct student		//声明结构体 student
	{
		char id[5];		//学生学号 (四位)
		char name[40];	//学生 姓名
		float score;	//期末总成绩
		int num;		//名次
	} stu[100], temp;	//定义结构体对象数组stu利
	int i, j, n;
	char ch;
	FILE* fin, * fout;	//定 义文件指针
	fin = fopen("scoreln. txt", "r"); 
	fout = fopen("scoreOut. txt", "w"); 
	if (fin == NULL || fout == NULL)
	{
		printf("文件读取失败! ");
		exit(1);
	}
	fscanf(fin, "%d\n", &n);	//读取学生人数
	for (i = 0; i < n; i++)	// A:逐行读取学生信息
	{
		fscanf(fin, "%s",stu[i].id);
		fscanf(fin, "%s", stu[i].name);
		fscanf(fin, "%f\n", &stu[i].score);
	 }
	for (i = 0; i < n; i++)		//按成绩排序
	{
		for (j = i + 1; j < n; j++)
			if (stu[i].score < stu[j].score)
			{
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}		//结构体变量整体交换
		stu[i].num = i + 1;
	}
	for (i = 0; i < n; i++)		// B:逐行输出到文件
	{
		fprintf(fout, "%s ", stu[i].id);
		fprintf(fout, "%s ", stu[i].name);
		fprintf(fout, "%. 2f " ,stu[i].score);
		fprintf(fout, "%dIn", stu[i].num);	//输出名次
	}
	fclose(fin);
	fclose(fout);
	fin = fopen(" scoreln. txt", "r");
	fscanf(fin, "%c", &ch);
	printf(" scoreln. txt的内容为: \n");
	while (!feof(fin))
	{
		putchar(ch);
		fscanf(fin, "%c", &ch);
	}
	fclose(fin);
	fout = fopen(" scoreOut. txt", "r");
	fscanf(fout, "%c", &ch);
	printf("\n\nscore0ut. txt的内容为: \n");
	while (!feof(fout))
	{
		putchar(ch);
		fscanf(fout, "%c", &ch);
	}
	fclose(fout);
	return 0;
}