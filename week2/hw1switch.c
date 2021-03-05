//hw1 with switch statements//
#include <stdio.h>
int main(){
    int code,x,y;
    printf("code,x,y: ");
    scanf("%d%d%d",&code,&x,&y);
    switch(code){
        case 1:
            printf("%d\n",x+y);
            break;
        case 2:
            printf("%d\n",x-y);
            break;
        case 3:
            printf("%d\n",x*y);
        default:
            printf("code is not defined\n");
            break;
    }
    return 0;
}