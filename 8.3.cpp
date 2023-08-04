//demonstrate the use of variables string handling functions such as strlen(),sttrev(),strcat(),strlwr(),strup().
//also use gets() and PUts() to take string input from the user and print string to the console
#include<stdio.h>
#include<string.h>
int main(){
	char str1[100], str2[100], str3[100];
	int length, result;
	//using gets() function to take string input from user
	printf("enter a string:");
	gets(str1);
	//using strlen()function
	strcpy(str2,str1);
	printf("the length of the string is %d.\n",length);
	//using strcmp() function
	printf("enter another string:");
	gets(str3);
	result= strcmp(str1,str3);
	if (result == 0)
	{
		printf("the two string are the same.\n");
	}
	else if(result < 0)
	{
	printf("the first stringis less than the second string.\n");
} else { 
printf("the first string is greater than the second string.\n");
}
//using strcat() function
strcat(str1, str3);
printf("the concatenated string is %s.\n",str1);
//using strlwr() function to
printf("The lowercase string is %s.\n", strlwr(str2));
//using strupr() function to
printf("the uppercase string is %s.\n", strupr(str3));
//using puts() function to print a string to the console
puts("this is demonstrating string.");
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 8.3");
	return 0;
}