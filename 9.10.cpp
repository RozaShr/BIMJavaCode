//illustrate the concept of realloc() and free() function
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	int * arr;
	//prompt user to enter the size of the array
	printf("enter the size of the array:");
	scanf("%d",&n);
	//dynamically allocated memory for the array using malloc()
	arr = (int*)malloc(n*sizeof(int));
	//check if memory allocation was successful
	if(arr==NULL){
		printf("Memory allocation was failed\n");
		return 1;
		
	}
	//prompt user to enter the new size of the array
	int new_n;
	printf("enter the new size of the array:");
	scanf("%d",&new_n);
	//reallocate memory for the array using realoc()
	arr= (int*)realloc(arr,new_n*sizeof(int));
	//check if memory reallocation was successful
	if(arr==NULL) {
		printf("memory reallocation failed\n");
		return 1;
	}	
	//prompt user to enter the additional elements of the array
	printf("enter %d additional elements of the array:\n",new_n-n);
	for(int i = n; i<new_n;i++){
		scanf("%d",&arr[i]);
	}
	//print the elements of the array
	printf("Elements of the array are:");
	for(int i=0; i ,new_n; i++){
		printf("%d", arr[i]);
	}
	printf("\n");
	//free the dynamically allocated memory
	free(arr);
	return 0;
}