#include <stdio.h>
int main(){
	int numbers[8]={27,64,19,22,87,12,17,52};
	int i;
	int largest=0;
	for(i=0;i<8;i++){
		if(numbers[i]>largest){
			largest=numbers[i];
			
		}
	}
printf("The largest element in the Array is:%d\n",largest);
	return 0;
}
