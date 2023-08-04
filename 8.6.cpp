//count the total number of uppercase and lowercase character in th string entered by the user.
#include<stdio.h>
#include<ctype.h>
int main()
{ 
char str[100];
int i, uppercase = 0, lowercase = 0;
printf("Enter a string:");
fgets(str,100,stdin);
//loop through the string and count the number of uppercase and lowercase characters
for (i= 0; str[i]!= '\0'; i++)
{
	if(isupper(str[i]))
	{
		uppercase++;
	}else if (islower(str[i]))
	{
		lowercase++;
	}
}
printf("Total Uppercase Characters = %d\n", uppercase);
printf("Total Lowercase Characters = %d\n", lowercase);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 8.6");
	return 0;
}