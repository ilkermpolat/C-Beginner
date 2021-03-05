#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void PTRF(int A[8][6]){
    int i,j;
    for(i=0;i<8;i++){
        for(j=0;j<6;j++){
            printf("Elements of [%d][%d] is %d\n",i,j,A[i][j]);}}}
void SUMF(int A[8][6],int B[8][6]){
    int i, j, remainder, t, sum=0;
    for(i=0;i<8;i++){
        for(j=0;j<6;j++){
            t=A[i][j];
            while(t!=0){
                remainder=t % 10;
                sum += remainder;
                t = t/10;}
            B[i][j]=sum;
            sum=0;
        }
    }}
int main(){
    int A[8][6], B[8][6], i, j;
    srand(time(NULL));
    for(i=0;i<8;i++){
        for(j=0;j<6;j++){
            A[i][j] = 1000000+rand()%9000001;}}
    PTRF(A);
    SUMF(A,B);
    PTRF(B);
    return 0;}
