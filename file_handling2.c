#include <stdio.h>

int main() {
    char name[50];
    int standard;
    float marks;

      // Opening file in write mode
    FILE *fptr;
    fptr = fopen("student_details3.txt", "w");

    // Getting user inputs
    for(int i=0; i<3; i++){
    printf("\n------------------------------------------\n");
    printf("Enter name: ");
    scanf("%s",&name);
    printf("Enter standard: ");
    scanf("%d", &standard);
    printf("Enter marks: ");
    scanf("%f", &marks);
   
    // Writing user details to file

    fprintf(fptr,"\n------------------------------------------\n");
    fprintf(fptr, "Name: %s\n", name);
    fprintf(fptr, "Standard: %d\n", standard);
    fprintf(fptr, "Marks: %.2f\n", marks);

    }
 
    // Closing file
    fclose(fptr);
    return 0;
}