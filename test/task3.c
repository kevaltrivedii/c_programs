#include<stdio.h>

void main(){

    int num,i,temp=0;

    printf("Enter an integer :");
    scanf("%d",&num);

   for(i=2; i<=num/2;i++){
   
       if(num%i==0){
           temp=1;
           break;
           
       }
   }
   if (temp==0){
       printf("%d is a prime number",num);
    }  else
      printf("%d is not a prime number",num);
       
   }