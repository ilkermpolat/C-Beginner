#include <stdio.h>
#include <math.h>
void function(double A[3][2],double B[3][2]){
    int i,j;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++) {
        B[i][j]=pow(A[i][j],7);
    }}
    return 0;}
int main() {
    double A[3][2], B[3][2];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter the elements of %d,%d", i, j);
            scanf("%lf", &A[i][j]);}
        printf(("\n"));}
    function(A,B);
    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++) {
            printf("%0.4f    ", B[i][j]);}
        printf("\n");}}

