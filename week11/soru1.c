//soru1//
#include <stdio.h>
#include <math.h>
void function(double e){
    double n,sum,sn1,factor=1,fact;
    int i;
    for(;n=1;){
        for(i=1;i<=n;i++){
            factor*=i;
            fact=factor;
            sum=pow(2,n)/fact;
            factor=1;}
        for(i=1;i<=n+1;i++){
            factor*=i;
            fact=factor;
            sn1=pow(2,(n+1))/fact;}
        if(abs(sn1-sum)<=e){
            printf("%.2f,%.1f",sn1,n);
            break;}}}
int main(){
    double epsilon;
    printf("Epsilon is small positive number between 10^-6 and 10^-15");
    scanf("%lf",&epsilon);
    function(epsilon);
    return 0;}