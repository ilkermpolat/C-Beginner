#include <stdio.h>
int func(int A[]){
    int i,sum=0;
    for(i=0;i<5;i++){
        sum+=A[i]*A[i];
    }
    return sum;
}
int main(){
    int A[5],i;
    for(i=0;i<5;i++){
        printf("Enter elements of %d: ",i);
        scanf("%d",&A[i]);
    }
    printf("Square is: %d\n",func(A));
    return 0;
}
