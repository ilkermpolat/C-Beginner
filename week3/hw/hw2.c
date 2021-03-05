//hw with for//
#include<stdio.h>
int main(){
    int x;
    for(x=5;x<=500;x+=7){
        for(;x%6==0;){
            printf("%d\n",x);
            break;
        }
    }
    return 0;
}