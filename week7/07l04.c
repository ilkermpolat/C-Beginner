#include <stdio.h>
#include <math.h>
//sqrt of elements of B to A 
int fonk(double A[], int B[][3]){
   int i, j, size=0; 
   for (i=0; i < 2; i++) 
       for (j=0; j < 3; j++)
           if ( B[i][j] >= 0) 
               A[size++]=sqrt(B[i][j]);
   return size;
}       
//  scanf and print
int main(){
   int i,j,m;
   int B[2][3];
   double A[10];
   for (i=0; i < 2; i++) 
        for (j=0; j < 3; j++){
            printf("[%d][%d] Elemanini giriniz ? : ",i,j);
            scanf("%d",&B[i][j]);}
   for (i=0; i < 2; i++){ 
        for (j=0; j < 3; j++)
            printf("%6d",B[i][j]);         
        printf("\n");}   
   m=fonk(A,B);
   printf("\n");
   for (i=0; i < m; i++)
       printf("%0.2f",A[i]);
   printf("\n");       
   return 0; 
}
