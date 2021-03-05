#include <stdio.h>
int main(){
    int account;
    char name[30];
    double balance;
    FILE *cfPtr; //file pointer

    if((cfPtr=fopen("clients.dat","w"))==NULL)
        printf("File could not be opened\n");
    else{
        printf("Enter the account,name,and balance.\n");
        printf("Enter 0 to end input.\n");
        while(1){
            scanf("%d",&account);
            if(account==0) break;
            scanf("%s%lf",name,&balance);
            fprintf(cfPtr,"%5d %-10s %10.2f\n",account,name,balance);
        }
        fclose(cfPtr);
    }
    return 0;
}