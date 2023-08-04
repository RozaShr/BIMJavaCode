//search a desired element in array using pointers 
#include<stdio.h>
//function declaration
int search(int *arr, int key);
int main(){
	int arr[] = {1,4,7,9,12};
	int size = sizeof(arr) / sizeof(arr[0]);
	int key = 9;
	//calling the searh function and passing the array, its aize, and the search key
	int index = search(arr,size,key);
	
	if(index != -1){
		printf("element %d found at index %d\n", key, index);
}else{
	printf("element not found\n");
}
printf("\Roza Shrestha\tRollno.22\tBIM");
return 0;
}
//function definition
int searcg(int*arr, int size, int key){
	int index = -1;
	for(int i=0; i<size; i++){
		if(*(arr+i)== key){ //checking if the ith element is equal to the search key
		index = i;
		break;
		}
	}
	return index;
}