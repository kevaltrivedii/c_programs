/*
structure is a user defined data type that can hold multiple type of values

syntax:
struct structure_name{
    data+variables
};
*/
#include<stdio.h>
struct student
{
    char name[20];
    int age;
    float marks;
};

int main(){
   struct student s1[3];

    printf("\n\n------------input------------\n\n");
    for (int i=0; i<3; i++){
        printf("Enter name: ");
        scanf("%s",&s1[i].name);

        printf("Enter age: ");
        scanf("%d",&s1[i].age);

        printf("Enter marks: ");
        scanf("%f",&s1[i].marks);
    }

       printf("\n\n------------diplay------------\n\n");
        for (int i=0; i<3; i++){
            printf("name: %s\n",s1[i].name);
            printf("Age: %d\n",s1[i].age);
            printf("marks: %.3f\n",s1[i].marks);
        }
}