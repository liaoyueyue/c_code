#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>						//该程序还需调整
#include<string.h>
#include<assert.h>
#include<stdlib.h>

//#define max 1000
#define name_max 20
#define sex_max 20
#define tele_max 20
#define addr_max 20
#define DEFAULT_SZ 3

enum Option
{
	my_exit,
	add,
	del,
	search,
	modify,
	sort,
	print,
	init
};

typedef struct PeoInFo	//人的信息
{
	char name[name_max];
	char sex[sex_max];
	int age;
	char tele[tele_max];
	char addr[addr_max];
}PeoInFo;

typedef struct contact
{
	PeoInFo* data; //存放一千个人的信息
	int sz; // 记录通讯录中已保存人的个数
	int capacity;//容量
}contact;

void InItContact(contact* pc);//初始化联系人

void AddContact(contact* pc);//添加联系人

void PrintContact(const contact* pc);//打印联系人

void DelContact(contact* pc);//删除联系人

void SearchContact(const contact* pc);//搜索联系人

void ModifyContact(contact* pc);//修改联系人

void SortContact(contact* pc);//排序联系人

void DestroyContact(contact* pc);

void CheckCapacity(contact* pc);

