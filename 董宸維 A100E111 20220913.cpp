#include"stdio.h"//stdio.h�ɦW 
#include"stdlib.h"
int main(void)
//int = 4byte ,long = 4byte ,double = 8byte ,short = 2byte ,char = 1byte char�r�� ,float = 4byte float�B�I��  
{
	float x=10.9, y=20.3;
	float A[10];
	printf("x���Ȭ�:%f\n",x);
	printf("y���Ȭ�:%f\n",y);
	printf("x����}��:%d\n",&x);//&x�O���骺��m 
	printf("y����}��:%d\n",&y);
	for(int i=0; i<10; i++)
	{
		printf("�}�CA[%d]����}��:%d\n",i,&A[i]);
	}
	return 0;
} 
/*
int main(void)
{
	int A[3][3];
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			printf("�}�CA[%d][%d]����}��:%d",i,j,&A[i][j]);
		}
		printf("\n");
	}
	int A[50][50];
	�w��&A[8][7]����}=1000
	�D&A[22][33]���O�����}
	���1000+4*{(22-8)*50+(33-7)} = 3904 
	int A[20][30];
	�w��&A[12][15]����}=6000
	�D&A[18][11]���O�����}
	�D&A[4][15]���O�����}
	6000+8*{(18-12)*30+(11-15)}=7408 
	6000+8*{(4-12)*30+(18-15)}=4104 
	int A[6][7][8];
	�w��&A[4][3][2]����}=5000
	�D&A[2][3][4]���O�����}
	�D&A[5][4][3]���O�����}
	5000+4*{(2-4)*7*8+(3-3)*8+(4-2)}=4560
	5000+4*{(5-4)*7*8+(4-3)*8+(3-2)}=5260
	return 0;
}
 
int main(void)
{
	int A[30];
	A[0]=0;
	A[1]=1;
	for(int i=0; i<28; i++)
	{
		A[i+2]=A[i]+A[i+1];
	}
	printf("�O��ƦC�a�e30�Ӫ��Ƭ�: ");
	for(int i=0;i<30; i++)
	{
		printf("%d,",A[i]);
	} 
	return 0;
} 
*/
