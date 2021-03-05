// sum of the numbers between two numbers (inclusive)
// iki sayı arasındaki sayıların toplamı (dahil)
#include <stdio.h>
int main() {
    int i, sum = 0, k;
    printf("enter the integer(n) that you want to calculate\n");
    scanf("%d",&k);
    printf("what is the first value do you want to calculate(n between k)\n");
    scanf("%d",&i);
    if(i<k){
    for (; i <= k; i++){
        sum+=i;
        printf("%d\n",i);}}
    else if (i>k){
        for (; i >= k ; k++){
            sum+=k;
            printf("%d\n",k);
    }}
    else{
        printf("These numbers are same");
    }
    printf("%d",sum);
    return 0;
}