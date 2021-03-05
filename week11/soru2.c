//soru2//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int min(int A[10][8],int B[8]) {
    int c,x,min,size=0;
    min=A[0][0];
    for (c = 1; c < 10; c++) {
        for (x = 1; x < 8; x++)
            if (A[c][x] < min)
                B[size++]=A[c][x];}
    return size;}
int main() {
    srand(time(NULL));
    int A[10][8], B[8],m,i,j;
    for (i = 0; i<10;i++){
        for(j = 0; j<8;j++){
            A[i][j]=2+ rand()%97;}}
    for (i = 0; i<10;i++){
        for(j = 0; j<8;j++){
            printf("%d",A[i][j]);}}
    m=min(A,B);
    for(i=0;i<m;i++){
        printf("%d",B[i]);}}