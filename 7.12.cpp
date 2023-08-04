#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str);
    printf("Length of the string '%s' is %d\n", str, length);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.12");
    return 0;
}