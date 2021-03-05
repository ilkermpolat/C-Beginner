//use pointers//
#include <stdio.h>
#define size 8
void f_sum ( float A[size],float *mean1,float *mean2,float *mean){
    float sum=0,sum_positive=0,sum_negative=0,number1=0,number2=0;
    int i;
    for(i=0;i<size;i++){
        sum+=A[i];
        printf("%.2f\n,%.2f\n",sum,A[i]);
    }
    for(i=0;i<size;i++){
        if(A[i]>= 0){
            sum_positive += A[i];
            number1++;
        }
        else{
            sum_negative += A[i];
            number2++;
        }
    }
    *mean1=(sum_positive/number1);
    *mean2=(sum_negative/number2);
    *mean=(sum/(size));
}
int main(){
    float *ptr_mean1,*ptr_mean2,avg,*ptr_mean,avg1,avg2;
    float A[size] = {-4,3,4,-5,5,-3,0,8};
    ptr_mean1=&avg1;
    ptr_mean2=&avg2;
    ptr_mean=&avg;
    f_sum(A,ptr_mean1,ptr_mean2,ptr_mean);
    printf("Mean 1 address is %p\nMean 2 address is %p\n"
           "Value of Mean 1 is %.2f\n"
           "Value of Mean 2 is %.2f\n",ptr_mean1,ptr_mean2,*ptr_mean1,*ptr_mean2);
    printf("Average 1 is %2.0f\n",avg1);
    printf("Average 2 is %2.0f\n",avg2);
    printf("Total Average is %2.0f\n",avg);
    return 0;
}