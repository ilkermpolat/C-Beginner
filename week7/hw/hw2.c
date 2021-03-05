//hw2
#include <stdio.h>
#include <math.h>
void function(double A[2][3], double B[2][3]){
    int i,j;
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%.4f\n",pow(A[i][j],1.0/3.0));
            B[i][j]=pow(A[i][j],1.0/3.0);}}}
int main(){
    int i,j;
    double A[2][3]={{1,8,27},
                    {64,125,216}};
    double B[2][3];
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%.1f\n",A[i][j]);}}
    function(A,B);
    for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%f\n",B[i][j]);}}
    return 0;
}