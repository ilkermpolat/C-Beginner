#include <stdio.h>
int finder(int, int, int);
void printer(int,int,int);
int main(){
    int i,j,k;
    printf("enter value:\n");
    scanf("%d",&i);
    scanf("%d",&j);
    scanf("%d",&k);
    printer(i,j,k);
    finder(i,j,k);
    return 0;
}

void printer(int x,int y,int z){
    printf("%d\n%d\n%d\n",x,y,z);
}
int finder(int o,int p,int r){
    int max;
    if(o>p){
        if (o>r){
            printf("maximum is %d",o);
            max=o;}
        else if(r>o){
            printf("maximum is %d",r);
            max=r;}
    }
    if(p>o){
        if(p<r){
            printf("maximum is %d",r);
            max=r;}
        else if(r<p){
            printf("maximum is %d",p);
            max=p;
    }}
    return max;
}