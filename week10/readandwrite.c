//birinden diğerine yazma//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    FILE *from, *to;

    from = fopen("C:/Users/Ilker/OneDrive/Desktop/d.txt", "r");
    if (from == NULL){
        perror("file.txt doesn't exist.");
        exit(1);}

    to = fopen("C:/Users/Ilker/OneDrive/Desktop/outf.txt", "w");
    if (to == NULL){
        perror("copy.txt doesn't exist.");
        exit(1);}
    do{
        c = getc(from);
        if (c != EOF) {
            putc(c, to);}}
    while(c != EOF);
    fclose(to);
    fclose(from);
    exit(0);
}