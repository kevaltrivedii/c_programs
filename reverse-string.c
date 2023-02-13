#include<stdio.h>
#include<string.h>

void main(){

    char str[50];

    printf("Enter a string :");
    scanf("%s", &str);

        
    printf("reversed string : %s",strrev(str));

}