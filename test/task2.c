#include<stdio.h>
int main(){

    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    (num%2)?printf("%d is a odd number",num):printf("%d is a even number",num);
    
}