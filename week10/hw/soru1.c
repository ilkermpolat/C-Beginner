#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>   //1.soru
int prime_finder(int A[7][5],int B[35]){
    int i,j,z,n=1,m,size=0;
    for(i=0;i<7;i++){
        for(j=0;j<5;j++){
            m=A[i][j];
            for(z=2;z<=sqrt(m);z++){
                if ((m % z) == 0) {
                    n=0;
                    break;
                    }
                }
            if(n==1) {
                printf("prime number %d\n",A[i][j]);
                B[size++] = A[i][j];
            }
            n=1;
        }
    }
    return size;
}
int main(){
    int i, c, j, A[7][5], B[35];
    srand(time(NULL));
    for(i=0;i<7;i++){
        for(j=0;j<5;j++){
            A[i][j]=2+rand()%98;}}
    for(i=0;i<7;i++){
        for(j=0;j<5;j++){
            printf("Elements of A is %d\n",A[i][j]);}}
    c=prime_finder(A,B);
    for(i=0;i<c;i++)
        printf("Elements of B is %d\n",B[i]);
    return 0;}
