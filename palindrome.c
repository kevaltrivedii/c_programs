#include<stdio.h>
#include<string.h>

void main(){
    int i,flag=0,length;
    
    char str[50];

    printf("Enter a string :");
    scanf("%s",&str);

    length=strlen(str);
    for(i=0; i<length; i++){
        if(str[i]!=str[length-i-1]){
            flag=1;
        }
    }
    if (flag){
        printf("%s is not palindrome",str);
        
    }
    else{
        printf("%s is plaindrome",str);
    }
}