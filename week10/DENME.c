#include <stdio.h>
int main() {
    FILE *fptr = fopen("C:/Users/Ilker/OneDrive/Desktop/d.txt", "r");
    FILE *fptr2 = fopen("C:/Users/Ilker/OneDrive/Desktop/outf.txt", "w");
    char id, name[20], letter_grades[20], c;
    int num_grade, i;
    //do {
    //    c = getc(fptr);
    //    if (c != EOF) {
    //        putc(c, fptr2);;}
    //} while (c != EOF);
    while (!feof(fptr)) {
        fscanf(fptr,"\ngrade:%d", &num_grade);
        if (num_grade<60) {
            fprintf(fptr2,"%s:FF\n",letter_grades);}
        if(num_grade>=60 && num_grade <=69){
            fprintf(fptr2,"%s:DD\n",letter_grades);}
        if(num_grade>=70 && num_grade<=79){
            fprintf(fptr2,"%s:CC\n",letter_grades);}
        if(num_grade>=80 && num_grade<=89){
            fprintf(fptr2,"%s:BB\n",letter_grades);}
        if(num_grade>=90){
            fprintf(fptr2,"%s:AA\n",letter_grades);}}
        fclose(fptr);
        fclose(fptr2);
        return 0;}