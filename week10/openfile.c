#include<stdlib.h>
#include <stdio.h>

int main()
{
    FILE *fp;
    char name[50];
    int roll_no, chars;
    float marks;

    fp = fopen("C:/Users/Ilker/OneDrive/Desktop/records.txt", "r");

    if(fp == NULL)
    {
        printf("Error opening file\n");
        exit(1);
    }

    printf("Testing fscanf() function: \n\n");
    printf("Name:\t\tRoll\t\tMarks\n");

    while( fscanf(fp, "Name: %s\t\tRoll no: %d\t\tMarks: %f\n"
            , name, &roll_no, &marks) != EOF )
    {
        printf("%s\t\t%d\t\t%.2f\n", name, roll_no ,marks);
    }

    fclose(fp);
    return 0;
}