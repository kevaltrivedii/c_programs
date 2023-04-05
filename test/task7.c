#include<stdio.h>
int main() {
    int m1[2][2], m2[2][2], c[2][2];
    int n, i, j, k;

    printf("Enter the elements of Matrix-1: \n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", & m1[i][j]);
        }
    }

    printf("Enter the elements of Matrix-2: \n");

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", & m2[i][j]);
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            c[i][j] = 0;
            for (k = 0; k < 2; k++) {
                c[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }

    printf("The product of the two matrices is: \n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

}