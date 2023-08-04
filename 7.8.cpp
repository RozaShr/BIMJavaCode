#include <stdio.h>
// Recursive function to calculate the factorial of a number
int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
//    if (num < 0) {
//        printf("Error: Factorial of negative number does not exist.\n");
//    }
//    else {
//        printf("Factorial of %d is %d.\n", num, factorial(num));
//    }
    int result = factorial(num);
    printf("Factorial of %d is %d", num, result);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.8");
    return 0;
}
