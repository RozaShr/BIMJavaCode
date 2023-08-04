#include <stdio.h>

int main() {
  // Define the matrices A and B
  int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};

  // Define the result matrix C with the appropriate dimensions
  int C[2][2] = {{0, 0}, {0, 0}};

  // Compute the matrix multiplication of A and B
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      for (int k = 0; k < 3; ++k) {
        C[i][j] += A[i][k] * B[k][j];
      }
    }
  }

  // Print the result matrix C
  printf("The result matrix is:\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 2; ++j) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
 printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.14");
  return 0;
}