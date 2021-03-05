//hw2_version2//
#include <stdio.h>
#include <string.h>
int function(char string[40],char character,int size){
    int j,timer=0;
    printf("%d\n",size);
    for(j=0;j<=size;j++) {
        if (string[j]==character){
            timer++;}}
    return timer;}
int main(){
    char STR[40]=" ";
    char CH;
    int size;
    printf("Enter the STR: ");
    scanf("%s",STR);
    size=strlen(STR);
    printf("Enter CH: ");
    scanf("%s",&CH);
    printf("Number of times the single character variable CH appears in STR: %d",function(STR,CH,size));
    return 0;}
