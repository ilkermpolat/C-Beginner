#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,j,m,n,k=1;
    int **arr;
    printf("satır-sütun sayısı: ");
    scanf("%d%d",&m,&n);
    arr=malloc(m * sizeof(int *));
    for(j=0;j<m;j++)
        arr[j]=malloc(n*sizeof(int));
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            arr[i][j]=k++;}
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%7d",arr[i][j]);
        printf("\n");}
    printf("\n");
    free(arr);
    return 0;
}