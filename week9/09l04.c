//getchar
//putchar
//'strlen' takes a string as an argument and returns its length
#include <stdio.h>
#include <string.h>
void reverse(char str[]);
int main(){
    char str[80];
    printf("Enter a line of text:\n");
    gets(str);
    //puts(str);
    printf("\nThe line printed backwards is:\n");
    reverse(str);
    return 0;}
void reverse(char str[]){
    int i,m;
    m=strlen(str);
    for(i=m-1; i>=0; i--) 
        putchar(str[i]);
    printf("\n");}