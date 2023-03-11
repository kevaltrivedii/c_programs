#include<stdio.h>
int main (){
int a=5,b=10;

printf("Before swap %d and %d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swap a=%d and b=%d",a,b);

}