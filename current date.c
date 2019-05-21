#include <stdio.h>
int main(){
	int catmarks[6];
	int i;
	int largest=0;
	printf("Key in the elements of the array:\n");
	for (i=0;i<6;i++){
		if(catmarks[i]>largest){
			largest=catmarks[i];
	}

			scanf("%d\n",&catmarks[i]);
		}
		printf("The largest element is:%d\n",catmarks[i]);



	return 0;
}
