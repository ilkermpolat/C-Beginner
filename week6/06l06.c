/* This program sorts an array's values into 
   ascending order */
#include <stdio.h>
#define SIZE 10
//  5 4 3 2  SIZE=4
// pass =1   SIZE-pass=4-1=3    4 5 3 2     4 3 5 2     4 3 2 5 
// pass =2   SIZE-pass=4-2=2    3 4 2 5     3 2 4 5
// pass =3   SIZE-pass=4-3=1    2 3 4 5  
int main() {   
   int a[ ] = { 2, 6, -4, 8, 10, 12, 89, 68, 45, 37 };
   int i, pass, hold;
   printf( "Data items in original order\n" );
   for ( i = 0; i <= SIZE - 1; i++ )
       printf( "%4d", a[ i ] );
   for ( pass = 1; pass <= SIZE - 1; pass++ )  /* passes */
       for ( i = 0 ; i < SIZE-pass; i++ )      /* one pass */
         if ( a[ i ] > a[ i + 1 ] ) {          /* one comparison */
            hold = a[ i ];                   /* one swap */
            a[ i ] = a[ i + 1 ];
            a[ i + 1 ] = hold;
         }
   printf( "\nData items in ascending order\n");
   for ( i = 0; i <= SIZE - 1; i++ )
      printf( "%4d", a[ i ] );
   printf( "\n" );
   return 0;
}
