//to write between two numbers(input)
#include <stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    for(;x<y;x++) {
        printf("%d\n",x);
    }
    for(;x>y;x--){
        printf("%d\n",x);
    }
    return 0;
}