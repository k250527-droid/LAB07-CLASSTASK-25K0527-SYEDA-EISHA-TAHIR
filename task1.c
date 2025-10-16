#include<stdio.h>

int main(){
	int num[5], i;
	
	printf("Enter numbers into array: ");
	for (i=0; i<5; i++){
		scanf("%d", &num[i]);
	}
	
	int last = num[4];
	for (i=4; i>0; i--){
		num[i]=num[i-1];
	}
	num[0]=last;
	
	for (i=0; i<5; i++){
		printf("%d",num[i]);
	}
	printf("\n");
	
	return 0;
}