#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j,len, palin;
	printf("enter a string");
	scanf("%s",str);
	len= strlen(str);//to get the length of the string
	palin=1;//to assume the string is a palindrome
	for(i=0, j=len-1; i<len/2; i++, j--)
	{
	if(str[i]!= str[j])
	{
		palin=0;//if the characters dont match, the string is not palindrome
		break;
	}
	}
	if(palin)
	{
		printf("%s is a palindrome",str);
	} else {
		printf("% is not a palindrome",str);
		
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 8.2");
		return 0;;
}
