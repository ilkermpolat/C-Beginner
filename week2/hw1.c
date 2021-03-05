#include<stdio.h>
int main() {
    int code,x,y;
    printf("write code firstly and take two integers: ");
    scanf("%d%d%d",&code,&x,&y);
    printf("result: %d\n",x + y);
    printf("Given x = %d, y = %d\n", x, y);
    printf("x / y produces: %d\n",  x / y);
    printf("(float)x / y produces: %.3f\n", (float) x / y);
    if (code==1)
        printf("%d\n",x+y);
    else if (code==2)
        printf("%d\n",x*y);
    else if (code==3)
        printf("%d\n",x-y);
    else
        printf("code is not defined\n");
}
