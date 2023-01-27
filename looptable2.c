#include<stdio.h>
void main(){

int num[] ={3,6,7,9,8,2};

    
for(int i=1; i<=10; ++i){
        printf("%d x %d = %d\n " , num[0], i ,  num[0] *i);
 }

 for(int i=1; i<=10; ++i){
        printf("%d x %d = %d\n" , num[1], i ,  num[1] *i);

 }

for(int i=1; i<=10; ++i){
        printf("%d x %d = %d\n" , num[2], i ,  num[2] *i);

}

for(int i=1; i<=10; ++i){
        printf("%d x %d = %d\n" , num[3], i ,  num[3]*i);

}

for(int i=1; i<=10; ++i){
        printf("%d x %d = %d\n" , num[4], i , num[4]*i);
}

for(int i=1; i<=10; ++i){
        printf("%d x %d = %d\n" , num[5], i ,  num[5] *i);
}

}