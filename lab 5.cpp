// program to illustarate the use of sontinue statements.
/*#include<stdio.h>
int main(){
	int i;
	//printing oly even numbers between 1 and 10.
	for (i=1; i<=10; i++){
		if(i%2!=0){
			continue; //skip odd numbers
		}
		printf("%d", i);
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.1");
	return 0;
}*/
// program to illustarte the break statement.
/*#include<stdio.h>
int main(){
	int i;
	//print numbers from 1 to 5
	for (i=1; i<=10; i++){
		printf("%d",i);
		if(i==5){
			break;
		}
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.1");
	return 0;
}*/
//program to read two numbers such as num 1 and num2 and display all the even numbers from num1 and num2.
//also count frequency of all even numbers.
/*#include<stdio.h>
int main(){
	int num1, num2, i, count = 0;
	printf("enter two numbers:\n");
	scanf("%d %d", &num1, &num2);
	int freq[100]={0}; //set all elements of array to 0.
	printf("even number between %d and %d are:", num1, num2);
	for(i=num1; i<=num2; i++){
		if (i%2==0){
			printf("%d",i);
			freq[i] ++ ; //increment the count pf the even num
			count ++; //increment the total of even num
		}
	}
	printf("the frequency of even num between %d & %d :\n", num1,num2);
	for(i=num1; i<num2; i++){
		if(freq[i]!=0){
			printf("%d occurs %d times \n",i,freq[i]);
		}
	}
	printf("\n Total even numbers between %d & %d: %d n",num1,num2, count);
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.2");
		return 0;
}*/
//program to print the pattern using loop
/* *****
   *****
   *****
   *****
   ***** */
 /* #include<stdio.h>
   int main(){
   	int i,j;
   	for(i=0 ; i<5 ; i++){ //using for loop
   	for (j=0; j<5; j++){
   		printf("*");
   	}
   	printf("\n");
   }
   	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.3");
   	return 0;
   }*/
//program to print the pattern:
/* #
   ##
   ###
   ####
   ##### */
   /*#include<stdio.h>
   int main(){
   	int i,j;
   	for (i=1; i<=5; i++){ //repeat over 5 rows
   	for(j=1; j<=i; j++){ //repeat over i columns
   	printf("#");
   }
   printf("\n"); //move to the next row
   }
printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.4");
 return 0;
   }*/
//program to print the pattern using loop.
/* 1
   2 2
   3 3 3
   4 4 4 4
   5 5 5 5 5 */
  /*#include<stdio.h>
   int  main(){
   	int rows =5;
   	for (int i=1; i<= rows; i++){
   		for(int j=1; j<=i; j++){
   			printf("%d", i);
		   }
		   printf("\n");
	   }
	   	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.5");
	   	return 0;
   }*/
//program to print the pattern using any loop
/* 1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5 */
   /*#include<stdio.h>
   int main (){
   	int rows= 5, i, j;
   	printf ("enter the number of rows:");
   	scanf("%d",&rows);
   	for(i=1; i<= rows; i++){
   		for(j=1; j<=i; j++){
   			printf("%d",j);
		   }
		   printf("\n");
	   }
	   	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.6");
	   	return 0;
   }*/
//program to print the pattern:
/*   $  
    $$$  
   $$$$$
  $$$$$$$ 
 $$$$$$$$$ */
 #include<stdio.h>
 int main(){
 	/*int rows,i,j,k;
 	printf("enter the number of rows\n");
 	scanf("%d",&rows);
 	for(i=1; i<=rows; i++){
 		for(i=1 ; i<= rows; i++){
 			for (j=i; j<rows; j++){
 				printf("      ");
			 }
			 for(k=1; k<(i*2); k++){
			 	printf("$");
			 }
			 printf("\n");
		 }
	}
		 	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.7");
	 return 0;
 }*/
 //program to print the given sequence:
 // 1  4   9   16   25   36   49   64
/* #include<stdio.h>
 int main(){
 	int i;
 	for(i=1; i<=8; i++){ //repeat over 8 numbers
 	printf("%d\t", i*i); //print the sequence of i
	 }
	 	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.8");
	 	return 0;
 }*/
 //program to display the sum of n natural numbers
/* #include<stdio.h>
 int main(){
 	int n, sum=0 , i;
 	printf("enter a possitive integer:");
 	scanf("%d",&n);
 	for(i=1; i<=n; i++){ //repeat the number form 1 to n
 	sum+=i; // add the current number to the sum
 }
 printf("the sum of first %d natural numbers is %d",n, sum);
 	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.9");
 	return 0;
	 }*/
	int rows,i,j,k;{
		printf("enter the number of rows");
		scanf("%d",&rows);
		for (i=1;i<=rows;i++){
			for (j=1;j<rows;j++){
				printf(" ");
			}
			for (k=1;k<(i*2);k++){
				printf("$");
			}
			printf("\n");
		}
	}
		printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 5.7");
		return 0;
	}
	

   