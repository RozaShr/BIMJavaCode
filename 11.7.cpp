//lab11.6
#include <stdio.h>

int main() {
    FILE *fptr;
    int emp_id;
    char emp_name[20], emp_address[20];
    
    // creating and writing to the file
    fptr = fopen("employee_data.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }
    fprintf(fptr, "100 Roza Kathmandu\n");
    fprintf(fptr, "101 Rashana Bhaktapur\n");
    fprintf(fptr, "102 Sybrona Lalitpur\n");
    fprintf(fptr, "103 Dilasha Chitwan\n");
    fprintf(fptr, "104 Sneha Pokhara\n");
    fclose(fptr);
    
    // reading from the file
    fptr = fopen("employee_data.txt", "r");
    if(fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }
    while(fscanf(fptr, "%d %s %s", &emp_id, emp_name, emp_address) != EOF) {
        printf("Employee ID: %d\nEmployee Name: %s\nEmployee Address: %s\n\n", emp_id, emp_name, emp_address);
    }
    fclose(fptr);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 11.6");
    return 0;
}