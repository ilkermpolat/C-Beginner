#include <stdio.h>
void cube_by_reference( int *);
int main(){
    int number=5,*ptr;
    ptr=&number;  // Address of "number" is ptr
    printf("Address of number is %p\n",ptr);
    printf("Value of number is %d\n",*ptr);
    printf("First Value is %d\n",number);
    cube_by_reference(ptr);
    printf("New Value is %d\n",number);
    printf("Address of new number is %p\n",ptr);
    printf("Value of new number is %d\n",*ptr);
    return 0;
}

void cube_by_reference( int *nPtr){
    *nPtr = ((*nPtr) * (*nPtr) * (*nPtr));
}