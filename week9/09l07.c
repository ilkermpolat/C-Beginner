//using
//strcat (without deleting char combine them)
//strncat (function copies portion of contents of one string into another string)
#include <stdio.h>
#include <string.h>
int main(){
    char s1[20]="happy";
    char s2[]=" new year";
    char s3[40]="";
    printf("s1=%s\ns2=%s\n",s1,s2);
    printf("strcat(s1,s2)=%s\n",strcat(s1,s2)); //new s1 is "happy new year"
    printf("s1=%s\ns2=%s\n",s1,s2);
    printf("strncat(s3,s1,6)=%s\n",strncat(s3,s1,8)); //s3 is "happy ne"
    printf("s3=%s\n",s3);
    printf("strcat(s3,s1)= %s\n",strcat(s3,s1)); // s3 and s1 combined and new s3 is "happy nehappy new year"
    printf("s3=%s\n",s3);
    return 0;
}
