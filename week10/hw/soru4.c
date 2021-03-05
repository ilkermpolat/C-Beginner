#include <stdio.h>
#include <string.h>
int main(){
    int id,m=0;
    char firstname[20],lastname[20],fname[20],lname[20];
    FILE *fptr;
    fptr = fopen("inf.txt","r");
    printf("Enter first and Last Name: ");
    scanf("%s %s",firstname,lastname);
    while(!feof(fptr)){
        fscanf(fptr,"%d%s%s",&id,fname,lname);
        if((strcmp(firstname,fname)==0) && (strcmp(lastname,lname)==0)){
            printf("\"%s %s\" Found\n",fname,lname);
            m=1;
        }
    }
    if(m==0)printf(" \"%s %s\" NOT FOUND\n",firstname,lastname);
    fclose(fptr);
    return 0;
}