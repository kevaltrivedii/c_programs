//marks structure

#include<stdio.h>
struct student{
    int rollNo;
    char name[30];
    int age;
    float science;
    float english;
    float maths;

};

int main(){

    struct student s1[3];
    int i;
    printf("\n\n--------------------INPUT----------------\n\n");
    for(i=0; i<3; i++){
         printf("\nStudent %d details :\n",i+1);
         printf("Enter Roll no. : ");
         scanf("%d",&s1[i].rollNo);

         printf("Enter Name: ");
         scanf("%s",&s1[i].name);

         printf("Enter Age: ");
         scanf("%d",&s1[i].age);

         printf("Enter marks of science: ");
         scanf("%f",&s1[i].science);

         
         printf("Enter marks of English: ");
         scanf("%f",&s1[i].english);

         
         printf("Enter marks of Maths: ");
         scanf("%f",&s1[i].maths);
    }
    
    printf("\n\n------------------DISPLAY-------------------\n\n");
    for(i=0; i<3; i++){
        printf("\n----------------------------------------------\n");
        printf("Student %d details: \n",i+1);
        printf("Roll no.: %d\n",s1[i].rollNo);
        printf("Name: %s\n",s1[i].name);
        printf("Age: %d\n",s1[i].age);
        printf("Science marks: %0.2f\n",s1[i].science);
        printf("Maths marks: %0.2f\n",s1[i].maths);
        printf("English marks: %0.2f\n",s1[i].english);
    }
}