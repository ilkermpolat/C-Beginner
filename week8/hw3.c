//hw3//
#include <stdio.h>
int function(int);
int main(){
    int n;
    printf("Enter the value of N: ");
    scanf("%d",&n);
    printf("sum of the digit of %d is %d",n,function(n));
    return 0;}
int function(int n){
    int remainder,t,sum=0;
    t=n;
    while(t!=0){
        remainder=t % 10;
        sum += remainder;
        t = t/10;}
    return sum;}