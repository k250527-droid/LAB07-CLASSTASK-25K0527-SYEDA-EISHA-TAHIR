#include<stdio.h>

int main(){
	int array[10], i;
	int largest, smallest;
	printf("Enter numbers into array:\n");
	for (i=0; i<10; i++){
		scanf("%d", &array[i]);
	}
	
	largest = array[0];
	smallest = array[0];
	for (i=0; i<10; i++){
		if (array[i]>largest){
			largest=array[i];
		}
		if (array[i]<smallest){
			smallest=array[i];
		}
	}
	
	int difference = largest-smallest;
	printf("Difference is %d\n", difference);
	
	
	return 0;
}