//hw3//
#include <stdio.h>
int digit(int *ptrn){
    int remainder,t,sum=0;
    t=*ptrn;
    while(t!=0){
        remainder=t % 10;
        sum += remainder;
        t = t/10;}
return sum;}
int main(){
    int N,*ptrN;
    scanf("%d",&N);
    ptrN=&N;
    printf("%d",digit(ptrN));
    return 0;}