#include "stdio.h"
#include "stdlib.h"
#include "queue.h"

int main(){
	int buffer[20],p=0,q=0,value,x=0;
	while(x != 4){
		printf("1.��J,2.���X,3.�L�X,4.���}\n");
		scanf("%d",&x);
		if(x==1){
			printf("�п�J�ƭ�");
			scanf("%d",&value);
			if(push(buffer,value,p)==-1){
				printf("�̭����ƭȤw��");
			}
		}
		else if(x==2){
			if(pull(buffer,value,p,q)==-1){
				printf("�̭��ƭȬ���\n");
			}else{
				printf("����������%d\n",value);
			}
		}
		else if(x==3){
			if(p==q)printf("�̭��ƭȬ���");
			for(int i=q;i<p;i++){
				printf("%d,",buffer[i]);
			}
			printf("\n");
		}
		else if(x>4)printf("��ܿ��~!�A�դ@��!\n");
	}
	return 1;
} 
int push(int buffer[20],int value,int&p){
	if(p==20) return-1;
	buffer[p]=value;
	p++;
	return 1;
}
int pull(int buffer[20],int& value,int&p,int&q){
	if(p==q) return -1; 
	value = buffer[q];
	q++;
	return 1;
}
