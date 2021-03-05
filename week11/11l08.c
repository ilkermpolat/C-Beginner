/* A File is passed as a command line argument */
#include <stdio.h>
int main (int args, char *str[]){
   FILE *ptr; 
   char adi[15],soyadi[15];
   int num;
   ptr=fopen(str[1],"r");
   while(!feof(ptr)){
        fscanf(ptr,"%d%s%s",&num,adi,soyadi);
        printf("%09d  %-12s %-15s \n", num,adi,soyadi);
   }   
   return 0;                                                                
}
