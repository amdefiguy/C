#include<stdio.h>
int main()
{
	float p,r,t,ci;
	
	printf("\n enter principle:");
	scanf("%f",&p);
	
	printf("\n enter rate:");
	scanf("%f",&r);
	
	printf("\n enter time:");
	scanf("%f",&t);
	
	ci=p*( pow((1 + r / 100),t) - 1);
	printf("\compound interest=%f",ci);

	return 0;
}

