/* A integer number a is divided by a float number b and the result returned
to main function. Numbers a and b are read from the standard input  */
#include<stdio.h>
float divider(int,float);
void printer(int,float);
int main(){
    int a;
    float b;
    printf("enter value a and b:\n");
    scanf("%d",&a);
    scanf("%f",&b);
    printer(a,b);
    printf("%.2f\n",divider(a,b));
    return 0;
}
float divider(int x ,float y){
    return (float)x/y;
}
void printer(int k,float l){
    printf("%d\n%.2f\n",k,l);
}