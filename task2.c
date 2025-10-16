#include<stdio.h>

int main(){
	int i;
	int size[10];
	
	printf("Enter numbers: ");
	for (i=0; i<10; i++){
		scanf("%d", &size[i]);
	}
	int num, count=0;
	printf("Enter number to be searched: ");
	scanf("%d", &num);
	for (i=0; i<10; i++){
		if (size[i]==num){
			count++;
		}
	}
	if (count>0){
		printf("%d occured %d times.", num, count);
	}
	else {
		printf("Number not found.");
	}
	
	return 0;
}