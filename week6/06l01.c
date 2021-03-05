/* initializing an array */
#include <stdio.h>
/*
                      ARRAY LIST  
        n[0] n[1] ...........................n[9] 
        |---|---|---|---|---|---|---|---|---|----|
        | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10| 11 |
        |---|---|---|---|---|---|---|---|---|----|
                                                        */
int main(){
   int n[ 10 ], i;
   for ( i = 0; i <= 9; i++ )       /* initialize array */
      n[ i ] = i+2;
   printf( "%s%13s\n", "Element", "Value" );
   for ( i = 0; i <= 9; i++ )        /* print array */
      printf( "%7d%13d\n", i, n[ i ] );

   return 0;
}
