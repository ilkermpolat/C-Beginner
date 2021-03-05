#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct file{
    char name[20];
    char letter_grades[20];
    int num_grade;
    char id[20];
}rec;
int main(){
    FILE *fptr = fopen("C:/Users/Ilker/OneDrive/Desktop/inf.txt","r");
    FILE *fptr2 = fopen("C:/Users/Ilker/OneDrive/Desktop/outf.txt","w");
    char c;
    while(!feof(fptr)){
        fscanf(fptr,"%s%s%d",rec.id,rec.name,&rec.num_grade);
        if (rec.num_grade >=0 && rec.num_grade  <= 69) {
            strcpy(rec.letter_grades,"FF");}
        if(rec.num_grade>=70 && rec.num_grade <=79){
            strcpy(rec.letter_grades,"CC");}
        if(rec.num_grade>=80 && rec.num_grade<=89){
            strcpy(rec.letter_grades,"BB");}
        if(rec.num_grade>=90 && rec.num_grade<=100){
            strcpy(rec.letter_grades,"AA");}
        fprintf(fptr2,"%s",rec.letter_grades);}
    do{
        c = getc(fptr);
        if (c != EOF) {
            putc(c, fptr2);}}
    while(c != EOF);
    fclose(fptr);
    fclose(fptr2);
    return 0;
}