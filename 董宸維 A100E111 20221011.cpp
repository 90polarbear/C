#include"stdio.h"
#include"stdlib.h"

int main(){
struct data{
	char name[10];
	int c;
	int e;
	int m;
	int total=0;
};
data student;
printf("�п�J�ǥͩm�W:");
scanf("%s",student.name);
printf("��妨�Z:");
scanf("%d",&student.c);
printf("�^�妨�Z:");
scanf("%d",&student.e);
printf("�ƾǦ��Z:");
scanf("%d",&student.m);
student.total=student.c+student.e+student.m;
printf("�ǥͩm�W:%s ,��妨�Z:%d ,�^�妨�Z:%d, �ƾǦ��Z:%d ,���Z�`�M:%d",student.name,student.c,student.e,student.m,student.total);
return 0;
}


/*
int main(){
char name[5][10];
for(int i=0;i<5;i++){
	printf("�п�J��%d��ǥͩm�W:",i+1);
	scanf("%s",name[i]);
} 
printf("\n\n");
for(int i=0;i<5;i++){
	printf("��%d��ǥͩm�W�O:%s\n",i+1,name[i]);
} 
return 0;
}*/
