#include<stdio.h>

void main(){

int number =1523;
int sum=0;


    while(number!=0){
        sum+= number%10;
        number=number/10;
    }
    printf("sum of digits = %d",sum);
}