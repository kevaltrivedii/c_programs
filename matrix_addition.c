#include <stdio.h>

int main() {
  int mat1[2][2], mat2[2][2], res[2][2];
  int i, j;

  printf("Enter elements of matrix 1:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &mat1[i][j]);
    }
  }

  printf("Enter elements of matrix 2:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &mat2[i][j]);
    }
  }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      res[i][j] = mat1[i][j] + mat2[i][j];
    }
  }

 
  printf("Result of subtraction:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }

  return 0;
}
