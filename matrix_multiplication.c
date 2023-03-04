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

  res[0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
  res[0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
  res[1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
  res[1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

  printf("Result of multiplication:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("%d ", res[i][j]);
    }
    printf("\n");
  }

  return 0;
}
