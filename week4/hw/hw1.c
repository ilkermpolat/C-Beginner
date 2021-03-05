#include <stdio.h>
int total(int);
int main(){
    int a;
    scanf("%d",&a);
    printf("%d",total(a));
    return 0;
}
int total(int x){
    int i,sum=0;
    for(i=0;i<=x;i++){
        sum+=i;}
    return sum;
}
