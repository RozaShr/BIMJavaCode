#include <stdio.h>

int main() {
    int arr[2][3], i, j;
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < 2; i++) { // loop for rows
        for (j = 0; j < 3; j++) { // loop for columns
            scanf("%d", &arr[i][j]); // take input for each element
        }
    }
    
    printf("The array in matrix format:\n");
    for (i = 0; i < 2; i++) { // loop for rows
        for (j = 0; j < 3; j++) { // loop for columns
            printf("%d\t", arr[i][j]); // display each element with tab separation
        }
        printf("\n"); // move to the next row
    }
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.11");
    
    return 0;
}
