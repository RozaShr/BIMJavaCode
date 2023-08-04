//print your name,age and address
/*#include<stdio.h>
int main()
{
	printf("Name: Roza Shrestha\n");
	printf("Age: 18\n");
	printf("Address: Nayabazar\n");
	return 0;
}
*/
//Take an integer and display its square and cube
/*#include<stdio.h>
int main(){
	int i;
	printf("enter an interger\n");
	scanf("%d",&i);
	printf("the square of i is %d",(i*i));
	printf("the cube of i is %d",(i*i*i));
printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.2");
return 0;
}*/

//Take 2 numbers as input and display its sum. 
/*#include<stdio.h>
int main(){
	int num1,num2;
	printf("enter a number\n");
	scanf("%d",&num1);
	printf("enter a number\n");
	scanf("%d",&num2);
	printf(" the sum of two numbers is %d", (num1*num2));
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.3");
	return 0;
}*/
//print the ASCII value of the character entered by the user.
/*#include<stdio.h>
int main()
{
	char c;
	printf("enter any character\n");
	scanf("%c",&c);
	printf("the ASCII value of the given number is %d",c);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.4");
	return 0;
}*/

//Calculate the area of the cirle.
/*#include<stdio.h>
int main(){
	float r;
	printf("enter radius\n");
	scanf("%2f",&r);
	printf("the area of the circle is %2f",(3.14*r*r));
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.5");
	return 0;
}*/
//calculate the simple interest
/*#include<stdio.h>
int main(){
	int p, t, r;
	printf("enter principle\n");
	scanf("%d",&p);
	printf("enter time\n");
	scanf("%d",&t);
	printf("enter rate\n");
	scanf("%d",&r);
	printf("the simple interest=%d",(p*t*r)/100);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.6");
}*/

//take marks obtained of 5 subjects and find the total marks obtained and the percentage.
/*#include<stdio.h>
int main(){
	float FOIT, FOBM, Bmaths,English,Cprogram;
	float total, percentage;
	printf("enter marks of five subjects:\n");
	scanf("%f %f %f %f %f", &FOIT,&FOBM,&Bmaths,&English,&Cprogram);
	total=FOIT+FOBM+Bmaths+English+Cprogram;
	percentage=(total/500)*100;
	printf("total marks=%2f\n",total);
	printf("percentage=%2f\n",percentage);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.7");
		return 0;
}*/
//program to display the size of different data types
/*#include<stdio.h>
int main(){
	int int type;
	float float type;
	double double type;
	char char type;
	printf("size of int:%i bytes\n", size of(int type));
	printf("size of float:%i bytes\n", size of(float type));
	printf("size of double:%i bytes\n", size of(double type));
	printf("size of char:%i bytes\n", size of(char type));
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.8");
		return 0;
}*/
//program to convert the enterred temperature from celsius to fahrenheit
/*#include<stdio.h>
int main(){
	float f,c;
	printf("Enter the temperature in celcius\n");
	scanf("%f",&c);
	printf("the entered temperature in fahrenheit is %f",(9/5)*c+32);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.9");
	return 0;
}*/
//program to calculate the area and perimeter of a rectangle
/*#include<stdio.h>
int main()
{
	float l,b,f;
	printf("enter length\n");
	printf("%f",&l);
	printf("Enter breath\n");
	scanf("%f",&b);
	printf("The perimeter of circle is %f",(l*b));
	printf("The perimeter of circle is %f",2*(l+b));
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.10");
	return 0;
}*/
//program to calculate the circumference of a circle
/*#include<stdio.h>
int main()
{
	float r;
	printf("Enter radius\n");
	scanf("%f",&r);
	printf("The circumference of a circle is %f",(2*3.14*r));
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 1.11");
		return 0;
	}*/
//demonstrate the use of different types of comments.
#include<stdio.h>
int main(){
	//this is a single line comment.
	/*this is a multi comment*/
	return 0;
//}
