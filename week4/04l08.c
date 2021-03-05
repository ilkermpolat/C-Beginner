/* 20 random integer numbers produced between 1 and 6 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   int i;
   srand(time(NULL));  // if you remove this statement each run will produce the
                       // the same random numbers
   for ( i = 1; i <= 20; i++ ) {
      printf( "%4d", 1 + ( rand() % 6 ) );
      if ( i % 5 == 0 )
         printf( "\n" );
   }
   return 0;
}

