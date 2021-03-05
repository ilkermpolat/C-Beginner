#include <stdio.h>
int square(int);
int main(){
    int i;
    for(i=0;i<10;i++){
    printf("%d\n",square(i));
    }
}
int square(int a){
    return a*a;
}