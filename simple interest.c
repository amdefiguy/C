#include<stdio.h>
int main()
{
	float p,r,t,si,ci;
	
	printf("\n enter principle:");
	scanf("%f",&p);
	
	printf("\n enter rate:");
	scanf("%f",&r);
	
	printf("\n enter time:");
	scanf("%f",&t);
	
	si=(p*r*t)/100;
	printf("\n simple interest=%f",si);
	
	ci=p*( pow((1 + r / 100),t) - 1);
	printf("\ncompound interest=%f",ci);

	return 0;
}
