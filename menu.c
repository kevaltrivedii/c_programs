#include<stdio.h>

int main (){
     char menu[5] [100] ={"Burger","Pizza","Pani puri","Dosa","soda"};
     int price[5] = {100, 250, 50, 40, 20};
     int itemnumber [5];
     int quantity,selection,total=0;
     char choice;

     do{

        printf("MENU\n");
        for(int i=0; i<5; i++){
            printf("%d. %s --%d/-\n",i+1,menu[i],price[i]);
        }
        printf("Enter your selection :");
        scanf("%d",&selection);
        printf("Enter quantity you want :");
        scanf("%d",&quantity);

        total+=price[selection-1]*quantity;

         printf("Do you want to add more? (Y/N): ");
         scanf(" %c",&choice);
         
         printf("-------------------------------------------------------------------\n");
         printf("Your total bill is : %d\n",total);


     } while (choice=='y'||choice=='Y');
      printf("THANK YOU !!!!!\n");

}