#include <stdio.h>

typedef struct Employee {
    int id;
    char name[50];
    char address[100];
} Employee;

int main() {
    FILE *fp;
    Employee emp[5];

    // Take data for each employee from console
    for (int i = 0; i < 5; i++) {
        printf("Enter Employee %d details:\n", i+1);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Name: ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Address: ");
        scanf(" %[^\n]s", emp[i].address);
    }

    // Write employee data to binary file
    fp = fopen("Employee Data.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(emp, sizeof(Employee), 5, fp);

    fclose(fp);
    printf("Employee data written to file successfully.\n");
    printf("\nRoza Shrestha\n22\n(BIM 1st SEM)");
    return 0;
}
