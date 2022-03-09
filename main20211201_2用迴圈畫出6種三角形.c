/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void Paint_RightTriangle();         //�ΰj��L�X�����T����(�k)
void Paint_InvertedRightriangle();  //�ΰj��L�X�˪����T����(�k)
void Paint_LeftTriangle();          //�ΰj��L�X�����T����(��)
void Paint_InvertedLeftTriangle();  //�ΰj��L�X�˪����T����(��)
void Paint_InvertedTriangle();      //�ΰj��L�X�ˤT����
void Paint_EquilateralTriangle();   //�ΰj��L�X���T����
int main()
{
    printf("2021/12/01 Demo");
    
    Paint_RightTriangle();       //1
    Paint_InvertedRightriangle();//2
    Paint_InvertedLeftTriangle();//3
    Paint_LeftTriangle();        //4
    
    Paint_EquilateralTriangle(); //5
    Paint_InvertedTriangle();    //6
    return 0;
}
//�ΰj��L�X���T����
void Paint_EquilateralTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Inverted Left Triangle \r\n");//�L�X���D
        for(cnt1=MaxWidth;cnt1>0;cnt1--) 
        {
            for(cnt2=0;cnt2<cnt1;cnt2++) //�e�X�ťճ���
            {
                printf("%c",Mark1);
            }   
             for(cnt2=(MaxWidth-cnt1)*2-1;cnt2>0;cnt2--) //���X���鳡��
            {
                printf("%c",Mark2);
            }  
            printf("\r\n");
        }
}
//�ΰj��L�X�ˤT����
void Paint_InvertedTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Left Triangle \r\n");//�L�X���D
        for(cnt1=0;cnt1<MaxWidth;cnt1++) 
        {
            for(cnt2=0;cnt2<=cnt1;cnt2++) //�e�X�ťճ���
            {
                printf("%c",Mark1);
            }
            for(cnt2=(MaxWidth-cnt1)*2-1;cnt2>0;cnt2--) //���X���鳡��
            {
                printf("%c",Mark2);
            }   
            printf("\r\n");
        }
}
//�ΰj��L�X�˪����T����(��)
void Paint_LeftTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Left Triangle \r\n");//�L�X���D
        for(cnt1=0;cnt1<MaxWidth;cnt1++) 
        {
            for(cnt2=0;cnt2<=cnt1;cnt2++) //�e�X�ťճ���
            {
                printf("%c",Mark1);
            }
            for(cnt2=MaxWidth-cnt1;cnt2>0;cnt2--) //���X���鳡��
            {
                printf("%c",Mark2);
            }   
            printf("\r\n");
        }
}
//�ΰj��L�X�˪����T����(��)
void Paint_InvertedLeftTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark1=' ';
        char Mark2='*';
        printf("Go!Paint Inverted Left Triangle \r\n");//�L�X���D
        for(cnt1=MaxWidth;cnt1>0;cnt1--) 
        {
            for(cnt2=0;cnt2<cnt1;cnt2++) //�e�X�ťճ���
            {
                printf("%c",Mark1);
            }   
             for(cnt2=MaxWidth-cnt1;cnt2>0;cnt2--) //���X���鳡��
            {
                printf("%c",Mark2);
            }  
            printf("\r\n");
        }
}
//�ΰj��L�X�����T����(�k)
void Paint_RightTriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark='*';
        printf("Go!Paint Right Triangle \r\n");//�L�X���D
        for(cnt1=0;cnt1<MaxWidth;cnt1++) 
        {
            for(cnt2=0;cnt2<=cnt1;cnt2++) 
            {
                printf("%c",Mark);
            }   
            printf("\r\n");
        }
}
//�ΰj��L�X�˪����T����(�k)
void Paint_InvertedRightriangle()
{
        int cnt1;
        int cnt2;
        int MaxWidth=5;
        char Mark='*';
        printf("Go!Paint Inverted Right Triangle \r\n");//�L�X���D
        for(cnt1=MaxWidth;cnt1>0;cnt1--) 
        {
            for(cnt2=0;cnt2<cnt1;cnt2++) 
            {
                printf("%c",Mark);
            }   
            printf("\r\n");
        }
}
