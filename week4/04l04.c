#include <stdio.h>
/* This function adds two numbers and prints the result */
void  fonk_add( int x, float y ){ 
   float z;
   z = x + y;
   printf("From the function z = %.2f\n",z) ;
}

int  main(){                             
   int  a; 
   float b;
   a=5;
   b=12.50;
   fonk_add( a, b);
   return 0;
}
