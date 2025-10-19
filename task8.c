#include<stdio.h>

int main(){
	char str[10], after[10];
	int i;
	
	printf("Enter character: ");
	scanf("%[^A-Za-z]", str);
	scanf("%*[A-Za-z]");
	scanf("%s", after);
	printf("Non-alphabet characters are: %s\n", str);
	printf("Non-alphabet characters are: %s\n", after);
	
	return 0;
}
