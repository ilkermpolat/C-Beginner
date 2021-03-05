#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *fptr = fopen("C:/Users/Ilker/OneDrive/Desktop/d.txt","r");
    FILE *fptr2 = fopen("C:/Users/Ilker/OneDrive/Desktop/outf.txt","w");
    char name[20],letter_grades[20],c;
    int id, num_grade;
    while(num_grade != EOF){
        num_grade = getc(fptr);
            if (num_grade<60) {
                fprintf(fptr2,"FF\n");}
            if(num_grade>=60 && num_grade <=69){
                fprintf(fptr2,"DD\n");}
            if(num_grade>=70 && num_grade<=79){
                fprintf(fptr2,"CC\n");}
            if(num_grade>=80 && num_grade<=89){
                fprintf(fptr2,"BB\n");}
            if(num_grade>=90){
                fprintf(fptr2,"AA\n");}
    }
    fclose(fptr);
    fclose(fptr2);
    return 0;
}
