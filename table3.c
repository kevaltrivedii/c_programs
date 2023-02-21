/* take a number from user and print till the number from user.
*/

#include<stdio.h>

int main ()
{
    int number,i,j;

    printf("Enter a number :");
    scanf("%d",&number);

    for(i=1; i<=number; i++)
    {
        printf("table of %d:\n",i);

        for(j=1; j<=10; j++)
        {
            printf("%d x %d = %d\n",i,j,i*j);
        }
    }printf("\n");
}