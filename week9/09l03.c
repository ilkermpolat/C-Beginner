// atof, _wtof converts a character string to a double value
// atoi, _wtoi converts a character string to an integer value
// atol, _wtol converts a character string to a long integer value
// atoll, _wtoll converts a character string to a long long integer value
#include <stdio.h>
#include <stdlib.h>
int main(){
    double d;
    int i,k;
    k = atol("51");
    d = atof("99.0");
    i = atoi("50");
    printf("According 'atol':\nString converted to %d\n",k);
    printf("%s%.3f\n%s%.3f\n",
           "\nAccording to 'atof':\nThe string \"99.0\" converted to double is ",d,
           "The converted value divided by 2 is ",d / 2.0);
    printf("\nAccording to 'atoi':\nThe string \"50\" converted to integer is %d\n",i);
    return 0;
}