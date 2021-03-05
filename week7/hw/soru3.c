#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int function(int A[][6], int B[]){
    int i, j, size=0;
    for (i=0; i < 2; i++)
        for (j=0; j < 3; j++)
            if(pow(A[i][j],2)<7000)
                B[size++]=A[i][j];
    return size;}
int main(){
    int i,j,size;
    int A[8][6];
    int B[50];
    srand(time(NULL));
    for(i=0;i<8;i++){
        for(j=0;j<6;j++){
            A[i][j]=50+rand()%51;}}
    size=function(A,B);
    for (i=0; i < size; i++){
        printf("%d",B[i]);
        printf("\n");
        return 0;}}
