char convert(int numberGrade ){
    if (numberGrade >=0 && numberGrade  <= 59) {
        strcpy(letter_grades,"FF");}
    if else(numberGrade>=60 && numberGrade <=69){
        strcpy(letter_grades,"DD");}
    if else(numberGrade>=70 && numberGrade<=79){
        strcpy(letter_grades,"CC");}
    if else(numberGrade>=80 && numberGrade<=89){
        strcpy(letter_grades,"BB");}
    if else(numberGrade>=90 && numberGrade<=100){
        strcpy(letter_grades,"AA");}}
#include <stdio.h>
int main() {
    FILE *fptr = fopen("C:/Users/Ilker/OneDrive/Desktop/d.txt", "r");
    FILE *fptr2 = fopen("C:/Users/Ilker/OneDrive/Desktop/outf.txt", "w");
    char id[20], name[20], letter_grades[20], c;
    int numberGrade[10], i;
    if (numberGrade >=0 && numberGrade  <= 59) {
        strcpy(letter_grades,"FF");}
    if (numberGrade>=60 && numberGrade <=69){
        strcpy(letter_grades,"DD");}
    if (numberGrade>=70 && numberGrade<=79){
        strcpy(letter_grades,"CC");}
    if (numberGrade>=80 && numberGrade<=89){
        strcpy(letter_grades,"BB");}
    if (numberGrade>=90 && numberGrade<=100){
        strcpy(letter_grades,"AA");}
    fclose(fptr);
    fclose(fptr2);
    return 0;}