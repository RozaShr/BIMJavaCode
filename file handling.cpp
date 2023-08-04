#include<stdio.h>
int main(){
int i;
char data [50];
FILE*fptr=fopen("text2.txt","w");
printf("i am studying c programming \n");
printf("enter a line of text\n");
fgetc(data,50,stdin);
fputc(data,fptr);
fclose(fptr);
	return 0;
	
}