#include "stdio.h"
#include "stdlib.h"
#include "buffer.h"

int main(){
	int buffer[20],top=0,value,x=0;
	while(x != 4){
		printf("1.��J,2.���X,3.�L�X,4.���}\n");
		scanf("%d",&x);
		if(x==1){
			printf("�п�J�ƭ�");
			scanf("%d",&value);
			if(push(buffer,value,top)==-1){
				printf("�̭����ƭȤw��");
			}
		}
		else if(x==2){
			if(pull(buffer,value,top)==-1){
				printf("�̭��ƭȬ���");
			}else{
				printf("����������%d",value);
			}
		}
		else if(x==3){
			if(top==0)printf("�̭��ƭȬ���");
			for(int i=0;i<top;i++){
				printf("%d,",buffer[i]);
			}
			printf("\n");
		}
		else if(x>4)printf("��ܿ��~!�A�դ@��!");
	}
	return 1;
} 
int push(int buffer[20],int value,int&top){
	if(top==20)return-1;
	buffer[top]=value;
	top++;
	return 1;
}
int pull(int buffer[20],int value,int&top){
	if(top==0)return-1;
	top--;
	value = buffer[top];
	return 1;
}
