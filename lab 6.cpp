// c program to illustrate different types of array in c.
/*#include<stdio.h>
int main(){
	//initializing one,two and three dimensional array
	int OneDimArr[4]={1,2,3,4};
	int TwoDimArr[2][4]={{4,4,4,4},{4,4,4,4}};
	int ThreeDimArr[3][2][3]={{{2,2,2},{3,3,3}},{{6,6,6},{0,0,0}},{{0,0,0},{0,0,0}}};
	printf("One-Dimensional array:\n");
	for(int i=0; i<4; i++){
		printf("%d",OneDimArr[i]);
	}
	printf("\n");
	printf("Two-Dimensional array:\n");
	for(int i=0; i<2; i++){
		for(int j=0; j<4; j++){
			printf("%d",TwoDimArr[i][j]);
		}
		printf("\n");
	}
	printf("Three-Dimensional Array:\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<3; k++){
				printf("%d",ThreeDimArr[i][j][k]);
				
			}
			printf("\n");
		}
		printf("\n");
	}
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.1");
	return 0;
}*/
//program to read n number of values in an array and display it in reverse order.
/*#include<stdio.h>
int main(){
	int n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	int arr[n];
	printf("Enter %d elements:\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr[i]);
	}
	printf("the elements in reverse order are:\n");
	for(int i=n-1; i>=0; i--){
		printf("%d",arr[i]);
	}
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.2");
	return 0;
}*/
//program to copy all the elements from one array to another.
/*#include<stdio.h>
int main(){
	int n;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	int arr1[n], arr2[n];
	printf("enter %d elements:\n",n);
	for(int i=0; i<n; i++){
		scanf("%d",&arr1[i]);
	}
	for(int i=0; i<n; i++){
		arr2[i]=arr1[i];
	}
	printf("Elements in second array:\n");
	for(int i=0; i<n; i++){
		printf("%d",arr2[i]);
	}
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.3");
	return 0;
}*/
//program to create an array of size 20 and take all the elements from the user and display all the elements that have even indices.
/*#include<stdio.h>
int main(){
	int arr[20];
	int i;
	printf("Enter 20 integers:\n");
	for(i=0; i<20; i++){
		scanf("%d",arr[i]);
	}
	printf("Elements with even indices:");
	for(i=0; i<20; i%2==0){
		printf("%d",arr[i]);
	}
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.4");
	return 0;
}*/
// program to take marks of 5 subjects from the user,store them in an array 
//and display the average marks from the array.
/*#include<stdio.h>
int main(){
	int marks[5];
	float sum = 0.0, average;
//read marks of 5 subject into the array
printf("Enter the marks of 5 subjects :\n");
for(int i=0 ; i<5; i++){
	scanf("%d",&marks[i]);
	sum+= marks[i];
}
//Calculate the average mark
average= sum/5.0;
//Display the average mark
printf("the average mark is:%2f\n",average);
printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.5");
 return 0;
}*/
//program to create an array containing the following elements and ask user to enter a number.
//If entered number is in the array then print "element founf at index...."
 //otherwise display "elements not found."{-10,10,15,25,55,150,190,201,220,250}
 /*#include<stdio.h>
 int main(){
 	int arr[]={-10,10,15,25,55,150,190,201,220,250};
 	int n, i, found =0;
 	printf ("Enter a number:");
 	scanf("%d",&n);
 	for(i=0; i<10; i++){ // loop through the array 
 	if (arr[i]==n){ // if the element is found
 	printf("Element found at index %d \n",i);
 	found=1; // set found flag to true
 	break; // exit the loop
	 }
	 }
	 if (!found){ //if the element was not found 
	 printf("element not found\n");
	 }
	 printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.6");
	 return 0;
 }*/
 // program to take 10 integers from user,store them in an array and display the smallest integer among them.
 /*#include<stdio.h>
 int main(){
 	int num [10];
 	int i, smallest;
 	printf("enter 10 integers:\n");
 	for(i=0; i<10; i++){
 		scanf("%d",&num[i]);
 	}
 	smallest=num[0];
 	for(i=1; i<10; i++){
 		if (num[i]< smallest){
 			smallest=num[i];
		 }
	 }
	 printf("smallest integer is %d",smallest);
	 printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.7");
	 return 0;
 }*/
 //program to take 10 integers from the user, store them in an array and display the largest integer
 /*#include<stdio.h>
 int main(){
 	int arr[10],i, max;
 	printf ("enter 10 integers:\n");
 	for(i=0; i<10; i++){ // loop to take input 
 	scanf("%d",&arr[i]);
	 }
	 max= arr[0]; //initialize max to first element of array
	 for(i=1; i< 10; i++){ //loop through the array 
	 if (arr[i] > max){
	 	max= arr[i];
	 }
	 }
	 printf("The largest integer is %d\n", max);
	  printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.8");
	  return 0;
 }*/
 //program to take 10 integers from the users, store them in an array, sort the array in ascending order
 // using bubble sort and display the array after sorting.
#include<stdio.h>
int main(){
int i,j;
int two[2][2]={{4,4},{2,1}};
printf("array in matrix form:\n");
for (i=0;i<2;i++){
	for (j=0;j<2;j++){
		printf("%d\t",two[i][j]);
	}
	printf("\n");
}
printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.10");
 return 0;

}

 



