/******************************************************************************/
/*****************************************************************************/
/*                   ���f��  A100E111  2021/12/29                           */
/***************************************************************************/
#include <stdio.h>
#include <stdlib.h>
enum STATE{
    RUNNING = 49,    //'1' 
    STOPPED = 50,  //'2' 
    FAILED = 51,  //'3' 
    HIBERNATING = 52,//'4' 
    WARM_UP =53   //'5' 
};

int main(void) {
     int input1;
    
    printf("RUNNING = %d\n",RUNNING);
    printf("STOPPED = %d\n",STOPPED);
    printf("FAILED = %d\n",FAILED);
    printf("HIBERNATING = %d\n",HIBERNATING);
    printf("WARM_UP = %d\n",WARM_UP);
    
    while(1)
	 {
		if(input1 !=10)//������Enter���ɭԤ~�|�i�� 
		{
  			printf("�п�J[1-5]: ");
  		}
	  	input1 = getchar();//�w�İ� ���F�o�ӴN���� ��scanf("%d",&input1)�F 
	  	switch(input1)
	  	{      
	  	case  RUNNING://�B�椤 
	    	printf("�B�椤\n");
	    	break;
	   	case  STOPPED://���� 
	    	printf("����\n");
	    	break;
	   	case  FAILED://���� 
	    	printf("����\n");
	    	break;
	   	case WARM_UP://����
	   	case  HIBERNATING://�ݾ� 
	    	printf("�ݾ� �� ���� \n");
	    	break;
	   	case 10://Enter�䤣�|�z�| 
	     	break;
	   	default:
	    	printf("�ڬݤ�����!!!�T�T");
	        return 0;     
		} 
		if(input1 !=10)//������Enter���ɭԤ~�|�i�� 
		{
			system("pause");//�Ȱ���U���O�@�˪� 
							//getch();��cin.get();
		}
	  
	 }


    return 0;
}
