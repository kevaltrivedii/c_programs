#include<stdio.h>

int main(){
    int num=1562;
    int max=0;

    while (num>0){
        int digit=num%10;
        if (digit>max){
            max=digit;
        }
        num/=10;
    }
    printf("The maximum digit in the  number is %d\n",max);
}
