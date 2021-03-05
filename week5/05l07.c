/* Recursive fibonacci function
   0,1,1,2,3,5,8,13,21,34,....                  
*/
#include <stdio.h>
int fibonacci( int );
int main(){
   int result, number;
   printf( "Enter an integer: " );
   scanf( "%d", &number );
   result = fibonacci( number );
   printf( "Fibonacci( %d ) = %d\n", number, result );
   return 0;
}
/* Recursive definition of function fibonacci */
int fibonacci( int n )
{
   if ( n == 0 || n == 1 )      // base cases 
      return n;
   else 
      return fibonacci( n - 1 ) + fibonacci( n - 2 );
}


