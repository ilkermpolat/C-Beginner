#include <stdio.h>   
float fonk(int A[]){
    int i,total=0;
    for (i=0;i<6;i++)
         total+=A[i];
    return (float) total/6;
}

int main(){
    int A[]={7,3,2,4,5,6};
    float mean;
    mean=fonk(A);
    printf("%.2f\n",mean);
    return 0;
}