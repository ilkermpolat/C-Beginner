#include <stdio.h>
#include <stdlib.h>
int main(int args, char*str[]){
    int x,sw;
    float y;
    sw=atoi(str[1]);
    x=atoi(str[2]);
    y=atof(str[3]);
    switch(sw){
        case 1:
            printf("%d + %0.2f = %0.2f\n",x,y,x+y);
            break;
        case 2:
            printf("%d - %0.2f = %0.2f\n",x,y,x-y);
            break;
        case 3:
            printf("%d * %0.2f = %0.2f\n",x,y,x*y);
            break;
        case 4:
            printf("%d / %0.2f = %0.2f\n",x,y,x/y);
            break;
        default:
            printf("Wrong argument!.First argument must be 1,2,3,4\n");}
    return 0;}