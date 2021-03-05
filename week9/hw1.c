//hw1//
#include <stdio.h>
#include <string.h>
void name_builder(char first_name[20],char last_name[20]){
    char STR[40]="";
    int i=strlen(first_name);
    first_name[i]='\n';
    strcat(first_name,last_name);
    strcpy(last_name,STR);
    printf(",%s\n%d",STR,strlen(STR));}
int main(){
    char F_NAME[20]="";
    char L_NAME[20]="";
    int i,m1,m2;
    printf("Enter The First Name:");
    gets(F_NAME);
    //puts(F_NAME);
    printf("Enter The Last Name:");
    gets(L_NAME);
    //puts(L_NAME);
    m1=strlen(F_NAME);
    m2=strlen(L_NAME);
    for(i=0;i<m1;i++)
        putchar(F_NAME[i]);
    L_NAME[i]='\0';
    for(i=0;i<m2;i++)
        putchar(L_NAME[i]);
    //name_builder(F_NAME,L_NAME);
    return 0;}