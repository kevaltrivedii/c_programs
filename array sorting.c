#include <stdio.h>

int main() {
    int numbers[6];

    // take input from user
    printf("Enter 6 numbers:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numbers[i]);
    }


    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (numbers[i] > numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

  
    printf("Ascending order: ");
    for (int i = 0; i < 6; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("\n");

 
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 6; j++) {
            if (numbers[i] < numbers[j]) {
                int temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }
    printf("Descending order: ");
    for (int i = 0; i < 6; i++) {
        printf("%d, ", numbers[i]);
    }
    printf("\n");

}
