#include <stdio.h>
int main(){
    file *fptr1,*fptr2;
    int no,midterm;
    char fname[20];
    char lname[20];
    fptr1 = fopen("liste","r");
    fptr2 = fopen("outf","w");
    while (!feof(fptr1)){
        fscanf(fptr1,"%d%s%s%d\n",&no,fname,lname,&midterm);
        printf("%09d %-15s %-15s %4d \n",no,fname,lname,midterm);
        fprintf(fptr2, "%09d %-15s %-15s %4d \n", no,fname,lname,midterm);
    }
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}