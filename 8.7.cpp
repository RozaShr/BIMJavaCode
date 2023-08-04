//take 2 strings input from the user and compare if the entered
//string are identical or not. if identical then print"wonderful" otherwise "what a disaster"
#include<stdio.h>
#include<string.h>
int main(){
	char str1[50], str2[50];
	int result;
	printf("enter first string:");
	scanf("%s",str1);
	printf("\nEnter second string:");
	scanf("%s",str2);
	result=strcmp(str1,str2);
	if(result==0){
		printf("Wonderful");
	}else{
		printf("what a disaster");
	}
	printf("\nRoza Shrestha\tRollno.22\tBIM");
	return 0;
	}
