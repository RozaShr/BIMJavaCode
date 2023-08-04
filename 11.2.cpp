//11.2
#include<stdio.h>
int main(){
	char ch;
	int i;
	char character[40];
	FILE * fptr1 = fopen("open.txt","r");
	FILE * fptr2 = fopen("doc.txt","w");
	if(fptr1 == NULL){
	    printf("No File:\n");
	}
	 // Read each character from "PUP.txt" and write it to "CAT.dat"
	 while ((ch = fgetc(fptr1)) != EOF) {
        fputc(ch, fptr2);
    }
	fclose(fptr1);
	fclose(fptr2);
	// Print a message indicating that the file was copied successfully
	printf("Copy pasted sucessfully");
	return 0;
}
