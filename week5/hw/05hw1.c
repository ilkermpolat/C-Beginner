#include <stdio.h>
int function(int n){
    int i,fact=1;
    for(i=0;i<n;i++)
        fact*=(n-i);
    printf("%d",fact);
    return fact;
}
int main(){
    int n;
    printf("enter to calculate factorial number:");
    scanf("%d",&n);
    function(n);
    return 0;
}