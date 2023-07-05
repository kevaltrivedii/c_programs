#include<stdio.h>
int main(){
    int a[]={12,23,34,45,21};
    int *p;

    p=&a[2];
    printf("value of a[2]: %d",&p);
    p++;
    printf("value after ++operation: %d",*p);

}

/*
pointer and array relation
*a=a[0]
*a(a+1)=a[1]
*a(a+2)=a[2]
*a(a+3)=a[3]
*a(a+4)=a[4]

#include<stdio.h>
int main(){
    int a[]={12,23,44,56};
    int i;//decalartion of pointer

    for(i=0; i<4; i++){
        printf("\nValue+ %d",*(a+i));
    }
}
*/