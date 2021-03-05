/* Compute the sum of the elements of the array */
#include <stdio.h>
#define SIZE 6
int main()
{
    int a[ SIZE ] = { 7,3,2,4,5,6 };
    int i, sum = 0;

    for ( i = 0; i <= SIZE - 1; i++ )
        sum += a[ i ];

    printf( "Total of array element values is %d and average is %f\n",sum,sum%6 );
    return 0;
}