#include <stdio.h>
int main(){
    int account;
    char name[30];
    double balance;
    FILE *cfPtr;

    if((cfPtr=fopen("clients.dat","r"))==NULL)
        printf("File could not be opened\n");
    else{
        printf("%-10s%-13s%s\n","Account","Name","Balance");
        while(!feof(cfPtr)){
            fscanf(cfPtr,"%d%s%lf\n",&account,name,&balance);
            printf("%-10d%-10s%10.2f\n",account,name,balance);
        }
        fclose(cfPtr);
    }
    return 0;
}