#include<stdio.h>
#include<string.h>
int main(){

    char str[100];
    int i,len=0;

    printf("Enter string : ");
    scanf("%s", str);

    len= strlen(str);

    for (i=len-1; i>=0; i--){
        printf("%c",str[i]);
    }

}