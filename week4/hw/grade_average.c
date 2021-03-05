#include <stdio.h>
int main(){
    int grade_amount=0,total_grade=0,grade;
    double avg;
    for(;grade_amount<5;grade_amount++){
        printf("Enter Grade:\n");
        scanf("%d",&grade);
        total_grade+=grade;
    }
    avg=((float)total_grade/(float)grade_amount);
    printf("%.2f",avg);
    return 0;
}