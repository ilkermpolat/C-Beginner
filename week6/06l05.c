/* Roll a six-sided die 6000000 times */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7
int main(){
   int face, roll, frequency[ SIZE ] = { 0 };    
   srand( time( NULL ) );
   for ( roll = 1; roll <= 6000000; roll++ ) {
      face = 1 + rand() % 6 ;
      ++frequency[ face ];    /* replaces 20-line switch */
   }                          /* of 05l05.c */
   printf( "%s%17s\n", "Face", "Frequency" );
   for ( face = 1; face < SIZE ; face++ )
      printf( "%4d%17d\n", face, frequency[ face ] );
   return 0;
}
