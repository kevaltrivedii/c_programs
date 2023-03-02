#include <stdio.h>


int addition(int a, int b);
int subtraction(int a, int b);
int multiplication(int a, int b);
int division(int a, int b);
int modulus(int a, int b);

int main() {
    int a, b, choice, result;
    char option;

    do {
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        printf("Choose an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 1:
                result = addition(a, b);
                printf("The sum is %d.\n", result);
                break;
            case 2:
                result = subtraction(a, b);
                printf("The answer is %d.\n", result);
                break;
            case 3:
                result = multiplication(a, b);
                printf("The product is %d.\n", result);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: division by zero.\n");
                } else {
                    result = division(a, b);
                    printf("The quotient is %d.\n", result);
                }
                break;
            case 5:
                if (b == 0) {
                    printf("Error: division by zero.\n");
                } else {
                    result = modulus(a, b);
                    printf("The remainder is %d.\n", result);
                }
                break;
            case 6:
                printf("Thank you!\n");
                return 0;
            default:
                printf("Invalid choice.\n");
        }

        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &option);
    } while (option == 'Y' || option == 'y');

    printf("Thank you!\n");

    return 0;
}


int addition(int a, int b) {
    return a + b;
}

int subtraction(int a, int b) {
    return a-b;
}

int multiplication(int a , int b) {
    return a*b;
}

int division(int a, int b) {
    return a / b;
}

int modulus(int a, int b) {
    return a % b;
}
