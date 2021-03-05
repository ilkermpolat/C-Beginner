#include <stdio.h>
int sum_of_int(int,int);
int main(){
    int i,j;
    printf("Enter value to add\n");
    scanf("%d",&i);
    scanf("%d",&j);
    printf("result:%.2f\n",(float )sum_of_int(i,j));
    return 0;
}
int sum_of_int(int a, int b){
    return a+b;
}