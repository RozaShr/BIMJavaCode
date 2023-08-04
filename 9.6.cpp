//demonstrate the concept of null and void pointer
#include<stdio.h>
int main(){
	int x = 10;
	int * ptr1= &x; //pointer to an integer variable
	void*ptr2= NULL; //void pointer initialized to NULL
	//printing the value of a using the pointer
	printf("value of x using pointer :%d\n",*ptr1);
	//assigning a new value to x using the pointer
	*ptr1 = 20;
	printf("New value of x: %d\n",x);
	//checking if void pointer is not NULL before deferencing
	if(ptr2 !=NULL){
		//casting the void pointer to an integer pointer before deferencing
		printf("Value of void pointer:%d\n",*(int*)ptr2);
	}else{
		printf("Void pointer is NULL\n");
	}
	return 0;
}