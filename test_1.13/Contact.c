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

//��ʼ��ͨѶ¼
void InitContact(Contact* pc)
{
	assert(pc);
	memset(pc->data, 0, MAX);
	pc->sz = 0;
}

//�����ϵ��
void AddContact(Contact* pc)
{
	assert(pc);
	if (pc->sz == MAX)//�ж�ͨѶ¼�Ƿ�����
	{
		printf("ͨѶ¼���������ʧ��\n");
		return;
	}
	int i = 0;
	for(i=pc->sz; i<=pc->sz; i++)
	{
		printf("����������˵�����:");
		scanf("%s", pc->data[i].name);
		printf("����������˵�����:");
		scanf("%d", &(pc->data[i].age));
		printf("����������˵��Ա�:");
		scanf("%s", pc->data[i].sex);
		printf("����������˵ĵ绰:");
		scanf("%s", pc->data[i].tel);
		printf("����������˵ĵ�ַ:");
		scanf("%s", pc->data[i].addr);
		printf("�ɹ������ϵ��\n");
	}
	pc->sz++;
}


//��ʾ��ϵ��
void ShowContact(const Contact* pc)
{
	assert(pc);
	int i = 0;
	//��ӡ�б���
	printf("%-5s\t%-4s\t%-5s\t%-12s\t%15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ��ϵ��
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

//ɾ����ϵ��
//void DelContact(Contact* pc)
//{
//	assert(pc);
//	char name[20] = { 0 };//Ϊ���ܹ�����ɾ���˵����������ǵ�Ҫһ���ܹ��洢����Ҫɾ���˵�����
//	printf("��������Ҫɾ���˵�����:");
//	scanf("%s", name);
//	int i = 0;
//	int ret;
//	int flag = 0;
//	for (i = 0; i < pc->sz; i++)
//	{
//		if (strcmp(pc->data[i].name, name) == 0)
//		{
//			ret = i;
//			flag = 1;//ɾ�����˴��ڣ�����Ϊ1
//			break;
//		}
//	}
////	for (i = ret; i < pc->sz - 1; i++)
////	{
////		pc->data[i] = pc->data[i + 1];
////	}
////	printf("�ɹ�ɾ����ϵ��\n");
////	pc->sz--;
//	//������������ַ���������һ�½������Ѿ�ѧ����memmove��������Ҳ����ʹ���ˣ���ret+1λ�ÿ�ʼ��������Ҫ�ƶ����ֽڴ�С�ƶ���ret���λ��
//	//����Ҳ�ɹ��ĸ�����һ���˵���Ϣ
//	memmove(pc->data + ret, pc->data + ret + 1, sizeof(PeopleInfo) * (pc->sz - 1 - ret));
//	printf("�ɹ�ɾ����ϵ��\n");
//	pc->sz--;//ɾ��һ���˵���ϵ�󣬳�Ա��СҲҪ��һ
//}

//ɾ����ϵ��
void DelContact(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };//Ϊ���ܹ�����ɾ���˵����������ǵ�Ҫһ���ܹ��洢����Ҫɾ���˵�����
	printf("��������Ҫɾ���˵�����:");
	scanf("%s", name);
	
	int pos = FindName(pc, name);

	if (pos == -1)//ɾ�����˲������򷵻�
	{
		printf("Ҫɾ������ϵ�˲�����\n");
		return;
	}
	memmove(pc->data + pos, pc->data + pos + 1, sizeof(PeopleInfo) * (pc->sz - 1 - pos));
	printf("�ɹ�ɾ����ϵ��\n");
	pc->sz--;//ɾ��һ���˵���ϵ�󣬳�Ա��СҲҪ��һ
}

//��ѯ��ϵ��
void SearchContact(const Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("��������Ҫ��ѯ�˵�����:");
	scanf("%s", name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ��ѯ����ϵ�˲�����\n");
		return;
	}
	else
	{
		//��ӡ�б���
		printf("%-5s\t%-4s\t%-5s\t%-12s\t%15s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//��ӡ��ϵ��
			printf("%-5s\t%-4d\t%-5s\t%-12s\t%15s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tel,
				pc->data[pos].addr);
	}
}

//�޸���ϵ��
void ModifyContact(Contact* pc)
{
	assert(pc);
	char name[20] = { 0 };
	printf("��������Ҫ�޸��˵�����:");
	scanf("%s", name);
	int pos = FindName(pc, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ���ϵ�˲�����\n");
		return;
	}
	else
	{
		printf("�������޸ĺ��˵�����:");
		scanf("%s", pc->data[pos].name);
		printf("�������޸ĺ��˵�����:");
		scanf("%d", &(pc->data[pos].age));
		printf("�������޸ĺ��˵��Ա�:");
		scanf("%s", pc->data[pos].sex);
		printf("�������޸ĺ��˵ĵ绰:");
		scanf("%s", pc->data[pos].tel);
		printf("�������޸ĺ��˵ĵ�ַ:");
		scanf("%s", pc->data[pos].addr);
		printf("�ɹ������ϵ��\n");
	}
}

//������ϵ��
int int_cmp(const void* p1, const void* p2)
{
	//����������
	return (strcmp(((PeopleInfo*)p1)->name, ((PeopleInfo*)p2)->name));
}
void SortContact(Contact* pc)
{
	qsort(pc->data, pc->sz, sizeof(PeopleInfo), int_cmp);
	printf("����������ɹ�\n");
}