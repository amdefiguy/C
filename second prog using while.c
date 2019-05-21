#include <stdio.h>
int main()
{
	int num=1,remainder=0;
	while(num!=0)
	{printf("enter a number:");
	scanf("%d",&num);
	if(num!=0)
	{
		remainder=num%2;
		if(remainder==0)
		printf("number entered is even\n");
	}
	}
	return 0;
	
}
