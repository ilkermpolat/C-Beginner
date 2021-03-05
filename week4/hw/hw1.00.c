#include<stdio.h>
int main(){
    int n ;
    n=5;
    while(n<500){
        while(n%6 == 0){
            printf("n=%2d\n",n);
            break;
        }
        n+=7;
    }
    return 0;
}