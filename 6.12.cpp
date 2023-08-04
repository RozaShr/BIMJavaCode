#include <stdio.h>

int main() {
    int m, n, i, j, arr[10][10], trans[10][10];
    
    printf("Enter the number of rows and columns of the array (m*n):\n ");
    scanf("%d%d", &m, &n);
    
    printf("Enter the elements of the array:\n");
    for (i = 0; i < m; i++) { // loop for rows
        for (j = 0; j < n; j++) { // loop for columns
            scanf("%d", &arr[i][j]); // take input for each element
        }
    }
    
    printf("The array before transposing:\n");
    for (i = 0; i < m; i++) { // loop for rows
        for (j = 0; j < n; j++) { // loop for columns
            printf("%d\t", arr[i][j]); // display each element with tab separation
        }
        printf("\n"); // move to the next row
    }
    
    // Transposing the matrix
    for (i = 0; i < m; i++) { // loop for rows
        for (j = 0; j < n; j++) { // loop for columns
            trans[j][i] = arr[i][j]; // interchange row and column
        }
    }
    
    printf("The array after transposing:\n");
    for (i = 0; i < n; i++) { // loop for rows
        for (j = 0; j < m; j++) { // loop for columns
            printf("%d\t", trans[i][j]); // display each element with tab separation
        }
        printf("\n"); // move to the next row
    }
      printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.12");
    
    return 0;
}
