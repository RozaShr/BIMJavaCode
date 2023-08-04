//create a function that takes at least two integers arguments and
//returns the sum, subtraction, product, division and using pointer.
#include<stdio.h>
//function declaration
void perform_operations(int num1, int num2, int*sum, int*differesce,
int*product, float*quotient);
int main(){
	int num1 = 10, num2 = 5, sum, difference, product;
	float quotient;
	//calling the function and passing the arguments by reference using pointer
	perform_operations(num1, num2, &sum, &difference, &product, &quotient);
	printf("sum:%d\n",sum);
	printf("difference:%d\n",difference);
	printf("product:%d\n", product);
	printf("quotient:%0.2f\n",quotient);
	printf("\nRoza Shrestha\tRollno.22\tBIM");
	return 0;
}
//Function definition
void perfrom_operations(int num1, int num2, int *sum, int *difference,
int *product, float *quotient){
	*sum = num1 + num2;
	*difference = num1 - num2;
	*product = num1 * num2;
	*quotient = (float) num1 / num2;
}

