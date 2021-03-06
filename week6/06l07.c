/* Print out a 2-Dimensional array */
#include <stdio.h>
/* 
           COL1  COL2  COL3  COL4  COL5         

          |-----|-----|-----|-----|-----|
  ROW1    |  1  |  2  |  3  | 4   |  5  |
          |-----|-----|-----|-----|-----|
  ROW2    |  10 |  20 |  30 |  40 |  50 |
          |-----|-----|-----|-----|-----|
  ROW3    | 100 | 200 | 300 | 400 | 500 |        
          |-----|-----|-----|-----|-----|
                                                     */   
int main(){
   int two_dim[3][5] = { {1, 2, 3, 4, 5}, 
                        {10, 20, 30, 40, 50},
                        {100, 200, 300, 400, 500} };
   int i, j;
   for (i=0; i<3; i++){
      for (j=0; j<5; j++)
         printf("%4d", two_dim[i][j]);
      printf("\n");   
   }      
   return 0;
}
