/******************************************************************************/
/*****************************************************************************/
/*                   ���f��  A100E111  2021/12/01                           */
/***************************************************************************/
#include <stdio.h>
void Inverted_Left();
void Left_Triangle();
void Inverted_Right_Triangle();
void Right_Triangle();
void Equilateral();
void Inverted_Equilateral();
void Main_Import();

int main()
{
    Main_Import();
    return 0;
}
void Main_Import()
{
    int MainID = 0;
    while(1)
    {
        printf("\n�аݱz�n���@�اΪ�\n1.���T����\n2.�˥��T����\n3.�k�����T����\n4.�˥k�����T����\n5.�������T����\n6.�˥������T����\n7.�٧�\n0.���}\n");
        scanf("%d",&MainID);
        switch(MainID)
        {
            case 0:
                break;
            case 1:
                Equilateral();
                break;
            case 2:
                Inverted_Equilateral();
                break;
            case 3:
                Right_Triangle();
                break;
            case 4:
                Inverted_Right_Triangle();
                break;
            case 5:
                Left_Triangle();
                break;
            case 6:
                Inverted_Left();
                break;
            case 7:
                Equilateral();
                Inverted_Equilateral();
                break;
            default :
                printf("  ��J���~!!  ");
                break;
        }
        if(MainID==0)
        {
        	printf("�w���}"); 
            break;
        }
    }
}
void Inverted_Equilateral()//�˥��T����
{
    int cnt1;
    int cnt2;
    int Max_White=8;
    char Mark1=' ';
    char Mark2='*';
    for(cnt1=0;cnt1<=Max_White;cnt1++) 
    {
        for(cnt2=0;cnt2<=cnt1;cnt2++)
        {
            printf("%c",Mark1);
        }   
        for(cnt2=(Max_White-cnt1)*2-1;cnt2>0;cnt2--) 
        {
            printf("%c",Mark2);
        }
        printf("\n");
    }
}
void Equilateral()//���T����
{
    int cnt1;
    int cnt2;
    int Max_White=9;
    char Mark1=' ';
    char Mark2='*';
    for(cnt1=Max_White;cnt1>0;cnt1--) 
    {
        for(cnt2=0;cnt2<cnt1;cnt2++)
        {
            printf("%c",Mark1);
        }   
        for(cnt2=(Max_White-cnt1)*2-1;cnt2>0;cnt2--) 
        {
            printf("%c",Mark2);
        }  
        printf("\n");
    }
}
void Right_Triangle()//�k�����T����
{
    int cnt1;
	int cnt2;
	int Max_White = 8;
	char Mark1 = ' ';
	char Mark2 = '*';
	for(cnt1 = 7 ; cnt1 >= 0 ; cnt1--)
	{
		printf("\n");
		for(cnt2 = 0 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark1);
		}
		for(cnt2 = Max_White-cnt1 ; cnt2>0 ; cnt2--)
		{
			printf("%c",Mark2);
		}
	} 
}
void Inverted_Right_Triangle()//�˥k�����T����
{
    int cnt1;
	int cnt2;
	int Max_White = 7;
	char Mark1 = ' ';
	char Mark2 = '*';
	for(cnt1 = 0 ; cnt1 <= Max_White ; cnt1++)
	{
	    printf("\n");
		for(cnt2 = 0 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark1);
		}
		for(cnt2 = 8 ; cnt2>cnt1 ; cnt2--)
		{
			printf("%c",Mark2);
		}
	}
}
void Left_Triangle()//�������T����
{
    int cnt1;
	int cnt2;
	int Max_White = 7;
	char Mark2 = '*';
	for(cnt1 = 0 ; cnt1 <= Max_White ; cnt1++)
	{
	    printf("\n");
		for(cnt2 = 0 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark2);
		}
	}  
}
void Inverted_Left()//�˥������T����
{
    int cnt1;
	int cnt2;
	char Mark2 = '*';
	for(cnt1 = 8 ; cnt1 > 0 ; cnt1--)
	{
		printf("\n");
		for(cnt2 = 1 ; cnt2<=cnt1 ; cnt2++)
		{
			printf("%c",Mark2);
		}
	} 	
}

