#include "stdio.h"
#include "stdlib.h"  

int main(){
	int a[10];
	for(int i=0;i<10;i++){
		printf("�п�J�� %d �Ӽ�: ", i+1); 
		scanf("%d",&a[i]);
	}
	
	printf("�z��J���Ƭ�: "); 
	for(int i=0;i<10;i++){
		printf(" %d,",a[i]); 
	}
	printf("\n"); 
	int top=0, x=0, temp=0;
	for(int j=0; j<10; j++){
		for(int i=j;i<10;i++){
			if(top<a[i]){+ 
				top=a[i];
				x=i;
			}
		}
		temp=a[j];
		a[j]=a[x];
		a[x]=temp;	
	}
	
	printf("�Ƨǫ᪺�Ƭ�: "); 
	for(int i=0;i<10;i++){
		printf(" %d,",a[i]); 
	}
	printf("\n"); 	

	return 0;
}

