#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,m,k=1;
    int *arr;
    printf("Enter the array size: ");
    scanf("%d",&m);
    arr=malloc(m*sizeof(int));
    for(i=0;i<m;i++)
        arr[i]=k++;
    printf("\n");
    for (i=0;i<m;i++){
        printf("%5d",arr[i]);
        if ((i+1)%10==0)
            printf("\n");
    }
    free(arr);
    printf("\n");
    return 0;
}