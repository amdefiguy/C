#include<stdio.h>

int main()
{
	  int i,sum=0;
	  int numbers[6];
	  float mean;

	  printf("Please key in the numbers\n");
	    
     scanf("%d",&numbers[i]);
       for(i=0;i<6;++i)
	   {
	   
     sum+=numbers[i];
     }
     mean=sum/6;
	    

    printf("The sum of all the elements is:%d\n",sum);
    printf("The mean of all the elements is:%d\n",mean);
    return 0;
}

