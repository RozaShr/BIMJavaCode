//create a function that returns sum, difference, product, division of 2 numbers.(use concept of structure)
#include <stdio.h>

// define a structure to hold two numbers
struct Numbers {
    int num1;
    int num2;
};

// define a function that takes a Numbers structure as input and returns a structure that holds the sum, difference, product, and division of the two numbers
struct Results {
    int sum;
    int difference;
    int product;
    float division;
};

struct Results calculate(struct Numbers nums) {
    struct Results results;
    
    // calculate the sum, difference, product, and division
    results.sum = nums.num1 + nums.num2;
    results.difference = nums.num1 - nums.num2;
    results.product = nums.num1 * nums.num2;
    results.division = (float) nums.num1 / nums.num2;
    
    // return the results structure
    return results;
}

int main() {
    struct Numbers nums;
    
    // get input from the user
    printf("Enter two numbers:\n");
    scanf("%d %d", &nums.num1, &nums.num2);
    
    // calculate the results
    struct Results results = calculate(nums);
    
    // print the results
    printf("Sum: %d\n", results.sum);
    printf("Difference: %d\n", results.difference);
    printf("Product: %d\n", results.product);
    printf("Division: %f\n", results.division);
    printf("\nRoza Shrestha\n22\nBIM(1st SEM)");
    return 0;
}

