//soru3//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    int vector[10],random,unique_flag,i,j;
    srand(time(NULL));
    for(i = 0; i < 10; i++) {
        do {
        unique_flag = 1;
        random = 20 + rand() % 71;
        for (j = 0; j < i && unique_flag == 1; j++) {
            if (vector[j] == random) {
                unique_flag = 0;}}}
        while (unique_flag != 1);
            vector[i] = random;
    }
    for(i = 0; i < 10; i++)
        printf("%d\n",vector[i]);
    return 0;
}