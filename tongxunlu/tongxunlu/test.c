#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#define Max_name 1024
#define Max_sex  4
#define Max_number 15
#define Max_address 1024
typedef struct contact
{
	char name[Max_name];
	char sex[Max_sex];
	int age;
	char number[Max_number];
	char address[Max_address];
}contact;
typedef struct person{
	contact  *persinInfo;
	int sequence;
	int capacity; //��ǰ������������
}person;
person addr_num;
typedef void(*Fun)(person *);
void Init(person *addr_num){
	assert(addr_num !=NULL);
	addr_num->sequence = 0;
	addr_num->capacity = 10;
	addr_num->persinInfo = (contact*)malloc(sizeof(contact)*addr_num->capacity);

	for (int i = 0; i < addr_num->capacity; ++i){
		memset(addr_num->persinInfo[i].name, 0, Max_name);
		memset(addr_num->persinInfo[i].address, 0, Max_address);
		memset(addr_num->persinInfo[i].number, 0, Max_number);
		memset(addr_num->persinInfo[i].sex, 0, Max_sex);
		addr_num->persinInfo[i].age = 0;
	}
}
int print_menu(){
	printf("**********************************\n");
	printf("**    1. �����ϵ����Ϣ         **\n");
	printf("**    2. ɾ��ָ����ϵ����Ϣ     **\n");
	printf("**    3. ����ָ����ϵ����Ϣ     **\n");
	printf("**    4. �޸�ָ����ϵ����Ϣ     **\n");
	printf("**    5. ��ʾ������ϵ����Ϣ     **\n");
	//printf("**    6. ���������ϵ��         **\n");
	//printf("**    7. ����������������ϵ     **\n");
	//printf("**    8. ������ϵ�˵��ļ�       **\n");
	//printf("**    9. ������ϵ��             **\n");
	printf("**    0. �˳�                   **\n");
	printf("**********************************\n");
	printf("��������Ҫѡ���ѡ�\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void add_people(person *addr_num){

	assert(addr_num != NULL);
	if (addr_num->sequence >= addr_num->capacity)
	{
		addr_num->capacity += 10;
		addr_num->persinInfo = (contact *)realloc(addr_num->persinInfo,addr_num->capacity);
	}
	contact *per = &addr_num->persinInfo[addr_num->sequence];
	printf("��������Ҫ��ӵ�����\n");
	scanf("%s", per->name);
	printf("��������Ҫ��ӵ��Ա�\n");
	scanf("%s",per->sex);
	printf("��������Ҫ��ӵ�����\n");
	scanf("%d", &(per->age));
	printf("��������Ҫ��ӵĵ绰����\n");
	scanf("%s", per->number);
	printf("��������Ҫ��ӵĵ�ַ\n");
	scanf("%s", per->address);
	++addr_num->sequence;
	printf("������\n");


}
void del_people(person *addr_num){
	int choice = 0;
	assert(addr_num != NULL);

	if (addr_num->sequence==0)
	{
		printf("��ǰû���˿�ɾ������Ӻ���в���\n");
		return;
	}
	else {
		while (1){
			printf("��������Ҫɾ�����˵����:\n");
			scanf("%d", &choice);
			if (choice <= 0 || choice > addr_num->sequence){
				printf("û�и���ţ���˶Ժ����ѡ��\n");
				continue;
			}
			else {
				contact *p = &addr_num->persinInfo[choice-1];
				contact *per = &addr_num->persinInfo[addr_num->sequence - 1];
				strcpy(p->name, per->name);
				strcpy(p->sex, per->sex);
				strcpy(p->address, per->address);
				strcpy(p->number, per->number);
				p->age = per->age;
				--addr_num->sequence;
				break;
			}

		}
	}
		printf("�Ѿ�ɾ��\n");
	
}
void printf_people(person *addr_num){
	assert(addr_num != NULL);
	if (addr_num->sequence == 0){ printf("����%d����¼\n", addr_num->sequence); return; }

	printf("����%d����¼\n", addr_num->sequence);
	for (int i = 0; i < addr_num->sequence; ++i){
		contact*per = &addr_num->persinInfo[i];
		printf("���[%d]\n", i+1);
		printf("����%s            �绰����:%s\n", per->name, per->number);
		printf("�Ա�:%s       ���䣺%d     סַ:%s\n",per->sex, per->age, per->address);
		printf("\n");
	}
	printf("��ʾ���\n");
}
void find_people(person *addr_num){
	assert(addr_num != NULL);
	int choice = 0;
	char name[15];
	char number[15];
	int i = 0;
	while (1){
		printf("��������Ҫ���ҵ����ͣ�\n");
		printf("1.����\n");
		printf("2.�绰��\n");
		scanf("%d", &choice);
		if (choice != 1 && choice != 2){
			printf("�����������������\n");
			continue;
		}
		else if (choice == 1){
			printf("��������Ҫ�ҵ�����\n");
			scanf("%s", name);
			for (i; i < addr_num->sequence; ++i){
				if (strcmp(name,&addr_num->persinInfo[i].name)==0){
					printf("���˵����Ϊ%d\n", i+1);
					printf("����Ϊ��%s\n",addr_num->persinInfo[i].name);
					printf("�Ա�Ϊ��%s\n", addr_num->persinInfo[i].sex);
					printf("����Ϊ��%d\n", addr_num->persinInfo[i].age);
					printf("�绰Ϊ��%s\n",addr_num->persinInfo[i].number );
					printf("��ַΪ��%s\n", addr_num->persinInfo[i].address);
					return;

				}

			}
		}
		else {
			printf("��������Ҫ�ҵĵ绰��\n");
			scanf("%s", number);
			for (i; i < addr_num->sequence; ++i){
				if (strcmp(number, &addr_num->persinInfo[i].number) == 0){
					printf("���˵����Ϊ%d\n", i + 1);
					printf("����Ϊ��%s\n", addr_num->persinInfo[i].name);
					printf("�Ա�Ϊ��%s\n", addr_num->persinInfo[i].sex);
					printf("����Ϊ��%d\n", addr_num->persinInfo[i].age);
					printf("�绰Ϊ��%s\n", addr_num->persinInfo[i].number);
					printf("��ַΪ��%s\n", addr_num->persinInfo[i].address);
					return;
                  }
				
			}
		}
		printf("û�ҵ��ˣ������º˶�\n");
		return ;
	}
	return ;
}
void modify_people(person *addr_num){
	assert(addr_num != NULL);
	int choice = 0;
	while (1){
		printf("��������Ҫ�޸ĵ����(����0�˳�)\n");
		scanf("%d", &choice);
		if (choice == 0){ return; }
		if (choice<0 || choice>addr_num->sequence)
		{
			printf("û�и���ţ���˶�\n");
			continue;
		}
		else{
			printf("��������Ҫ�޸ĵ�ֵ:\n");
			printf("1.����\t2.�Ա�\t3.����\t4.�绰����\t5.��ַ \n");
            int choose = 0;
			scanf("%d", &choose);
			if (choose == 1){
				printf("������Ҫ�޸ĵ�����:\n");
				scanf("%s", addr_num->persinInfo[choice-1].name);
				continue;
			}
			else if (choose == 2){
				printf("������Ҫ�޸ĵ��Ա�:\n");
				scanf("%s", addr_num->persinInfo[choice - 1].sex);
				continue;;
			}
			else if (choose == 3){
				printf("������Ҫ�޸ĵ�����:\n");
				scanf("%d", addr_num->persinInfo[choice - 1].age);
				continue;
			}
			else if (choose == 4){
				printf("������Ҫ�޸ĵĵ绰:\n");
				scanf("%s", addr_num->persinInfo[choice - 1].number);
			continue;
			}
			else if (choose == 5){
				printf("������Ҫ�޸ĵĵ�ַ:\n");
				scanf("%s", addr_num->persinInfo[choice - 1].address);
				continue;
			}
			else printf("ѡ�����\n");
		}

	}

}
int main(){

	Init(&addr_num);
	Fun arr[] = {
		NULL,
	  add_people,
 	  del_people,
 	  find_people,
 	  modify_people,
	  printf_people,
	  
	};
	int index = 0;
	while (1){
		index=print_menu();
		if (index==0)
		{
			printf("ͨѶ¼�ѽ���\n");
			break;
		}
		else if (index<0 || index>6){
			printf("���������������������\n");
			continue;
		}
		system("cls");
		arr[index](&addr_num);
			}
	system("pause");
	return 0;
}