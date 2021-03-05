//hw//
#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr = fopen("C:/Users/Ilker/OneDrive/Desktop/d.txt","r");
    FILE *fptr2 = fopen("C:/Users/Ilker/OneDrive/Desktop/outf.txt","w");
    char name[20],letter_grades[20],c;
    int id,num_grade;
    if (fptr == NULL) {
        printf("Error!");
        exit(1);}
    while(!feof(fptr)){
        fscanf(fptr,"%d%s%s%d",&id,name,letter_grades,&num_grade);
        if (num_grade >=0 && num_grade  <= 59) {
            fprintf(fptr,"AA\n");}
        if(num_grade>=60 && num_grade <=69){
            fprintf(fptr,"BB\n");}
        if(num_grade>=70 && num_grade<=79){
            fprintf(fptr,"CC\n");}
        if(num_grade>=80 && num_grade<=89){
            fprintf(fptr,"DD\n");}
        if(num_grade>=90 && num_grade<=100){
            fprintf(fptr,"FF\n");}
    }
    do{
        c = getc(fptr);
        if (c != EOF) {
            putc(c, fptr2);}}
    while(c != EOF);
    fclose(fptr);
    fclose(fptr2);
    return 0;
}
