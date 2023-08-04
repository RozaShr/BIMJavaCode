//program to create 4 function that finds sum, difference, product and division of 2 numbers provided as arguments
#include<stdio.h>
float sum(float a, float b){
	return a+b;
}
float difference(float a, float b){
	return a-b;
}
float product(float a, float b){
	return a*b;
}
float division(float a, float b){
	return a/b;
}

int main(){
	float num1, num2;
	printf("enter two numbers:\n");
	scanf("%f%f",&num1,&num2);
	printf("\nSum of the given numbers:%.2f",sum(num1,num2));
	printf("\nDiference of the given numbers:%.2f", difference(num1,num2));
	printf("\nProduct of the given numbers:%2.f",product(num1,num2));
	printf("\nDivision of the given numbers:%2.f",division(num1,num2));
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.4");
	return 0;
}
//program to create a function that takes two arguments such as x and n where x is the power raised to the number 7.5
/*#include<stdio.h>
int power(int x,int n){
	int result, i;
	for( i=0; i<=n;i++){
		result*=x;
	}
	return result;
}
int main(){
	int x,n;
	printf("enter the base:");
	scanf("%d",&x);
	printf("enter the exponent:");
	scanf("%d",&n);
	int result=power(x,n);
	printf("\n%d to the power of %d is %d",x,n,result);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.5");
	return 0;
}*/
//Function to print all the lements of an array 7.6
/*#include<stdio.h>
void printArray(int arr[], int size){
printf("Elements of the array are:");
for(int i=0; i < size; i++){
	printf("%d",arr[i]);
}
}
int main(){
	int arr[5]={1,2,3,4,5};
	//call the printArray function with the array and its size as arguments
	printArray(arr,5);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.6");
	return 0;
}*/
// function to return 1000 if the integer is even, otherwise 2000
/*#include<stdio.h>
int evenodd(int num){
	if(num%2 == 0){
		return 1000;
	}else{
		return 2000;
	}
}
int main(){
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	//call the evenodd function with the input number as argument
	int result= evenodd(num);
	printf("Result:%d", result);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.7");
	return 0;
}*/



