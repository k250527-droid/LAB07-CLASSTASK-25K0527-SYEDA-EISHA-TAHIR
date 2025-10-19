#include<stdio.h>

int main(){
	int id[10], i, j, mark[10]={0};
	
	printf("Enter id: ");
	for (i=0; i<10; i++){
		scanf("%d", &id[i]);
		if (mark[id[i]]==0){
			mark[id[i]]=1;
		}
		else {
			id[i]=-1;
		}
	}
	printf("New array:\n");
	for (i=0; i<10; i++){
		printf("%d ", id[i]);
	}
	
	return 0;
}
