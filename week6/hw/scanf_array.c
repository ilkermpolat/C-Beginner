#include <stdio.h>
int main() {
    double A[3][2], B[3][2];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter the elements of %d,%d", i, j);
            scanf("%lf", &A[i][j]);}
        printf(("\n"));}
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter the elements of %d,%d", i, j);
            scanf("%lf", &B[i][j]);}
        printf(("\n"));}

    for (i = 0; i < 3; i++){
        for (j = 0; j < 2; j++) {
            printf("%f    ", A[i][j]);}
        printf("\n");}
    return 0;}