
#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void replace_char(char str[], char orig, char repl) {
    int i;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == orig) {
            str[i] = repl;
        }
    }
}
int main() {
    char str[MAX_SIZE];
    printf("Enter a line of text: ");
    fgets(str, MAX_SIZE, stdin);
    printf("Before: %s", str);
    replace_char(str, 'a', 'z');
    printf("After: %s", str);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.14");
    return 0;
}