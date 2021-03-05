// take n,x value from standart input and use switch in function to calculate new x value
#include <stdio.h>
#include <math.h>
void function(int n,double x){ // if there is no return value you must use void function
    switch(n){
        case 1:
            printf("%.4lf",pow(x,4));
            break;
        case 2:
            printf("%.4lf",pow(x,0.25));
            break;
        default:
            printf("You must enter 1 or 2\n");
            break;
    }
}
int main(){
    int n;
    double x;
    printf("Enter x and n value for test x value:\n");
    scanf("%d %lf",&n,&x);
    function(n,x);
    
    return 0;
}