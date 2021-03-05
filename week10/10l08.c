#include <stdio.h>
#include <stdlib.h>
int main(){
    int no,midterm, sw=0;
    char firstname[20],lastname[20],fname[20],lname[20];
    FILE *fptr;
    fptr=fopen("namef","r");
    printf("enter first and last name: ");
    scanf("%s %s",firstname,lastname);
    while(!feof(fptr)){
        fscanf(fptr,"%d%s%s%d",&no,fname,lname,&midterm);
        if((strcmp(firstname,fname)==0) && (strcmp(lastname,lname)==0)){
            printf(" %s %s %4d\n",fname,lname,midterm);
            sw=1;
        }
    }
    if (sw==0)printf("\"%s %s\"NOT FOUND\n",firstname,lastname);
    fclose(fptr);
    return 0;
}