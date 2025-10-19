#include<stdio.h>

int main(){
	char str[50];
	int vowel=0, consonent=0, i;
	
	printf("Enter word: ");
	scanf("%s", &str);
	
	while (str[i]!='\0'){
		char letter=str[i];
		if (letter>='A'&& letter<='Z' || letter>='a' && letter<='z'){
			if (letter>='A'&& letter<='Z'){
				letter=letter+32;
			}
			if (letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'){
				vowel++;
			}
			else {
				consonent++;
			}
		}
		i++;
	}
	printf("Number of vowels are:%d\n", vowel);
	printf("Number of consonents are:%d\n", consonent);
	
	return 0;
}
