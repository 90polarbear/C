#include"stdio.h"
#include"stdlib.h"


int main(){
	struct data{
		char ID[20];
		char name[10];
		int c[4];
	};
	data student[3];
	for(int i=0;i<3;i++){
		printf("�п�J�Ǹ�:");
		scanf("%s",student[i].ID);
		printf("�п�J�m�W:");
		scanf("%s",student[i].name);
		printf("�п�J��妨�Z:");
		scanf("%d",&student[i].c[0]);
		printf("�п�J�^�妨�Z:");
		scanf("%d",&student[i].c[1]);
		printf("�п�ƾǦ��Z:");
		scanf("%d",&student[i].c[2]);
		student[i].c[3] = student[i].c[0] + student[i].c[1] + student[i].c[2];
		printf("\n");
	};
	for(int i=0;i<3;i++){
		printf("�Ǹ�:%s\n",student[i].ID);
		printf("�m�W:%s\n",student[i].name);
		printf("��妨�Z:%d\n",student[i].c[0]);
		printf("�^�妨�Z:%d\n",student[i].c[1]);
		printf("�ƾǦ��Z:%d\n",student[i].c[2]);
		printf("�`���Z��:%d\n",student[i].c[3]);
		printf("\n");
	};
return 0;
} 

/*
int main(){
	struct data{
		char ID[20];
		char name[10];
		int c;
		int e;
		int m;
		int total;
	};
	data student;
	printf("�п�J�Ǹ�:");
	scanf("%s",student.ID);
	printf("�п�J�m�W:");
	scanf("%s",student.name);
	printf("�п�J��妨�Z:");
	scanf("%d",&student.c);
	printf("�п�J�^�妨�Z:");
	scanf("%d",&student.e);
	printf("�п�ƾǦ��Z:");
	scanf("%d",&student.m);
	student.total = student.m + student.e + student.c;
	printf("�Ǹ�:%s\n",student.ID);
	printf("�m�W:%s\n",student.name);
	printf("��妨�Z:%d\n",student.c);
	printf("�^�妨�Z:%d\n",student.e);
	printf("�ƾǦ��Z:%d\n",student.m);
	printf("�`���Z��:%d\n",student.total);
return 0;
} */
