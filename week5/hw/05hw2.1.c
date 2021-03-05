// calculate the exponenesial with "while" function
#include <stdio.h>
double fact(double value){
    int i;
    double factor=1;
    for(i=1;i<=value;i++){
        factor*=i;
    }
    return factor;
}
int main(){
    double n;
    printf("Enter Value:");
    scanf("%lf",&n);
    double i=1;
    double sum=0;
    while(i<=n){
        sum+= i/fact(i);
        i++;
    }
    printf("%.4lf",sum);
    return 0;
}