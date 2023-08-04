//lab10.1 define structure named student with roll number, name and address, marks of 5 sub as the members. 
//create 5 student variableand take details from the user.
#include<stdio.h>
#include<string.h>
//define the student structure with necessary fields
struct student{
	int roll;
	char name[50];
	char address[100];
	int marks[5];
};
//function to take input for a student
void takeStudentInput(struct Student*s){

printf("enter roll number:");
scanf("%d",&s->roll);
printf("Enter name:");
scanf("%s",s->name);
printf("Enter address:");
scanf("%s",s->address);
printf("enter marks of 5 students:");
for(int i = 0;i<5; i++){
	scanf("%d",&s->marks[i]);
}
}
//function to check if student meets the given sriteria an print details if true
void checkAndPrint(struct student*s){
	if(s->roll%2 == 1 && strcmp(s->address,"KTM") == 0 && s-> name[0] =='R'){
		int totalMarks = 0;
		for(int i = 0; i<5; i++){
			totalMarks +=s->marks[i];
		}
	if (totalMarks>400){
		printf("Roll: %d\nName: %s\nAddress: %s\nMarks:", s->roll, s->address);
		for(int i = 0; i<5; i++){
			printf("%d",s->marks[i]);
		}
		printf("\n");
	}
	}
}
int main(){
	//create 5 student variables
	struct Student students[5];
	//take input for each student
	for(int i=0; i<5; i++){
		printf("enter details for student %d:\n", i+1);
		takeStudentInput(&student[i]);
	}
	//check each student and print details if thery meet the criteria
	for(int i = 0; i<5; i++){
		checkAndPrint(&students[i]);
	}
	return 0;
	}
