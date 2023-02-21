/*print all numbers as input */

#include<stdio.h>

int main()
{
    int i,number,sum;

    printf("Enter a number :");
    scanf("%d",&number);

    printf("Numbers till %d ",number);
    for(i=1; i<=number; i++)
    {
        printf("%d,",i);
        sum+=i;

    }
    printf("sum of numbers till %d = %d ",number,sum);
}