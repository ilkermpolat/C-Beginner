#include <stdio.h> 

int  array_construct(int A[],int B[],int m){
    int i, size=0;
    for ( i = 0; i < m ; i++)
        if (A[i] >= 0) 
             B[size++]=A[i];
    return size;        
 }
int main(){
    int i,m,n;
    int A[] = { -4,3,4,-5,5,-3,0}, B[7];
    n=7;
    m=array_construct(A,B,n);
    for ( i = 0; i < m ; i++)
       printf("%2d ",B[i]);
    printf("\n");   
    return 0;        
}
