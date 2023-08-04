#include <stdio.h>
// Function to swap values using call by value
void swapByValue(int num1, int num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Inside swapByValue function: num1 = %d, num2 = %d\n", num1, num2);
}
// Function to swap values using call by reference
void swapByReference(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("Inside swapByReference function: num1 = %d, num2 = %d\n", *num1, *num2);
}
int main() {
    int num1 = 10, num2 = 20;
    // Swap values using call by value
    printf("Before swapByValue function: num1 = %d, num2 = %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swapByValue function: num1 = %d, num2 = %d\n", num1, num2);
    // Swap values using call by reference
    printf("Before swapByReference function: num1 = %d, num2 = %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swapByReference function: num1 = %d, num2 = %d\n", num1, num2);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.10");
    return 0;
}