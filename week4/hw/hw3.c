#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
   int i;
   srand(time(NULL));
   for ( i = 1; i <= 200; i++ ) {
      printf( "%4d", 100 + ( rand() % 401 ) );
      if ( i % 20 == 0 )
         printf( "\n" );
   }
   return 0;
}