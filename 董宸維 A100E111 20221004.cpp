#include"stdio.h"
#include"stdlib.h"
int main(){
int name[10];
	printf("�п�J�A���W�r:");
	scanf("%s",name);
	printf("�A���W�r�O:%s",name);
return 0;
}






/*
int main(){
int A[10];
int B;
for(int i=0;i<10;i++){
	printf("�п�JA[%d]����:",i);
	scanf("%d",&A[i]);
	
}
for(int i=0;i<10;i++){
	printf("A[%d]����=%d\n",i,A[i]);
	B+= A[i];
  	//B=B+A[i];//��Ӭ۳q 
}
printf("�`�M=%d\n",B);
return 0;

}



	
/*
int main(){
int A[10];

for(int i=0;i<10;i++){
	printf("�п�JA[%d]����:",i);
	scanf("%d",&A[i]);
}
for(int i=0;i<10;i++){
	printf("A[%d]����=%d\n",i,A[i]);
}
return 0;

}



/*
int main(){

int A[10];
A[0]=1;
printf("0!=%d\n",A[0]);
for(int i=1;i<10;i++){
	A[i]=A[i-1]*i;
	printf("%d!=%d\n",i,A[i]);
}
return 0;

}*/
