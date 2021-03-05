/* Binary search of an array */
#include <stdio.h>   
#define SIZE 15
int binarySearch( const int [], int, int, int );
int main(){
   int a[ SIZE ], i, key, result;
   for ( i = 0; i <= SIZE - 1; i++ )
      a[ i ] = 2 * i;
   for ( i = 0; i <= SIZE - 1; i++ )
        printf( "%3d ", a[ i ] );
   printf( "\n" );
   printf( "Enter a number between 0 and 28: " );
   scanf( "%d", &key );
   result = binarySearch( a, key, 0, SIZE - 1 );
   if ( result != -1 )
      printf( "\n%d found in array element %d\n", key, result );
   else
      printf( "\n%d not found\n", key );
   return 0;
}
int binarySearch( const int b[], int searchKey, int low, int high ){
   int middle;                            //   0  1  2  3  4  5  6   7
   while ( low <= high ) {                //   0  2  4  6  8 10 12* 14 
      middle = ( low + high ) / 2;   // search for 12
      if ( searchKey == b[middle])   // low=0 high=7 middle=(0+7)/2=3   pass 1 
         return middle;              // low=4 high=7 middle=(4+7)/2=5   pass 2  
      else if(searchKey < b[middle]) // low=6 high=7 middle=(6+7)/2=6   pass 3
         high = middle - 1;          // b[middle]=b[6]=12   found       pass 3
      else
         low = middle + 1;
   }
   return -1;   /* searchKey not found */
}
