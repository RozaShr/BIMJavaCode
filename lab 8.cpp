#include<stdio.h>

int main(){
	char str[100];
	printf("enter a string:");
	scanf("%s",str);
	for(int i=0; str[i]!='\0';i++){
		if(str[i]>='A'&& str[i] <='Z'){
			str[i]=str[i]+32; 
		}else if(str[i] >= 'a'&& str[i]<='z'){
			str[i]= str[i]-32;
		}
	}
	printf("converted string:%s\n",str);
	printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 8.1");
	return 0;
}
