#include <stdio.h>
int string_length(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = string_length(str);
    printf("Length of the string '%s' is %d\n", str, length);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.11");
    return 0;
}
