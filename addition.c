#include<stdio.h>

void main (){

    int number1 ,number2 , sum;

    printf("\n\nEnter first number = ");
    scanf("%d",&number1);

    printf("\n\nEnter second number = ");
    scanf("%d",&number2);
    
    sum = number1 + number2;

    printf("\n\nAddition of %d + %d = %d",number1 , number2 , sum);

}