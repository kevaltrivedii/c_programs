/*
WAP for pointer assignment
WAP for value manipulation
*/

#include<stdio.h>
int main(){
    int a=23;
    int *p;//declaration of pointer

    //int *p=&a; declare and assignment in single line

    p=&a;// assignment of pointer

    printf("Addressn stored in pointer: %d\n",p);
    printf("AVlue stored in pointer: %d",*p);

    *p+=10;
    printf("\nupdated value of a using pointer: %d",a);// change in original value using pointer
}
