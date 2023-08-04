#include<stdio.h>
int main(){
float a,b,c,d,e;
	  float avg,sum;
	  
	  printf("enter the marks obtaibed of subject a :\n");
	  scanf("%f",&a);
	  printf("enter the marks obtaibed of subject b :\n");
	  scanf("%f",&b);
	  printf("enter the marks obtaibed of subject c :\n");
	  scanf("%f",&c);
	  printf("enter the marks obtaibed of subject d :\n");
	  scanf("%f",&d);
	  printf("enter the marks obtaibed of subject e :\n");
	  scanf("%f",&e);
	  sum =a+b+c+d+e;
	  avg =sum/5;
	  if (avg>=80){
	  	printf("\n grade A");
	  	
	  }else if(avg>=60&&avg<=79)
	  {
	  	printf("\n grade B");
	  	
	  }else if(avg>=40 && avg<=59){
	  	printf("\n grade C");
	  }else{
	  	printf("\n grade F");
	  }
	  printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 3.11");
	  return 0;
}