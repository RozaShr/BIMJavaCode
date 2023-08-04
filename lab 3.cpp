//find the greatest among two numbers
/*#include<stdio.h>
int main()
{
	int num1, num2;
	printf("enter num1, num2 \n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		printf("%d is greater", num1);
	}
	else{
		printf("%d is greater", num2);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.1");
		return 0;
}*/
//check if the entered integer is positive or negative.
/*#include<stdio.h>
int main(){
	int a;
	printf("enter integer a\n");
	scanf("%d",&a);
	if(a>0){
		printf("%d is positive number",a);
	}else if (a<0){
		printf("%d is negative number",a);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.2");
		return 0;
}*/
//find if the entered character is vowel or constant
/*#include<stdio.h>
int main(){
	char ch;
	//input character from user
	printf("enter any character:");
	scanf("%c",&ch);
	//condition for vowel
	if(ch=='a'|| ch=='e'||ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='0'|| ch=='U'){
		printf("%c is vowel", ch);
	}else if((ch>='a'&& ch<='z')|| (ch>='A'&& ch<='Z')){
		//condition for constant
		printf("%c is consonant",ch);
	}else{ // it is neither vowel noe consonant, not alphabet
	printf("%c is not alphabet", ch);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.3");
		return 0;
	}*/
//find if the entered character is uppercase,lowercase, digit or special character
/*#include<stdio.h>
int main(){
	char ch;
	printf("Enter any character\n");
	scanf("%c",&ch);
	if (ch>='A'&& ch<='Z'){
		printf("\n the entered character is uppercase");
	}else if (ch>='a'&& ch<='z'){
		printf("\n the entered character is lowercase");
	}else if(ch>='0'&& ch<='9'){
		printf("\n the entered character is digit");
	}else{
		printf("\n the enterred character is special character");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.4");
		return 0;
	}*/
//check if the number is odd, or even
/*#include<stdio.h>
int main(){
	int n;
	printf("enter any number\n");
	scanf("%d",&n);
	if(n%2==0){
		printf("\n the entered number is even");
	}else{
		printf("\n the entered number is odd");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.5");
	return 0;
}*/
//find the smallest numbers between three numbers
/*#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter valur for the numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b && a<c){
		printf("the number %d is smallest",a);
	}else if (b<a && b<c){
		printf("the number %d is smallest",b);
	}else{
		printf("the number %d is smallest",c);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.6");
		return 0;
}*/
//check if the entered year is a leap year or not.
/*#include<stdio.h>
int main(){
	int y;
	printf("YEAR\n");
	scanf("%d",&y);
	if(y%4==0){
		printf("\n the entered year is a leap year");
	}else{
		printf("\n the entered year is not a leap year");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.7");
	return 0;
}*/
// take input for 2 angles of a triangle and find the 3rd angle
/*#include<stdio.h>
int main(){
	int a1, a2, a3;
	printf("enter value for two angle of the triangle\n");
	scanf("%d %d ", &a1, &a2);
	a3= 180-(a1+a2);
	printf("\n the value for third angle is %d",a3);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.8");
		return 0;
}*/
//input angles of a triangle and check whether the trianle is valid or not.
/*#include<stdio.h>
int main(){
	int a1, a2, a3, sum;
	printf("enter value of all angle of triangle\n");
	scanf("%d %d %d",&a1, &a2, &a3);
	sum= a1+a2+a3;
	if(sum==180){
		printf("\n The triangle is valid");
	}else{
		printf("The triangle is invalid");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.9");
		return 0;
}*/
//calculate the area of 3 circles and determine the smallest and largest circle
/*#include<stdio.h>
#define PI 3.14
int  main(){
	float r1, r2, r3, area1, area2, area3;
	printf("enter radius of three circle\n");
	scanf("%f %f %f",&r1, &r2, &r3);
	area1= PI*r1*r1;
	area2= PI*r2*r2;
	area3= PI*r3*r3;
	if (area1 < area2 && area1 < area3){
		printf("\n the cirlce having radius %0.2f is smallest", r1);
	}else if(area2 < area3){
		printf("\n the circle having radius %0.2f is smallest", r2);
	}else{
		printf("\n the circle having radius %0.2f is smallest", r3);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.10");
		return 0;
}*/
//calculate average marks of 5 diff subjects and find respective grade
/*#include<stdio.h>
int main(){
	float a,b,c,d,e;
	float avg, sum;
	printf("enter marks obtained of subject a:");
	scanf("%f",&a);
	printf("enter marks obtained of subject b:");
	scanf("%f",&b);
	printf("enter marks obtained of subject c:");
	scanf("%f",&c);
	printf("Enter marks obtained of subject d:");
	scanf("%f",&d);
	printf("enter marks obtained of subject e:");
	scanf("%f",&e);
	sum= a+b+c+d+e;
	avg= sum/5;
	printf(" average\n",avg);
	if(avg>=80){
		printf("\n Grade A");
	}else if(avg= 60 && avg< 80){
		printf("\n Grade B");
	}else if(avg>=40 && avg<60){
		printf("\n Grade C");
	}else{
		printf("\n grade F");
	}
	printf("\n 55 Garde F");
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.11");
	return 0;
}*/
//calculate profit and loss
/*#include<stdio.h>
int main(){
	int SP, CP;
	printf("enter SP\n");
	scanf("%d",&SP);
	printf("enter CP\n");
	scanf("%d",&CP);
	if(SP>CP){
		printf("\nPROFIT");
	}else if (CP>SP){
		printf("\nLOSS");
	}else{
		printf("\n BREAKVEN");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.12");
		return 0;
}*/
//input week number and print week day use switch case
/*#include<stdio.h>
int main(){
	int day;
	printf("enter day number:");
	scanf("%d",&day);
	switch(day){
		case 0:
			printf("\n Sunday");
			break;
			case 1:
				printf("\n Monday");
				break;
				case 2:
					printf("\n Tuesday");
					break ;
					case 3:
						printf("\n Wednesday");
						break;
						case 4:
							printf("\n Thursday");
							break;
							case 5:
								printf("\n friday");
								break;
								case 6:
								printf("\n saturday");
								break;
								default :
									printf("\n invalid input !");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.13");
return 0;		
}*/
//check whether a number is divisible by 5 and 17 or not
/*#include<stdio.h>
int main(){
	int n;
	printf("enter any positive number\n");
	scanf("%d",&n);
	if(n%5==0 && n%17==0){
		printf("\n the number is divisible by 5 and 17");
	}else{
		printf("\n the number is not divisible by 5 and 17");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.14");
		return 0;
}*/
//check whether a triangle is equilateral, isosceles or scalene triangle
/*#include<stdio.h>
int main()
{
	int s1, s2, s3;
	printf("enter three sides of trianlge\n");
	scanf("%d %d %d",&s1,&s2,&s3);
	if(s1==s2 && s2==s3){
		printf("the triangle is equilateral triangle");
	}else if(s1==s2|| s2==s3){
		printf("the triangle is scalen triangle");
	}else{
		printf("the triangle is isosceles triangle");
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.15");
		return 0;
}*/