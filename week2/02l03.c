//12 tane sayı var rastgele yazılmış ondan sonra bunların ortalamasını alıyoruz sonra input alıp
//o sayı ile bu sayıları karşılaştırıyoruz 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    int k,l,m,n,o,p,r,s,t,x,y,z;
    k=1,l=2,m=3,n=4,o=5,p=7,r=100,s=120,t=720,x=1440,y=1858,z=1283;
    printf("total=%d\n",k+l+m+x+y+z);
    k += r;
    printf("k ile r topladık k ya attık ve sonra çıkardık yine k verdi=%0.3f\n",(float) k-r);
    printf("%0.3f\n",(float)y/r/t/x*s);
    int c;
    printf("sayi gir: \n");
    scanf("%d",&c);
    float total=k+l+m+x+y+z+n+o+p+r+s+t;
    float avg=(k+l+m+x+y+z+n+o+p+r+s+t)/12;
    printf("%0.3f,%d,%0.3f\n",total,c,avg);
    if(c>=avg){
        if (c==avg)
            printf("equal\n");
        else
            printf("greater than total\n");
    }
    else
        printf("lower than total\n");
    return 0;
}