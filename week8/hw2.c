//hw2//
#include <stdio.h>
void function(int A[3][3],int *nPtr){
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            A[i][j]+=*nPtr;}}
int main(){
    int n=5,i,j;
    int *nPtr;
    int A[3][3]={{3,5,7},{2,4,6},{1,8,9}};
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%2d\n",A[i][j]);}
    nPtr=&n;
    function(A,nPtr);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
            printf("%2d\n",A[i][j]);}
    return 0;}