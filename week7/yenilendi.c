/* Linear search of an array */
#include <stdio.h>
#define SIZE 100
int linearSearch( const int [], int, int );
int main(){
    int array[ SIZE ], x, searchKey, element;
    for ( x = 0; x <= SIZE - 1; x++ )  /* create data */
        array[ x ] = 2 * x;
    for ( x = 0; x <= SIZE - 1; x++ )  /* print data */
        printf("%3d ",array[ x ]);
    printf("\n");
    printf( "Enter integer search key:\n" );
    scanf( "%d", &searchKey );
    element = linearSearch( array, searchKey, SIZE );
    if ( element != -1 )
        printf( "Found value in element %d\n", element );
    else
        printf( "Value not found\n" );
    return 0;
}
int linearSearch( const int array[], int searchKey, int size ){
    int n;
    //printf("%d",key);
    for ( n = 0; n <= size - 1; ++n )
        if ( array[ n ] == searchKey )
            return n;
    return -1;
}

