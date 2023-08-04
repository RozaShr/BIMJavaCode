//program that illustrate different types of strings.
/*#include<stdio.h>
#include<string.h>
int main(){
//for strlen handling
	char a[20];
	long int n;
	printf ("enter string for strlen:");
	scanf("%s", a);
	n= strlen(a);
	printf("length is %d\n",n);
//for strcyp handling
    char b[20], c[20];
	printf("\n\nEnter string for strcpy:");
	scanf("%s",c);
	strcpy(b,c);
	printf("copied string is %s",b);
// for strcat handling
    char d[20],e[20];
	printf("\n\nEnter string for stract:\n");
	scanf("%s%s",d,e);
	strcat(d,e);
	printf("concated string is %s",d);
// for strcmp handling
    char f[20], g[20];
    int x;
    printf("\n\nEnter string for strcmp:\n");
    scanf("%s%s",f,g);
    x=strcmp(f,g);
    if(x==0){
    	printf("compared string is same\n");
	}else{
		printf("compared string is not same\n");
	}
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.1");
	return 0;
}*/

//Program that illustrates different components of user define function
/*#include<stdio.h>
int sub(int a, int b);
int main()
{
	int num1, num2, result;
	//take input from the user for two numbers
	printf("Enter two numbers:");
	scanf("%d %d",&num1, &num2);
	//call the function and store the result in a variable
	result= sub(num1, num2);
	//display the result to the result to the user
	printf("the sub of %d and %d is %d\n",num1,num2, result);
	printf("\n\nName:Roza Shrestha\tRollno:22\tlab 7.2");
	return 0;
}
int sub(int a, int b)
{
	int sub= a-b;
	return sub;
}*/
//program that demosntrates the different types of functions on the basis of argument and return types.
#include<stdio.h>
//function with no argument and no return value
void print_hello()
{
	printf("Hello\n");
}
//function with argument but no return value
void print_name( char name[])
{
	printf("name: %s\n", name);
}
//function with no argument but return value
int get_random_number()
{
	return 0;
}
//function with argument and return value
int add_numbers(int a,int b)
{
	return a+b;
}
int main(){
	char name[20];
	int a, b, sum, random_number;
	//call the function with no argument and no return value
	print_hello();
	//take input from the user for a name and call the function with argument but no return value
	printf("Enter your name:");
	scanf("%s", name);
	print_name(name);
	//call the function with no argument but return value
	random_number= get_random_number();
	printf("Random number:%d\n", random_number);
	//take input from the user for two number, call the funcion with argument and return value, and display the result
	printf("Enter two numbers:");
	scanf("%d %d",&a, &b);
	sum= add_numbers(a,b);
	printf("sum of %d:%d\n", a, b, sum);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.3");
	return 0;
}
z
