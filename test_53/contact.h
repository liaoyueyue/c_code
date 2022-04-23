#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>						//�ó��������
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

typedef struct PeoInFo	//�˵���Ϣ
{
	char name[name_max];
	char sex[sex_max];
	int age;
	char tele[tele_max];
	char addr[addr_max];
}PeoInFo;

typedef struct contact
{
	PeoInFo* data; //���һǧ���˵���Ϣ
	int sz; // ��¼ͨѶ¼���ѱ����˵ĸ���
	int capacity;//����
}contact;

void InItContact(contact* pc);//��ʼ����ϵ��

void AddContact(contact* pc);//�����ϵ��

void PrintContact(const contact* pc);//��ӡ��ϵ��

void DelContact(contact* pc);//ɾ����ϵ��

void SearchContact(const contact* pc);//������ϵ��

void ModifyContact(contact* pc);//�޸���ϵ��

void SortContact(contact* pc);//������ϵ��

void DestroyContact(contact* pc);

void CheckCapacity(contact* pc);

