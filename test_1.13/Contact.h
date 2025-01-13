#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

#define MAX 100
#define NAME_MAX 20
#define SEX_MAX 5
#define TEL_MAX 12
#define ADDR_MAX 30

enum OPTION
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


typedef struct PeopleInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}PeopleInfo;

typedef struct Contact
{
	PeopleInfo data[MAX];
	int sz;
}Contact;


//��ʼ��ͨѶ¼
void InitContact(Contact* pc);

//�����ϵ��
void AddContact(Contact* pc);

//��ʾ��ϵ��
void ShowContact(const Contact* pc);//��������ʾ��ϵ�ˣ�������Ҫ���˵���Ϣ�����κθı䣬������const���޶�����ֹ��Ϣ���޸�

//ɾ����ϵ��
void DelContact(Contact* pc);

//��ѯ��ϵ��
void SearchContact(const Contact* pc);//�����ǲ�ѯ��Ϣ������Ҫ���κ��޸ģ�������const���޶�����ֹ��Ϣ���޸�

//�޸���ϵ��
void ModifyContact(Contact* pc);

//������ϵ��
void SortContact(Contact* pc);//������ϵ�ˣ�����Ҫ���޸ģ���const����