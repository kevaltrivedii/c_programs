#include<stdio.h>

void main(){

    int a;
    int range1 = 45;
    int range2 = 50;
    int range3 = 60;
    int range4 = 80;
    int range5 = 100;



    printf("Enter your percentage :");
    scanf("%d",&a);

    if (a > range1 && a < range2) {
        printf(" %d nice,but you need to improve , you scored between %d-%d" ,a,range1,range2 );
    } else if (a > range2 && a < range3){
        printf(" %d  good ,keep it up, you scored between %d-%d",a , range2,range3);
    } else if (a > range3 && a < range4){
        printf("%d excellent , you scored  between %d-%d",a , range3,range4);
    } else if ( a > range4 && a < range5){
        printf("%d outstanding!! you scored great welldone ,you scored between %d-%d" ,a ,range4,range5);
    }
    

}