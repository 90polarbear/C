#include"stdio.h"//stdio.h�ɦW 
#include"stdlib.h"
int main(void)  
{
	int x = 10;
	int y = 20;
	int *p = &x;//*���� �ҥH*p=��ƫ��A���O�����m ,���V&x���O�����m 
	int *q = &y;
	printf("x���Ȭ�:%d\n",x);
	printf("x����}��:%d\n",&x);//&x�O���骺��m 
	printf("y���Ȭ�:%d\n",y);
	printf("y����}��:%d\n",&y);
	printf("p���Ȭ�:%d\n",p);
	printf("p����}��:%d\n",&p);
	printf("q���Ȭ�:%d\n",q);
	printf("q����}��:%d\n",&q);
	return 0;
} 
