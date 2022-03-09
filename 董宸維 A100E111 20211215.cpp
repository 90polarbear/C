/******************************************************************************/
/*****************************************************************************/
/*                   ���f��  A100E111  2021/12/15                           */
/***************************************************************************/
#include <stdio.h>
#define MAX_LENGTH 100//�w�q���� 
#define NUM_STRINGS 9//�w�q��� 
#define NUM_STRINGS1 10
void Inverted_Left();
void Left_Triangle();
void Inverted_Right_Triangle();
void Right_Triangle();
void Equilateral();
void Inverted_Equilateral();
void Main_Import();
char arr[NUM_STRINGS][MAX_LENGTH]={
    {"�аݱz�n���@�اΪ�\n"},
    {"1.���T����\n"},
    {"2.�˥��T����\n"},
    {"3.�k�����T����\n"},
    {"4.�˥k�����T����\n"},
    {"5.�������T����\n"},
    {"6.�˥������T����\n"},
    {"7.�٧�\n"},
    {"0.���}\n"}
};
char arr1[NUM_STRINGS1][MAX_LENGTH]={
    {"��J���~!\n"},
    {"�w���}\n"}
};
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
        for (int i = 0; i < NUM_STRINGS; ++i) {//��for�j��L�}�C 
        printf("%s", arr[i]);//%s�r�� 
    	}
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
                printf("%s",arr1[0]);
                break;
        }
        if(MainID==0)
        {
        	printf("%s",arr1[1]); 
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

