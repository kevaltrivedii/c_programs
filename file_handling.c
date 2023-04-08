/*
File handlingin c
to create file
to read file
modes to open a file

r: to read filr
w: to write a file
a: to append file

r+: read and write both
w+: write and ceate both
a+ : append and create both

method of file handling:
fopen(): to open the file
fclose(): to close the file
fprintf(): to print data in to the file
fscanf(); to scan data from the  file

syntax: 
FILE *File_pointer
*/




#include<stdio.h>
int main(){
    FILE* fp;

    fp = fopen( "My_file.txt","w+");
    fprintf(fp,"\nWelcome ");

    fclose(fp);
    return 0;
}
