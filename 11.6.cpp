//lab11.5
#include<stdio.h>

int main(){
	
	int i,whitespace=0,fullstop=0,newline=1;
	char ch[20],sen;
	printf("Enter a filename with .txt extension: ");
	gets(ch);
	// Open the file in read mode
	FILE * fptr = fopen(ch,"r");
	// Loop through the file character by character and count newlines, full stops, and whitespaces
	while(fptr){
		sen = fgetc(fptr);
		if(sen==EOF){
		 break;
		}else if(sen == ' '){
			whitespace++;
		}else if(sen == '\n'){
			newline++;
		}else if(sen == '.'){
			fullstop++;
		}
	}
		fclose(fptr);
		// Display the number of newlines, full stops, and whitespaces
	printf("Newline: %d\n",newline);
	printf("Fullstop: %d\n",fullstop);
	printf("Whitespace: %d\n",whitespace);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 11.5");
	return 0;
}