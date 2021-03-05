#include <stdio.h>
int main(){
    int i;
    for(i=5;i<500;i+=7){
        for(;i%6==0;){
            printf("%d\n",i);
            break;
        }
    }
}