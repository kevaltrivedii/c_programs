#include<stdio.h>
void main (){
	
	int num ,i, even_count=0,odd_count=0,even_total=0,odd_total=0;
	
	for(i=0; i<10; i++){
	
	
	printf("Enter any 10 numbers :");
	scanf("%d",&num);
	
	if(num%2==0){
		even_count++;
		even_total+=num;
		
	}else{
		odd_count++;
		odd_total+=num;
}
	}
	printf("amount of even numbers : %d\n",even_count);
	printf("amount of odd numbers : %d\n",odd_count);
	printf("total of even numbers : %d\n",even_total);
	printf("total of odd numbers : %d\n",odd_total);
	
}