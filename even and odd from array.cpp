#include<stdio.h>

int main(){
	
	int num[10];
	int i;
	
	for(i=0; i<10; i++){
		printf("enter elements of num[%d] :",i+1);
		scanf("%d",&num[i]);
	}
	printf("\nEven numbers :");
     for(i=0; i<10; i++){
     	if(num[i]%2==0){
     		printf("%d, ",num[i]);
		 }
	 }  
	 printf("\nOdd numbers :");
	 for(i=0; i<10; i++){
     	if(num[i]%2!=0){
     		printf("%d, ",num[i]); 
    }
    
}

}


