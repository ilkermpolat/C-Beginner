#include <stdio.h>
#define size 5
void modifyElement(int);
void modifyArray(int B[],int x){
    int i;
    for(i=0;i<x;i++)
        B[i] *= 2;}
int main(){
    int A[size] = {0,1,2,3,4},i;
    printf("Effects of passing entire array call by reference:\n"
           "The values of the original array are:\n");
    for(i=0;i<size;i++)
        printf("%3d\n",A[i]);
    printf("\n");
    modifyArray(A,size);
    printf("The values of the modified array are:\n");
    for(i=0;i<size;i++)
        printf("%3d\n",A[i]);
    printf("\nEffects of passing array element call by value:\n"
           "The value of A[3] is %d\n",A[3]);
    printf("\nModified A[3] value is: ");
    modifyElement(A[3]);
    printf("\nValue of A[3] is %d same as the old one\n",A[3]);
    return 0;
}
void modifyElement(int e){
    e*=2;
    printf("%d\n",e);
}