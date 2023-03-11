#include<stdio.h>

int main (){
	
	char str [100];
	int len=0,i=0;
	
	
	printf("Enter string :");
	gets(str);
	
	for(i=0;str[i]!='\0'; i++){
		
		len+=1;
	}
	printf("string length is : %d",len);
	
}