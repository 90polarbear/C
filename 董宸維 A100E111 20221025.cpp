#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int main(){
	struct data{
		char ID[20];
		char name[10];
		int a[4];
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
		printf("�п�J�ƾǦ��Z:");
		scanf("%d",&student[i].a[2]); 
		student[i].a[3]=student[i].a[0]+student[i].a[1]+student[i].a[2];
		printf("\n");
	}
	for(int i=0;i<3;i++){
		printf("�Ǹ���:%s\n",student[i].ID);
		printf("�m�W��:%s\n",student[i].name);
		printf("��妨�Z��:%d\n",student[i].a[0]);
		printf("�^�妨�Z��:%d\n",student[i].a[1]);
		printf("�ƾǦ��Z��:%d\n",student[i].a[2]);
		student[i].a[3]=student[i].a[0]+student[i].a[1]+student[i].a[2];
		printf("�`���Z��:%d\n",student[i].a[3]);
		printf("\n");
	}
	int top ,total,t[3];
	
	for(int i=0;i<3;i++){
		if(student[i].a[3]>=total){
			total=student[i].a[3];
			top=i;
			if(student[i].a[3]==total){
				t[i]=i;
			}else{
				
			}
		}
	}
	if(t[0]==0 && t[1]==0 && t[2]==0){
		printf("1�ҳ̦n���Ǹ�:%s\n",student[top].ID);
		printf("�ҳ̦n���m�W:%s\n",student[top].name);
		printf("�ҳ̦n���`���Z:%d\n",student[top].a[3]);
	}else{
		for(int i=0;i<3;i++){
			printf("2�ҳ̦n���Ǹ�:%s\n",student[t[i]].ID);
			printf("�ҳ̦n���m�W:%s\n",student[t[i]].name);
			printf("�ҳ̦n���`���Z:%d\n",student[t[i]].a[3]);
		}
	}

	
	/*
	if(student[0].a[3]>student[1].a[3]){
		if(student[0].a[3]>student[2].a[3]){
			printf("�ҳ̦n���Ǹ�:%s\n",student[0].ID);
			printf("�ҳ̦n���m�W:%s\n",student[0].name);
			printf("�ҳ̦n���`���Z:%d\n",student[0].a[3]);
		}else{
			printf("�ҳ̦n���Ǹ�:%s\n",student[2].ID);
			printf("�ҳ̦n���m�W:%s\n",student[2].name);
			printf("�ҳ̦n���`���Z:%d\n",student[2].a[3]);
		}
	}else{
		if(student[1].a[3]>student[2].a[3]){
			printf("�ҳ̦n���Ǹ�:%s\n",student[1].ID);
			printf("�ҳ̦n���m�W:%s\n",student[1].name);
			printf("�ҳ̦n���`���Z:%d\n",student[1].a[3]);
		}else{
			printf("�ҳ̦n���Ǹ�:%s\n",student[2].ID);
			printf("�ҳ̦n���m�W:%s\n",student[2].name);
			printf("�ҳ̦n���`���Z:%d\n",student[2].a[3]);
		}
	}
	*/
	
	return 0;
}

