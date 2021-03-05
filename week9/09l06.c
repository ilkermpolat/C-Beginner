//strcpy( ) function copies whole content of one string into another string.
//strncpy( ) function copies portion of contents of one string into another string.
#include <stdio.h>
#include <string.h>
int main(){
    char s1[]="happy new year";
    char s2[20]="", s3[20]="";
    int i;
    printf("s1=%s\ns2=%s\n",s1,s2);
    //strcpy(s1,s2);  // two of them will be empty
    printf("strcpy(s1,s2)=%s\n",strcpy(s2,s1)); // s1 in elementleri s2 ye geçiyor.
    //printf("strcpy(s1,s3)=%s\n",strcpy(s1,s3)); // s1 is empty now 
    printf("s3=%s\n",s3);
    printf("strncat(s3,s1,5)=%s\n",strncat(s3,s1,5)); // it will take "5" space
    printf("s1=%s\ns2=%s\ns3=%s\n",s1,s2,s3);
    printf("strcpy(s1,s3)=%s\n",strcpy(s1,s3));
    printf("s3=%s\ns1=%s\n",s3,s1);
    printf("Length of s2 = %d\n",strlen(s2));
    for(i=0;s1[i]!='\0';i++)
        s2[i] = s1[i];
    s2[i] = '\0';
    printf("s2=%s\n",s2);
    printf("Length of s2 = %d\n",strlen(s2));
    return 0;
}
