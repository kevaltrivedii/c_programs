#include<stdio.h>
#include<ctype.h>

void main(){

    char str[100];
    int capital_count=0;
    int small_count=0;

    printf("Enter a string :");
    gets(str);

    for(int i=0; str[i]; i++){
        if(isupper(str[i])){
            capital_count++;
        }else if( islower(str[i])){
            small_count++;
        }
    }
    printf("Number of uppercase letters in string : %d\n",capital_count);
    printf("Number of lowercase letters in string : %d",small_count);
}