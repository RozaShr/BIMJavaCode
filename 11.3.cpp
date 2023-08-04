//lab11.3
#include <stdio.h>
int main() {
    char *text = "I am studying C Programming";
  FILE * fp = fopen("open.txt", "w");
    // check if file was opened successfully
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1; 
    }
    fputs(text, fp);
    fclose(fp);
    return 0; 
}