//print the natural numbers from 1 to 1000
/*#include<stdio.h>
int main(){
	int i;
	for(i=1; i<=1000; i++){
		printf("%d\n",i);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.1");
		return 0;
}*/
//print all aphabets from A to z.
/*#include<stdio.h>
int main()
{
	char i;
	for(i='A'; i<='Z'; i++){
		printf("%c\n",i);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.2");
		return 0;
}*/
// print all numbers from -N to +N
/*#include<stdio.h>
int main(){
	int i, N;
	printf("enter a number for n:\n");
	scanf("%d",&N);
	//using for loop to print number from -N to N
	for (i=-N; i<=N; i++){
		printf("%d\t",i);	
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.3");
		return 0;
}*/
//print all even numbers from 0 to N
/*#include<stdio.h>
int main(){
	int N, i;
	printf("Enter a value for N\n");
	scanf("%d",&N);
	//using for loop through 0 to N, only printing even numbers
	for(i=0; i<=N; i+=2){
		printf("%d",i);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.4");
		return 0;
}*/
//print all odd numbers from -N to N
/*#include<stdio.h>
int main(){
	int N;
	printf("enter a number N\n");
	scanf("%d",&N);
	//using for loop through -N to N, printing odd numbers only
	for(int i=-N; i<=N; i++){
		if(i % 2!=0){ // using if statement to check if i is odd
		printf ("%d", i);
		}
			printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.5");
			return 0;
	}
}*/
//count the number of digits of an integer.
/*#include<stdio.h>
int main(){
	int num, count=0;
	printf("enter an integer\n");
	scanf("%d",&num);
	//using while loop
	while(num!=0){
	num/=10;
	++count;
}
printf("number of digits:%d\n", count);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.6");
	return 0;
}*/
//reverse a number
/*#include<stdio.h>
int main(){
	int num, rev=0, rem;
	printf("enter an integer:");
	scanf("%d",&num);
	while (num!=0){
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	printf("the reversed number :%d", rev);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.7");
		return 0;
		}*/
//program to multiplication table of a positive integer entered by the user
/*#include<stdio.h>
int main(){
	int num,i;
	printf("Enter a positive integer:");
	scanf("%d",&num);
	printf("multiplication table of %d:\n",num);
	for(i=1; i<=10; i++){
		printf("%d * %d = %d\n", num,i,num*i);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.8");
		return 0;
}*/
//program to display the sum of N natural numbers
/*#include<stdio.h>
int main(){
	int n, sum=0;
	printf("enter the value of N:");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		sum+=i;
	}
	printf("The sum of the first %d natural numbers is %d",n,sum);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.9");
		return 0;
}*/
//check whether if an integer is prime or not
/*#include<stdio.h>
int main(){
	int n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=2; i<=n/2; i++){
		if (n%1==0){
			printf("\n%d is not prime",n);
			break;
		}
		if(i==n){
			printf("\n%d is prime",n);
		}	
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.10");
	return 0;
}*/
//calculate whether it is palindrome or not
/*#include<stdio.h>
int main(){
	int n, r, sum=0, temp;
	printf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		sum= (sum*10)+r;
		n=n/10;
	}
	if(temp==sum)
	printf("it is palindrome number");
	else 
	printf("its i not plindrome number");
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.13");
		return 0;
}*/
//program to check whether an integer is armstrong
// program to find factorial number using any loop
/*#include<stdio.h>
int main(){
	int num, factorial=1;
	printf("enter a positive integer:");
	scanf("%d",&num);
	for(int i=1; i<=num; i++){
		factorial*=i;
	}
	printf("factorial of %d\n", num, factorial);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 4.14");
	return 0;
}*/
/*#include <stdio.h>

int main() {
    int n, i, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the first two terms o\f the series
    printf("Fibonacci Series: %d, %d ", t1, t2);

    // Generate and print the next terms of the series
    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
    }
	printf("\nRoza Shrestha\n22\n(BIM 1st SEM)");
    return 0;
}*/
/*#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    // Read an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Save the original number for later comparison
    originalNum = num;

    // Count the number of digits in the integer
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    // Calculate the Armstrong number
    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;

        // Using pow() function to get the power of the remainder with n
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check if the given number is an Armstrong number or not
    if ((int)result == num) {
        printf("%d is an Armstrong number.", num);
    }
    else {
        printf("%d is not an Armstrong number.", num);
    }
	printf("\nRoza Shrestha\n22\n(BIM 1st SEM)");
    return 0;
}*/
#include <stdio.h>

int main() {
    int num, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Calculate factorial using for loop
    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }
    
    printf("Factorial of %d is %d\n", num, factorial);
    printf("\nRoza Shrestha\n22\n(BIM 1st SEM)");
    return 0;
}


