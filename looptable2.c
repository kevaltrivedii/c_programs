#include<stdio.h>
void main(){

int numbers[6] ={3,6,7,9,8,2};

    
for (int n=1; n<=10; n++) {
        for (int i=0; i<6; i++) {
            printf("%d * %d = %d\t| ", numbers[i], n, numbers[i]*n);
        }
        printf("\n");
    }
}