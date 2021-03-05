/* Use a while loop */ //while(1) ==> while(true)
#include <stdio.h>
int main(){  
   char c = ' ';
   printf("Enter a character:\n(enter x to exit)\n");
   while (c != 'x') {
      c = getchar();
      putchar(c);
   }
   printf("\nOut of the while loop. Bye!\n");
   return 0;
}
