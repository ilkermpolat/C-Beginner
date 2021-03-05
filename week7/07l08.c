#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//random array create
int main(){
    int A[10][6],i,j;
    srand(time(NULL));
    for(i=0;i<10;i++){
        for(j=0;j<6;j++) {
            A[i][j] = 250 + rand() % 201;
        }
    }
    for(i=0;i<10;i++){
        for(j=0;j<6;j++) {
            printf("%4d",A[i][j]);
        }
    printf("\n");
    }
}