//pass the base address of an array to a function and print all the elements
//of that array in the function
//function declaration
void print_array(int*arr, int size);
int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int size = sizeof(arr)/sizeof(arr[0]);
	//calling the function and passing the array and its size
	print_array(arr,size);
	return 0;
}
//Function definition
void print_array(int*arr, int size){
	printf("Elements of the array: ");
	for(int i=0; i<size; i++){
		printf("%d",*(arr+i)); //printing each element using pointer arithmetic
	}
}