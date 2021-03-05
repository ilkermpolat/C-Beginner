#include <stdio.h>
#include <math.h>
void cosine(double A[4][3],double B[4][3]){
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            B[i][j]=cos(A[i][j]*(3.14 / 180.0));}}}
int main(){
    double A[4][3],B[4][3];
    int i,j;
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("what is the (%d,%d) elements of your matrix?",i,j);
            scanf("%f",&A[i][j]);}}
    cosine(A,B);
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("%f",B[i][j]);
        }
        printf("\n");
        return 0;}}