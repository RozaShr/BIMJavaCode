//lab11.5
#include <stdio.h>
int main() {
    char ch;
    FILE * fptr = fopen("DOC.txt", "r");
    printf("there is file\n");
    if (fptr == NULL) { 
        printf("Error: File does not exist\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        } else if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;
        }
        printf("%c", ch);
}
    fclose(fptr);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 11.4");
    return 0;
}