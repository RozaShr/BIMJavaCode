#include <stdio.h>

int main() {
  char str[100]; 

  printf("Enter a string: ");
  scanf("%s", str); 

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') { // if the character is uppercase
      str[i] = str[i] + 32; // convert it to lowercase by adding 32 to its ASCII code
    } else if (str[i] >= 'a' && str[i] <= 'z') { // if the character is lowercase
      str[i] = str[i] - 32; // convert it to uppercase by subtracting 32 from its ASCII code
    }
  }

  printf("Converted string: %s\n", str); // print the converted string
  printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 8.1");
  return 0;
}
