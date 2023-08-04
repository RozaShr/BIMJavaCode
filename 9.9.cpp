//illustrate the concept of calloc() and free() function
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int * arr;
	//prompt user to enter the size of the array
	printf("enter the size of the array:");
	scanf("%d",&n);
	//dynamically allocate memory for the arrat using calloc()
	arr=(int*)calloc(n,sizeof(int));
	//check if memory allocation was successful
	if(arr==NULL){
		printf("Memory allocation failed\n");
		return 1;
	}
	//prompt user to enter the elements of the array
	printf("Enter %d elements of the array:\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	//print the elements of the array
	printf("elements of the array are:");
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	//print the elements of the array
	printf("elements of the array are:");
	for(int i = 0; i<n; i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	//Free the dynamically allocated memory
	free(arr);
	return 0;
}