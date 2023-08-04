/*#include<stdio.h>
int main(){
 int inttypes;
	    //int type is used to give a variable of an integer type
	    float floattypes;
	    //float is used to declare variable to use
	    double doubletypes;
	    //double is used to store high floating point data or numbers
	    char chartypes;
	    //char is used to decclare the charcters
	    //now evaluating the size of data types
	    
	printf("size of int :%i bytes\n",sizeof (inttypes));
	printf("size of float :%i bytes\n",sizeof (floattypes));
	printf("size of double :%i bytes\n",sizeof (doubletypes));
	printf("size of char:%i bytes\n",sizeof (chartypes));
	    printf("\nRoza Shrestha \tLab:1.8\tRollno:22\n");
	    return 0;
	}*/
	#include<stdio.h>
int main (){

	//program to calcualte the area and perimeter of rectangle
	/*	int l,b;
	int a,p;
	
	printf("enter an area of rectangle \n");
	scanf("%d %d",&l,&b);
	 a=l*b;
	printf("enter a perimeter of rectangle \n");
	scanf("%d %d",&l,&b);
	    p=2*(l+b);
	    printf("area of rectangle is %d\n",a);
	    printf("perimeter of rectangle is %d",p);
	    printf("\nRoza Shrestha\tLab:1.10\tRollno:22\n");
	    return 0;
	}*/
	   //demonstrate the use of const and define keywords
	   /* const int b=5;
	    const int l=2;
	    int area;
	    area =l*b;
	    printf("%d",area);
	    
	    printf("\nRoza Shrestha\tLab:1.13\tRollno:22\n");
	    return 0;
	}*/
	
	    /*int i,s;
	    printf("enter the area of a square:\n");
	    scanf("%d",&i);
	    s=i*i;
	    printf("the area of a square is %d",s);
	    printf("\nRoza Shrestha\tLab:1.15\tRollno:22\n");
	    return 0;
*/
int num1=57;
	int num3=45;
	int left, right;
	left=num1<<num3;
	right=num1>>num3;
	 
	printf("left => %d",left);
	printf("\n right => %d",right);

	printf("\nRoza Shrestha\tLab:2.9\tRoll:22\n");
	return 0;
}
	    