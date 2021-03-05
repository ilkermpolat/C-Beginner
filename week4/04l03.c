#include <stdio.h>
/* This function adds two numbers and returns the result */
float fonk_add( int x, float y ){ 
   float z;
   z = x + y;
   return z;
}

int  main(){                             
   int a; 
   float b, sum;
   a=5;
   b=12.50;
   sum = fonk_add( a, b);     // sum = fonk_add( a, b)=z
   printf("The addition of %d and %0.2f is %0.2f\n", a,b,sum);
   return 0;
}












