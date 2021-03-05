//hw//
#include<stdio.h>
int main(){
    int x=5;
    while(x<=500){
        while(x%6==0){
            printf("%d\n",x);
            break;
        }
        x+=7;
    }
    return 0;
}