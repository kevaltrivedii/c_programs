#include<stdio.h>

float circlearea (float radius){
    return 3.14*(radius,2);
} 
float trianglearea (float base, float height){
    return 0.5*base*height;
}
float rectanglearea (float length, float breadth){
    return length*breadth;

}

void main(){
int choice;
float radius,base,height,length,breadth,area;

printf("-----AREA CALCULATOR-----\n");

printf("1.Area of circle\n");
printf("2.Area of triangle\n");
printf("3.Area of rectangle\n");
printf("Enter your choice :");
scanf("%d",&choice);

switch(choice){
    case 1:
    printf("\nEnter the radius of circle:");
    scanf("%f",&radius);
    area=circlearea(radius);
    printf("\nArea of circle: %0.2f\n",area);
    break;

    case 2:
    printf("\nEnter the base of a triangle :");
    scanf("%f",&base);
    printf("\nEnter the height of a triangle :");
    scanf("%f",&height);
    area=trianglearea(base,height);
    printf("\nArea of triangle : %0.2f\n",area);
    break;

    case 3:
    printf("\nEnter the length of rectangle :");
    scanf("%f",&length);
    printf("\nEnter the breadth of rectangle :");
    scanf("%f",&breadth);
    area=rectanglearea(length,breadth);
    printf("\nArea of rectangle: %0.2f\n",area);
    break;

    default :
    printf("invalid choice");


}


}