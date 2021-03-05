//"Switch Statements"//
#include <stdio.h>
int main (){
    double x=1,y=3;
    int d;
    printf("What do you want with these numbers?");
    scanf("%d\n",&d);
    switch(d){
        case 1:
            printf("%f\n",x+y);
            break;
        case 2:
            printf("%f\n",x-y);
            break;
        case 3:
            printf("%f\n",x*y);
            break;
        case 4:
            printf("%0.2f\n",x/y);
            break;
        default:
            printf(" for + write 1\n for - write 2\n for * write 3\n for / write 4\n");
    }
    return 0;
}