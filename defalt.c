#include<stdio.h>
int main(){
	int num1,num2;
		char oper;
			printf("key in a number:\n");
			scanf("%d",&num1);
		    printf("key in another number:\n");
			scanf("%d",&num2);
			printf("key in an arithemethic operator ie +, -, /, * or % :\n");
			scanf("%c",&oper);
				scanf("%c",&oper);
			
			switch(oper){
				case'+':printf("you choose addittion,sum is :%d",num1+num2);
					break;
				
				case'*':printf("you choose multiplication,product is: %d",num1*num2);
					break;
				
				case'-':printf("you choose minus;\n");
				if(num1<num2){
					printf("result is negative!%d",num1-num2);
				}
				else
				{printf("the remainder is:%d",num1-num2);
				
					break;
				}
				case'/':printf("you choose division:\n ");
				if(num2<num2){
					printf("result is a fraction !%f",num1/num2);
				}
					else{printf("result is :%d",num1-num2);}
					break;
					
					case'%':
					printf("you choose modulus:\n");
					if(num1<num2){
						printf("result is :0");}
						else{printf("result is: %d",num1% num2);
						}
						
					
						break;
					
						default:
						printf("wrong operator!\n");
					
				
				return 0;
			}}
