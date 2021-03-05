/* Recursive factorial function */
#include <stdio.h>
int factor(int);                                           
int main(){
   int i;
   for ( i = 1; i <= 10; i++ )
      printf( "%2d! = %d\n", i, factor( i ) );  
   return 0;
} 
                                                  // 5!                 120            
int factor( int number ){                         // 5*factor(4)   5*24=120  
   if ( number <= 1 )       // base cases         // 4*factor(3)    4*6= 24               
      return 1;                                   // 3*factor(2)    3*2=  6           
   else                                           // 2*factor(1)    2*1=  2        
      return ( number * factor(number - 1));      //           1          1
} 
