//lab11.1
#include <stdio.h>
int main() {
    int i;
    char data[50];
     // Open a new file named "open.txt" for writing
    FILE* fptr = fopen("open.txt", "w");
    printf("There is file\n");
    printf("Enter a line of text:\n");
     // Read input from the user and store it in the 'data' array
    fgets(data,50,stdin);
    // Write the contents of the 'data' array to the file
    fputs(data, fptr);
    // Close the file
    fclose(fptr);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 11.1");
    return 0;
}