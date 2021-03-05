#include <stdio.h>
int main(){
    int A[10];
    int i;
    for(i=0;i<10;i++)
        A[i]= i+2;
    for(i=0;i<10;i++)
        printf("A[%d] is %2d\n",i,A[i]);
    printf("\n");
    printf("Address of First Array;  %p\n",A);
    printf("Address of First Element %p\n", &A[0]);
    printf("\n");
    for(i=0;i<10;i++)
        printf("%2d\n",*A+i); //*PTR = NUMBER
    printf("\n");
    for(i=0;i<10;i++)
        printf("%p\n",A+i); // PTR = ADDRESS
    return 0;
}