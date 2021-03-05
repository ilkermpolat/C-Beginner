#include <stdio.h>
/* A integer number a is divided by a float number b and the result returned
to main function. Numbers a and b are read from the standard input  */
float fonk( int x, float y ){ 
   float z;
   z = x / y;
   return z;
}
void print_fonk ( int x,float y,float z){
   printf("From the function : %d / %0.2f = %0.2f \n", x,y,z);
}   
int  main(){                             
   int  a; 
   float b, c;
   while(1){
       printf("Enter two numbers : integer a and float b ? : ");
       scanf("%d %f",&a,&b);
       c = fonk( a, b);     //  c = fonk(a,b) = z
       print_fonk (a,b,c);
   }
   return 0;
}
