#include <stdio.h>
#include <math.h>
double function(double,double);
int main(){
    double n,x;
    scanf("%lf",&n);
    scanf("%lf",&x);
    printf("%.2f",function(n,x));
    return 0;
}
double function(double n,double x){
    if (n==1)
        return log(x);
    else if(n==2)
        return log10(x);
    else
        return 0;
}
