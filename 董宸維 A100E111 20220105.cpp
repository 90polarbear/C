

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define NUM 5 //�w�N�}�C�j�p 
struct student//�W�٬�student�����c
{
    char name[8];//�̦h���8�Ӧr�� 
    float month;//�B�I�� 
    int date;//��� 
    float BMI; 
};
   
int main()
{
    struct student who[NUM];//�ŧi�}�C���c 
    char Key;
	int i;
	int cnt_recorder;
    int total;
    float Average;
    //��J�n�p�⪺���
	printf("�п�J�ӤH���....\n\n");
    for (i=0; i<NUM; i++) {//[NUM]�]���W�����i�}�C�j�p�O2�ҥH�L�|�]�⦸ 
       printf("��%d�� :\n",i+1);
       
       printf("    �п�J�m�W ");
       scanf("%s", who[i].name);//%s �r�� %s�����O���V�ҥH���Υ[& who[i].name�q�W�������c�̮��U�� 
       
       printf("    �п�J��� ");
       scanf("%f", &who[i].month);//%f ���B�I�� 
       
       printf("    �п�J��� ");
       scanf("%d", &who[i].date);//%d ��� 
       
       printf("    �p�G�ٻݭn��J�Юץ��N�䤣�ݭn�Ы�0\n");
       Key=getch();//���o���N�䤣��u���g getch() Enter�|��������ҥH�n�}�O����Ŷ����L 
       cnt_recorder=i;
       if(Key=='0')//getch()���쪺�ȬO�r�� 
	   {
	   	break;
	   }
    }
    //��ܿ�J���G 
    printf("\n�A��J�����G ...\n\n");
    printf("            �W�r     ���     �P�y    �ۥ��t�� ");
    printf("\n\n");
    
    for (i = 0; i<=cnt_recorder; i++) {
       printf("    #%d",i+1);
       printf("    %8s   ",who[i].name);
       //printf("    %5f %8d",who[i].Height,who[i].weight);
       //who[i].BMI=who[i].weight/(who[i].Height*who[i].Height) ;
       //printf("    %5f   ",who[i].BMI);
       //printf("\n");
    }
   /* //�p��BMI�`�� 
    for (i=0,total=0; i<NUM; i++)
 {
        total += who[i].BMI;     
 }    
 	//�p��BMI������ 
   Average=  total/2;
    printf("\n   Average BMI : %f \n",Average);
    
    system("PAUSE");*/
    return 0;
}
