//read and write file//
#include <stdio.h>
void charReadWrite(FILE *fin,FILE * fout);
int main(){
    FILE *fptr1, *fptr2;
    fptr1 = fopen("input.f","r");
    fptr2 = fopen("output.f","r");
    charReadWrite(fptr1,fptr2);
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}
void charReadWrite(FILE *fin, FILE *fout){
    char c;
    while ((c=fgetc(fin)) != EOF){
        putchar(c);
        fputc(c,fout);
    }
    putchar('\n');
}