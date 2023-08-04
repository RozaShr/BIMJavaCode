//demontrate the concept of pointer to pointer
#include<stdio.h>
int main(){
	int x = 10;
	int *ptr1 = &x; //pointer to an integer variable
	int **ptr2 = &ptr1; // pointer to a pointer
	//printing the value of x using the pointer to pointer
	printf("value of x using pointer to pointer:%d", **ptr2);
	//assinging a new value to x using the pointer to pointer
	**ptr2=20;
	printf("New value of x:%d",x);
	return 0;
}