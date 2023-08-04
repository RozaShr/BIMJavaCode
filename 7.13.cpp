#include <stdio.h>
int count_occurrences(char str[], char ch) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}
int main() {
    char str[100], ch;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter the character to count: ");
    scanf(" %c", &ch);
    int count = count_occurrences(str, ch);
    printf("The character '%c' occurs %d times in the string '%s'.\n", ch, count, str);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.13");
    return 0;
}