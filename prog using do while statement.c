#include <stdio.h>
int main()
{
	int num=1,remainder=0;
	do
	{
		printf("Enter a number:");
		scanf("%d",&num);
		if(num!=0)
		{
			remainder=num%2;
			if(remainder==0)
			printf("Number entered is even\n");
		}
	}
while(num!=0);
return 0;
}
