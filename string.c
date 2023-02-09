//string :
//string is a array of chararacters terminated with null character['\0']

//how to declare string : 
//char string_name[size;
// how to initialize string:
// char str1[]={'a','b','c','\0'}'

// char str[]="hello"
//char str[200];

//gets() to scan string
//puts() to print string

#include <stdio.h>

int main (){
	
	char str1[]={'h','e','l','l','o','\0'};
	char str2 []="Hello";
	
	printf(str1);
	printf("\n %s",str2);
	
	
	
	char str3[20];
	
	printf("\nenter your name :");
	gets(str3);
	
	printf("your name  :");
	puts(str3);
	
	return 0;
}
