//demonstrate the use of illustrate indirection/fegerence operator(*)
//and reference/address of operator(&).
#include<stdio.h>
int main(){
	int num = 42;
	int*ptr= &num;
	printf("num = %d\n",num);
	printf("&num = %p\n", &num);
	printf("ptr = %p\n", ptr);
	printf("ptr = %d\n", *ptr);
	*ptr = 100;
	printf("num =%d\n", num);
	printf("\nRoza Shrestha\tRollno.22\tBIM");
	return 0;
}