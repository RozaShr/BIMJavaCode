#include <stdio.h>

int main() {
    int arr[3][3], i, j, sum = 0;
    
    printf("Enter the elements of the 3x3 array:\n");
    for (i = 0; i < 3; i++) { // loop for rows
        for (j = 0; j < 3; j++) { // loop for columns
            scanf("%d", &arr[i][j]); // take input for each element
            sum += arr[i][j]; // add each element to the sum
        }
    }
    
    printf("The sum of all the elements of the array is: %d", sum);
     printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.13");
    return 0;
}
