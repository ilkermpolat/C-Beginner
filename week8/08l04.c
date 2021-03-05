//using the & and * operators//
#include <stdio.h>
int main(){
    int a;   // a is integer
    int *aPtr; // aPtr is a pointer integer
    a=7;
    aPtr=&a;
    printf("Address of a is %p\nValue of aPtr is %p\n",&a,aPtr);  //pointer integer(aPtr) is address of "a"
    printf("Value of a is %d\nValue of *aPtr is %d",a,*aPtr);
    return 0;
}