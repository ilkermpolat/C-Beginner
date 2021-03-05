#include <stdio.h>
int main(){
    int request,account;
    double balance;
    char name[30];
    FILE *cfPtr;
    if((cfPtr = fopen("clients.dat","r"))==NULL)
        printf("Fıle could not be opened\n");
    else{
        printf("Enter requests\n"
        "1-List accounts with zero balances\n"
        "2-List accounts with credit balances\n"
        "3-List accounts with debit balances\n"
        "4- End of run\n?");
    scanf("%d",&request);
    while(request != 4){
        switch(request){
            case 1:
            printf("\nAccounts with zero balances:\n");
            while(!feof(cfPtr)){
                fscanf(cfPtr,"%d%s%lf\n",&account,name,&balance);
                if (balance==0)
                    printf("%-10d%-13s%7.2f\n",account,name,balance);
            }
            break;
            case 2:
                printf("\nAccounts with credit balances:\n");
                while(!feof(cfPtr)){
                    fscanf(cfPtr,"%d%s%lf\n",&account,name,&balance);
                    if(balance<0)
                        printf("%-10d%-13s%7.2f\n",account,name,balance);
                }
            case 3:
                printf("\nAccounts with debit balances:\n");
                while(!feof(cfPtr)){
                    fscanf(cfPtr,"%d%s%lf\n",account,name,balance);
                    if(balance>0)
                        printf("%-10d%-13s%7.2s\n",account,name,balance);
                }
                break;
        }
        rewind(cfPtr);
        printf("\n?");
        scanf("%d\n",&request);
        }
    }
}