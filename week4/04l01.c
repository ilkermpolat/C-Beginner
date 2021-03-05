/* Testing the math library functions */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
   double  x=2.0, m=3.0;   
   printf( "sqrt(%.1f) = %.1f\n", 900.0, sqrt( 900.0 ) ); //karekök
   printf( "sqrt(%.1f) = %.1f\n", 9.0, sqrt( 9.0 ) );
   printf( "exp(%.1f) = %f\n", 1.0, exp( 5.0 ) ); //e üzeri 1
   printf( "log(%f) = %.1f\n", 2.718282, log( 2.718282 ) );//e tabanında log
   printf( "log(%f) = %.1f\n", 7.389056, log( 7.389056 ) );
   printf( "log10(%.1f) = %.1f\n", 1.0, log10( 1.0 ) );//10 tabanında log
   printf( "log10(%.1f) = %.1f\n", 10.0, log10( 10.0 ) );
   printf( "abs(%d) = %d\n", -13, abs( -13 ) );//mutlak değer
   printf( "fabs(%.1f) = %.1f\n", 13.5, fabs( 13.5 ) );//mutlak değer
   printf( "fabs(%.1f) = %.1f\n", -13.5, fabs( -13.5 ) );
   printf( "ceil(%.1f) = %.1f\n", 9.2, ceil( 9.2 ) );//üstteki(büyük) sayıya gider
   printf( "ceil(%.1f) = %.1f\n", -9.8, ceil( -9.8 ) );
   printf( "floor(%.1f) = %.1f\n", 9.2, floor( 9.2 ) );//altındaki(küçük) en yakın sayıya gider
   printf( "floor(%.1f) = %.1f\n", -9.8, floor( -9.8 ) );
   printf( "pow(%.1f, %.1f) = %.1f\n", 2.0, 7.0, pow( 2.0, 7.0 ) );//üstel yazma 2 üzeri 7
   printf( "pow(%.1f, %.1f) = %.1f\n", 9.0, 0.5, pow( 9.0, 0.5 ) );// karekök 9
   printf( "exp(pow(%.1f,%.1f) = %f\n", x,m,exp(pow(x,m)) );//e üzeri x üzeri m 
   printf( "fmod(%.3f/%.3f) = %.3f\n", 13.675, 2.333, fmod( 13.675,2.333 ) ); // x/y
   return 0;
}




