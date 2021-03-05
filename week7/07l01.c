/* Student poll program */
#include <stdio.h>              
                             
#define RESPONSE_SIZE 40       
#define FREQUENCY_SIZE 11      
/* For answer=4 responses[answer]=responses[4]=8
 frequency [8]=0 initial value 0 before updated.    
 ++frequency[8]=1 becomes 1 for the first time 8 is 
 read from responses array. 
 Each time a value of 8 is read from the responses array
 The value of frequency[8] will be increased by 1 */   
int main(){   
   int answer, rating, frequency[ FREQUENCY_SIZE ] = { 0 };
   int responses[ RESPONSE_SIZE ] = 
      { 1, 2, 6, 4, 8, 5, 9, 7, 8, 10,   
        1, 6, 3, 8, 6, 10, 3, 8, 2, 7,  
        6, 5, 7, 6, 8, 6, 7, 5, 6, 6,   
        5, 6, 7, 5, 6, 4, 8, 6, 8, 10 }; 

   for ( answer = 0; answer <= RESPONSE_SIZE - 1; answer++ )
      frequency[ responses [ answer ] ]++;

   printf( "%s%17s\n", "Rating", "Frequency" );

   for ( rating = 1; rating <= FREQUENCY_SIZE - 1; rating++ )
      printf( "%6d%17d\n", rating, frequency[ rating ] );

   return 0;
}
