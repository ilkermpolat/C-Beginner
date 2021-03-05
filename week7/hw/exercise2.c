#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int function(int A[10][5]){
    int i,j;
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            printf("%4d",A[i][j]);
        }
    printf("\n");
    }
}
int main(){
    int A[10][5];
    int i,j;
    srand(time(NULL));
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            A[i][j]=200+rand()%801;
    }}
    function(A);
    return 0;
}