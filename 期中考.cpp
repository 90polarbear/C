#include"stdio.h"
#include"stdlib.h"
int main(){
	struct data{
		char ID[20];
		char name[10];
		int a[3];
	};
	data student[3];
	for(int i=0;i<3;i++){
		printf("�п�J�Ǹ�:");
		scanf("%s",student[i].ID);
		printf("�п�J�m�W:");
		scanf("%s",student[i].name);
		printf("�п�J��妨�Z:");
		scanf("%d",&student[i].a[0]);
		printf("�п�J�^�妨�Z:");
		scanf("%d",&student[i].a[1]);
		student[i].a[2] = student[i].a[0]+student[i].a[1];
		printf("\n");
	}
	for(int i=0;i<3;i++){
		printf("�ǥ;Ǹ���:%s\n",student[i].ID);
		printf("�ǥͩm�W��:%s\n",student[i].name);
		printf("��妨�Z��:%d\n",student[i].a[0]);
		printf("�^�妨�Z��:%d\n",student[i].a[1]);
		printf("�`���Z��:%d\n",student[i].a[2]);
		printf("\n");
	}	
	int top=0,high=0;
	for(int i=0;i<3;i++){
		if(student[i].a[0]>high){
			high=student[i].a[0];
			top=i;
		}
	}
	printf("���ҳ̦n���ǥͬ�:\n");
	printf("�Ǹ�:%s\n",student[top].ID);
	printf("�ǥͩm�W:%s\n",student[top].name);
	printf("��妨�Z��:%d\n",student[top].a[0]);
	printf("\n");
	int pass=60,notpass=0;
	
	for(int i=0;i<3;i++){
		if(student[i].a[1]<pass){
			notpass++;
		}
	}
	printf("�^�夣�ή檺�H�Ʀ�%d",notpass);
}
