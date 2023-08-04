//demonstrate the concept of array of pointers.
#include<stdio.h>
int main(){
	int x = 10, y = 20, z = 30;
	//creationg an array of three integer pointers and initializing them with address of x,y,andz
	int *ptr[3]={&x,&y,&z};
	//accessing the values of x,y and z using the array of pointers
	printf("x=%d, y=%d, z=%d\n", *ptr[0],*ptr[1],*ptr[2]);
	//modifying the value of x using the array of pointers
	*ptr[0] = 15;
	printf("x = %d\n", x);
	return 0;
}