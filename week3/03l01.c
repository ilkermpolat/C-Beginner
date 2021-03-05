/* Find the sum of the integer numbers between 1 and n inclusive  */
#include <stdio.h>
int main(){  
   int i,sum=0,n=10;
   for (i=1; i<=n; i++){
      sum+=i;
   }
   printf("Toplam = %d\n",sum);
   return 0;
}
