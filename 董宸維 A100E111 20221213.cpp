#include "stdio.h"
#include "stdlib.h"  
//��w���g�k 
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
	int x=0;
	printf("\n"); 
	for(int j=10; j>0; j--){
		for(int i=0;i<j;i++){
			if(a[i]<a[i+1]){
				x=a[i];
				a[i]=a[i+1];
				a[i+1]=x; 
			}
		} 
	}
	
	printf("�Ƨǫ᪺�Ƭ�: "); 
	for(int i=0;i<10;i++){
		printf(" %d,",a[i]); 
	}
	//printf(" %d,",a[0]);
	printf("\n"); 	

	return 0;
} 
