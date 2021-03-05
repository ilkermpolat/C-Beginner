/* Linear search of an array */
#include <stdio.h>
#define SIZE 100
int linearSearch( const int [], int, int );
int main(){   
   int a[ SIZE ], x, searchKey, element;
   for ( x = 0; x <= SIZE - 1; x++ )  /* create data */
      a[ x ] = 2 * x;
   for ( x = 0; x <= SIZE - 1; x++ )  /* print data */
      printf("%3d ",a[ x ]);
   printf("\n");   
   printf( "Enter integer search key:\n" );
   scanf( "%d", &searchKey );
   element = linearSearch( a, searchKey, SIZE );
   if ( element != -1 )
      printf( "Found value in element %d\n", element );
   else
      printf( "Value not found\n" );
   return 0;
}
int linearSearch( const int array[], int key, int size ){
   int n;
   for ( n = 0; n <= size - 1; ++n )
      if ( array[ n ] == key )
         return n;
   return -1;
}

