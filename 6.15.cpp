#include <stdio.h>

#define ROWS 2
#define COLS 2

int main() {
  int A[ROWS][COLS] = {{1, 2}, {3, 4}};
  int B[ROWS][COLS] = {{5, 6}, {7, 8}};
  int C[ROWS][COLS];

  // Compute the sum of A and B and store it in C
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  // Print out the result
  printf("A + B =\n");
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }
printf("\n\nName: Roza Shrestha\tRoll no:22\tlab6.15");
  return 0;
}