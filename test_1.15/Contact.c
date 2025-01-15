//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:6031)
#include "Contact.h"

int FindName(const Contact* pc, char* name)
{
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

//初始化通讯录
void InitContact(Contact* pc)
{
	assert(pc);
	memset(pc->data, 0, MAX);
	pc->sz = 0;
}

//添加联系人
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)//判断通讯录是否已满
	{
		printf("通讯录已满，添加失败\n");
		return;
	}
	int i = 0;
	for(i=pc->sz; i<=pc->sz; i++)
	{
		printf("请输入添加人的姓名:");
		scanf("%s", pc->data[i].name);
		printf("请输入添加人的年龄:");
		scanf("%d", &(pc->data[i].age));
		printf("请输入添加人的性别:");
		scanf("%s", pc->data[i].sex);
		printf("请输入添加人的电话:");
		scanf("%s", pc->data[i].tel);
		printf("请输入添加人的地址:");
		scanf("%s", pc->data[i].addr);
		printf("成功添加联系人\n");
	}
	pc->sz++;
}


//显示联系人
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	//打印列标题
	printf("%-5s\t%-4s\t%-5s\t%-12s\t%15s\n", "姓名", "年龄", "性别", "电话", "地址");
	//打印联系人
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-5s\t%-4d\t%-5s\t%-12s\t%15s\n",
			pc->data[i].name,
			pc->data[i].age,
			pc->data[i].sex,
			pc->data[i].tel,
			pc->data[i].addr);
	}
}

//删除联系人
//void DelContact(Contact* pc)
//{
//	assert(pc);
//	char name[20] = { 0 };//为了能够输入删除人的姓名，我们得要一个能够存储所想要删除人的姓名
//	printf("请输入你要删除人的姓名:");
//	scanf("%s", name);
//	int i = 0;
//	int ret;
//	int flag = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(pc->data[i].name, name) == 0)
//		{
//			ret = i;
//			flag = 1;//删除的人存在，就置为1
//			break;
//		}
//	}
////	for (i = ret; i < pc->sz - 1; i++)
////	{
////		pc->data[i] = pc->data[i + 1];
////	}
////	printf("成功删除联系人\n");
////	pc->sz--;
//	//除了上面的这种方法，在上一章节我们已经学过了memmove，在这里也可以使用了，将ret+1位置开始到我们需要移动的字节大小移动到ret这个位置
//	//这样也成功的覆盖了一个人的信息
//	memmove(pc->data + ret, pc->data + ret + 1, sizeof(PeopleInfo) * (pc->sz - 1 - ret));
//	printf("成功删除联系人\n");
//	pc->sz--;//删除一个人的联系后，成员大小也要减一
//}

//删除联系人
void DelContact(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };//为了能够输入删除人的姓名，我们得要一个能够存储所想要删除人的姓名
	printf("请输入你要删除人的姓名:");
	scanf("%s", name);
	
	int pos = FindName(pc, name);

	if (pos == -1)//删除的人不存在则返回
	{
		printf("要删除的联系人不存在\n");
		return;
	}
	memmove(pc->data + pos, pc->data + pos + 1, sizeof(PeopleInfo) * (pc->sz - 1 - pos));
	printf("成功删除联系人\n");
	pc->sz--;//删除一个人的联系后，成员大小也要减一
}

//查询联系人
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("请输入你要查询人的姓名:");
	scanf("%s", name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("要查询的联系人不存在\n");
		return;
	}
	else
	{
		//打印列标题
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%15s\n", "姓名", "年龄", "性别", "电话", "地址");
		//打印联系人
			printf("%-5s\t%-4d\t%-5s\t%-12s\t%15s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tel,
				pc->data[pos].addr);
	}
}

//修改联系人
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("请输入你要修改人的姓名:");
	scanf("%s", name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("要修改的联系人不存在\n");
		return;
	}
	else
	{
		printf("请输入修改后人的姓名:");
		scanf("%s", pc->data[pos].name);
		printf("请输入修改后人的年龄:");
		scanf("%d", &(pc->data[pos].age));
		printf("请输入修改后人的性别:");
		scanf("%s", pc->data[pos].sex);
		printf("请输入修改后人的电话:");
		scanf("%s", pc->data[pos].tel);
		printf("请输入修改后人的地址:");
		scanf("%s", pc->data[pos].addr);
		printf("成功添加联系人\n");
	}
}

//排序联系人
int int_cmp(const void* p1, const void* p2)
{
	//按姓名排序
	return (strcmp(((PeopleInfo*)p1)->name, ((PeopleInfo*)p2)->name));
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeopleInfo), int_cmp);
	printf("按姓名排序成功\n");
}