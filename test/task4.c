#include<stdio.h>

void main(){

printf("** Reverse order ** \n");
    int number =64728;
    int r,sum=0,i;

    for(i=number; number!=0; number=number/10){
        r=number%10;
        sum=sum*10+r;

    }

    printf("reverse order of your input is %d",sum);

}