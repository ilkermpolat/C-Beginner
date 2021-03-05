#include <stdio.h>
struct ogr{
    int no;
    char fname[20];
    char lname[20];
}rec;
int main(){
    FILE *fptr1,*fptr2;
    fptr1 = fopen("liste","r");
    fptr2 = fopen("outf","w");
    while(!feof(fptr1)){
        fscanf(fptr1,"%d%s%s\n",&rec.no,rec.fname,rec.lname);
        fprintf(fptr2,"%09d %-12s %-12s\n",rec.no,rec.fname,rec.lname);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}