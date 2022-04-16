#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void InItContact(contact* pc)
{
	assert(pc);
	pc->sz = 0;
	pc->data = (PeoInFo*)calloc(DEFAULT_SZ, sizeof(PeoInFo)); //分配默认大小并清空
	if (pc->data == NULL) //检查分配是否成功
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULT_SZ;	
	//memset(pc->data, 0, sizeof(pc->data));
	//这回需要手动分配空间了。
}

void AddContact(contact* pc)
{
	assert(pc);
	CheckCapacity(pc); //插入前检查扩容情况


	//录入信息
	printf("请输入名字：\n");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别：\n");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄：\n");
	scanf("%d", &pc->data[pc->sz].age);
	printf("请输入电话：\n");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入住址：\n");
	scanf("%s", pc->data[pc->sz].addr);
	pc->sz++;
	printf("添加成功！\n");
}

void PrintContact(contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("暂无联系人\n");
	}
	printf("%-10s %-5s %-5s %-15s %-20s\n", "姓名", "性别", "年龄", "电话", "住址");
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-10s %-5s %-5d %-15s %-20s\n", pc->data[i].name, pc->data[i].sex, pc->data[i].age, pc->data[i].tele, pc->data[i].addr);
	}

}

//找到返回下标，没找到返回-1
int FindByName(const contact* pc, char name[])
{
	assert(pc);
	int i = 0;
	for (i = 0; i < pc->sz; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("联系人已空，无法删除\n");
	}
	//删除
	char name[name_max] = { 0 };
	printf("请输入想要删除的联系人姓名：\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("找不到联系人\n");
	}
	//有联系人，进行删除
	int i = 0;
	for (i = pos; i < pc->sz - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(contact* pc)
{
	assert(pc);
	char name[name_max] = { 0 };
	printf("请输入要查找联系人的名字:\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("需要查找的联系人不存在\n");
		return;
	}
	printf("已找到联系人\n");
	printf("%-10s %-5s %-5s %-15s %-20s\n", "姓名", "性别", "年龄", "电话", "住址");
	printf("%-10s %-5s %-5d %-15s %-20s\n", pc->data[pos].name, pc->data[pos].sex, pc->data[pos].age, pc->data[pos].tele, pc->data[pos].addr);

}

void ModifyContact(contact* pc)
{
	assert(pc);
	if (pc->sz == 0)
	{
		printf("联系人已空，无法修改\n");
	}
	//查找是否存在联系人
	char name[name_max] = { 0 };
	printf("请输入想要修改的联系人姓名：\n");
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("找不到联系人\n");
	}
	//找到联系人，进行修改
	printf("输入需要修改的名字：\n");
	scanf("%s", pc->data[pos].name);
	printf("输入需要修改的性别：\n");
	scanf("%s", pc->data[pos].sex);
	printf("输入需要修改的年龄：\n");
	scanf("%d", &pc->data[pos].age);
	printf("输入需要修改的电话：\n");
	scanf("%s", pc->data[pos].tele);
	printf("输入需要修改的住址：\n");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
}

void SortContact(contact* pc)
{
	assert(pc);
	int i = 0;
	int j = 0;
	PeoInFo tmp;
	//冒泡排序
	for (i = 0; i < pc->sz - 1; i++)
	{
		for (j = 0; j < pc->sz - 1 - i; j++)
		{
			if (0 < strcmp(pc->data[j].name, pc->data[j + 1].name))
			{
				tmp = pc->data[j];
				pc->data[j] = pc->data[j + 1];
				pc->data[j + 1] = tmp;
			}
		}
	}
	printf("按姓名排序成功\n");
}

void CheckCapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		//每次扩容双倍
		PeoInFo* ptr = (PeoInFo*)realloc(pc->data, (pc->capacity * 2) * sizeof(PeoInFo));
		if (ptr != NULL)
		{
			pc->data = ptr;
			pc->capacity *= 2;
			printf("增容成功\n");
		}
	}
}
 ​;
void DestroyContact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->capacity = 0;
	pc->sz = 0;
}