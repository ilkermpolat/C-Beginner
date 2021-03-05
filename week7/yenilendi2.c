/* Binary search of an array */
#include <stdio.h>
#define SIZE 15
int binarySearch( const int [], int, int, int );
int main(){
    int array[ SIZE ], i, search_key, result;
    for ( i = 0; i <= SIZE - 1; i++ )
        array[ i ] = 2 * i;
    for ( i = 0; i <= SIZE - 1; i++ )
        printf( "%3d ", array[ i ] );
    printf( "\n" );
    printf( "Enter a number between 0 and 28: " );
    scanf( "%d", &search_key );
    result = binarySearch( array, search_key, 0, SIZE - 1 );
    if ( result != -1 )
        printf( "\n%d found in array element %d\n", search_key, result );
    else
        printf( "\n%d not found\n", search_key );
    return 0;
}
int binarySearch( const int array[], int search_key, int low, int high ){
    int middle;                            //   0  1  2  3  4  5  6   7
    while ( low <= high ) {                //   0  2  4  6  8 10 12* 14
        middle = ( low + high ) / 2;   // search for 12
        if ( search_key == array[middle])   // low=0 high=7 middle=(0+7)/2=3   pass 1
            return middle;              // low=4 high=7 middle=(4+7)/2=5   pass 2
        else if(search_key < array[middle]) // low=6 high=7 middle=(6+7)/2=6   pass 3
            high = middle - 1;          // b[middle]=b[6]=12   found       pass 3
        else
            low = middle + 1;
    }
    return -1;   /* search_key not found */
}
