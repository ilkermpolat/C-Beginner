//only read file//
#include <stdio.h>
int main(){
    FILE *fptr;
    char c;
    fptr=fopen("C:/Users/Ilker/OneDrive/Desktop/07.11.2020.txt","r");
    while ((c=fgetc(fptr)) != EOF){
        putchar(c);
    }
    return 0;
}

//read and write//
#include <stdio.h>
int main(){
    FILE *fptread, *fptrwrite;
    char c;
    fptread=fopen("C:/Users/Ilker/OneDrive/Desktop/07.11.2020.txt","r");
    fptrwrite=fopen("C:/Users/Ilker/OneDrive/Desktop/deneme.txt","r");
    while ((c=fgetc(fptread)) != EOF){
        putchar(c);
        fputc(c,fptrwrite);
    }
    putchar('\n');
    fclose(fptread);
    fclose(fptrwrite);
    return 0;
}