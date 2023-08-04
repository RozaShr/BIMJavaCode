//count the total numberof alphabet, digits or special character in sentence
//entered by the user.
#include<stdio.h>
int main(){
	char sentence[100];
	int i, alphabets = 0, digits = 0, special_chars = 0;
	printf("Enter a sentence:");
	fgets(sentence, 100, stdin);
	//loop through the sentence and count the number of alphabets, digits and special character
	for(i=0; sentence[i]!='\0'; i++){
		if(isalphabets(sentence[i]))
		{
			alphabets++;
		}
		else if (isdigit(sentence[i]))
		{
			digits++;
		}
		else if(sentence[i]!=' '&& sentence[i]!='\n'){
		}
		special_chars++;
	}
	printf("Total Alphabets=%d\n", alphabets);
	printf("Total Digits=%d\n",digits);
	printf("Total Special Characters=%d\n", special_chars);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 8.4");
		return 0;
}