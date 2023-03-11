#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    int i,j,len,temp=0;

    printf ("Enter a string :");
    gets(str);

    len=strlen(str);

    for (i=0,j=len-1;i<len/2;i++,j--){
        char flag=str[i];
        str[i]=str[j];
        str[j]=str[i];

    }

    for (i=0;i<len;i++){
        if(str[i]!=str[len-i-1]){
            temp=1;
            break;
        }
    }

    if (temp){
        printf("String is not palindrome\n");
    }else{
        printf("the string is palindrome");
    }

}