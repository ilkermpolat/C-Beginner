//hw1vers2//
#include <stdio.h>
#include <string.h>
void name_builder(char first_name[20],char last_name[20]){
    char STR[40]="";
    char blank[1]=" ";
    strcat(first_name,blank);
    strcat(first_name,last_name); //printf("cat = %s\n",strcat(first_name,last_name));
    strcpy(STR,first_name);       //printf("cpy = %s\n",strcpy(STR,last_name));
    printf("STR is '%s'\nNumber of characters in STR is %llu",STR,strlen(STR));
}
int main(){
    char F_NAME[20]="";
    char L_NAME[20]="";
    printf("Enter The First Name:");
    scanf("%s",F_NAME);
    printf("Enter The Last Name:");
    scanf("%s",L_NAME);
    name_builder(F_NAME,L_NAME); //printf("%s %s",F_NAME,L_NAME);
    return 0;
}