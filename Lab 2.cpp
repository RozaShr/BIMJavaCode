//demonstrate the use of typedef keyword
/*#include<stdio.h>
typedef int num;
int main (){ //here int is used normally
	num n; // int is declared with type c
	n=10;
	printf("%d",n);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.1");
	return 0;
}*/
//Demonstrate implicit type conversion
/*#include<stdio.h>
int main(){
	float a = 1.1;
	int b = 1+a;
	printf("%d",b);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.2");
	return 0;
}*/
//Demonstrate explicit type conversion.
/*#include<stdio.h>
int main(){
	float a= 1.23;
	int b = (int) a+3;
	printf("%d",b);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.3");
	return 0;
}*/
//illustrate the use of getchar() and putchar() functions.
/*#include<stdio.h>
int main(){
	char c;
	c = getchar();
	putchar(c);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.4");
	return 0;
}*/
//illustrate the use of getch(), getche() and putch() function.
/*#include<stdio.h>
#include<conio.h>
int main (){
char alphabet_1, alphabet_2
printf("Enter alphabet_1\n");
alphabet 1 = getch()
printf("The alphabet_1 is :\t");
putch(alphabet 1);
printf("The alphabet_2 is:\t");
putch(alphabet 2);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.5");
return 0;
}*/
//illustrate relational operators.
/*#include<stdio.h>
#include<conio.h>
int main()
{
	int num1 = 30;
	int num2 = 40;
	printf("value of %d> %d is %d", num1, num2, num1> num2);
	printf("value of %d>= %d is %d", num1, num2, num1>= num2);
	printf("value of %d<= %d is %d",num1, num2, num1<=num2);
	printf("value of %d< %d is %d", num1, num2, num1< num2);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.6");
	return 0;
}*/
//illustrate logical operators.
/*#include<Stdio.h>
int main()
{
	int a=5;
	int b=20;
	int c;
	if(a&&b){
		printf("line 1- condition is true\n");
		} if (a||b){
			printf("line 2-condition is true\n");
		}
		//lets change the value of a and b
		a = 0;
		b = 10;
		if (a&&b){
			printf("line 3- Condition is true\n");
		}else {
			printf("line 3- condition is not true\n");
			} if (!(a&&b)){
				printf("line 4- condition is true\n");
			}
				printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.7");
				return 0;
}*/
//illustrate bitwise operator.
#include<stdio.h>
int main(){
	int x='7', y='8', and , or, xor;
	and = x & y;
	or = x|y;
	xor= x^y;
	printf ("%d AND %d= %d\n",x,y,and);
	printf("%d OR %d = %d\n",x,y, or);
	printf("%d XOR %d = %d\n",x,y, xor);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 2.8");
	return 0;
}










































































