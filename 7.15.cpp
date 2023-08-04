#include <stdio.h>
void arithmetic_operations(int num1, int num2, int* sum, int* diff, int* prod, float* div) {
    *sum = num1 + num2;
    *diff = num1 - num2;
    *prod = num1 * num2;
    *div = (float) num1 / num2;
}
int main() {
    int num1, num2, sum, diff, prod;
    float div;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    arithmetic_operations(num1, num2, &sum, &diff, &prod, &div);
    printf("Sum: %d\n", sum);
    printf("Diff: %d\n", diff);
    printf("Prod: %d\n", prod);
    printf("Div: %.2f\n", div);
    printf("\n\nName: Roza Shrestha\tRoll no:22\tlab 7.15");
    return 0;
}