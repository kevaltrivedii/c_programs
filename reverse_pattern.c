#include<stdio.h>

void main()

{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int j = 5; j >= i; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
}