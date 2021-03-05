/* Conditional infinite loop */
#include <stdio.h>
int main(){  
   char  c=' '; 
   printf("Enter a character:\n(enter x to exit)\n");
   for (  ; c != 'x'; ) {
      c = getchar();
      putchar(c);
   }
   printf("\nOut of the for loop. Bye!\n");
   return 0;
} 
