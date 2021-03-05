#include <stdio.h>
int main(){
    FILE *fptr1,*fptr2;
    int no;
    char fname[20];
    char lname[20];
    fptr1 = fopen("liste","r");
    fptr2 = fopen("outf","w");
    while (!feof(fptr1)){
        fscanf(fptr1,"%d%s%d\n",&no,fname,lname);
        fprintf(fptr2,"%09d %-12s %-15s\n",no,fname,lname);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}