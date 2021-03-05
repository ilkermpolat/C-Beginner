#include <stdio.h>
double factorial(double x){
    double fact=1,i,sum=0;
    for(i=1; i<=x; i++){
        fact*=i;
        sum+=(i/fact);}
    return sum;
}
int main(){
    double n;
    printf("Please an integer to calculate:\n");
    scanf("%lf",&n);
    printf("%f is result",factorial(n));
    return 0;
}