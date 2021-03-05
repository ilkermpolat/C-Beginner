//hw1
#include <stdio.h>
int function(int A[],int B[],int m){
    int i,size=0;
    for(i=0 ; i<m ; i++)
        if(A[i]%3==0 || A[i]%2==0)
            B[size++]=A[i];
    return size;}
int main(){
    int i,x,n;
    int A[]={7,3,2,4,5,6,8,11,13,17};
    int B[10];
    n=10;
    x=function(A,B,n);
    for(i=0;i<10;i++){
        printf("A[%d]=%d\n",i,A[i]);}
    printf("size is %d\n",x);
    for(i=0;i<x;i++){
        printf("%d\n",B[i]);}
    return 0;}


