//file opener//
#include <stdio.h>
int file_opener(){
    FILE *fptr;
    fptr = fopen("input.txt","r");
    fclose(fptr);
    return 0;
}
//file open and read//
int file_reader(){
    FILE *fptr;
    fptr=fopen("input.txt","r");
    
}