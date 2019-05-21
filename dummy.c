#include <stdio.h>
int addition(int num1,int num2){
	int sum;
	num2+=7;
	printf("Value of num1 is now :%d\n",num2);
	sum=num1+num2;
	return sum;
}
	int main(){
		int number1,number2,result;
		number1=10;
		number2=16;
		result=addition(number1,number2);
		
		printf("The value of number1 is still :%d\n",number1);
		printf("Number1+number2= :%d\n",result);
		
		return 0;

}
