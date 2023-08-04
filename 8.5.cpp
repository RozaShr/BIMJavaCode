//count the total number of words in a string entered by the user.
#include<stdio.h>
int main(){
	char str[100];
	int i, words=1; //assume that the sentence has at least one word
	printf("enter a sentence");
	fgets(str, 100, stdin);
	//loop through the sentences and count the number of words
	for(i=0; str[i]!='\0';i++)
	{
		//check if the current character is a space, tab or newline
		if(str[i] == ' '|| str[i] == '\t'|| str[i] == '\n')
		{
			words ++;
		}
	}
	printf("total words =%d\n",words);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 8.5");
		return 0;
}