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


//初始化通讯录
void InitContact(Contact* pc);

//添加联系人
void AddContact(Contact* pc);

//显示联系人
void ShowContact(const Contact* pc);//这里是显示联系人，并不需要对人的信息进行任何改变，可以用const来限定，防止信息被修改

//删除联系人
void DelContact(Contact* pc);

//查询联系人
void SearchContact(const Contact* pc);//这里是查询信息，不需要做任何修改，可以用const来限定，防止信息被修改

//修改联系人
void ModifyContact(Contact* pc);

//排序联系人
void SortContact(Contact* pc);//排序联系人，不需要做修改，用const修饰