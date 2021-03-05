//hw1//
#include <stdio.h>
double function(double *,double *);
int main(){
    double x=2.0,y=12.50,*ptrX,*ptrY;
    ptrX=&x;
    ptrY=&y;
    printf("Value of X is %.2f\n",x);
    function(ptrX,ptrY);
    printf("Value of X is %.2f\n",x);
    return 0;}
double function(double *ptrX,double *ptrY){
    *ptrX *= *ptrY;
    return *ptrX;}