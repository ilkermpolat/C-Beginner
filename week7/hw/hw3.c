//hw3
#include <stdio.h>
void printArray(int A[2][2]);
int main(){
    int A[2][2];
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("what is the (%d,%d) elements of your matrix?",i,j);
            scanf("%d",&A[i][j]);}}
    printArray(A);
}

void printArray(int A[2][2]){
    int i, j;
    for ( i = 0; i <2; i++ ) {
        for ( j = 0; j <2; j++ )
            printf( "%4d", A[ i ][ j ] );
        printf("\n");
    }
}